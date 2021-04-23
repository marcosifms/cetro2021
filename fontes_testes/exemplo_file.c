
	
Code:
char * filename = "testFile";
char readBuffer[128];

void testLongs()
{
   writeDebugStreamLine("Testing Longs");

   long fileHandle;

   long writeValue = 0x11DD0000;
   long readValue;

   fileHandle = fileOpenWrite(filename);
   for (int i = 0; i < 10; i++)
   {
      fileWriteLong(fileHandle, writeValue++);
   }
   writeDebugStreamLine("fileHandle: %d", fileHandle);
   fileClose(fileHandle);

   fileHandle = fileOpenRead(filename);
   while (fileReadLong(fileHandle, &readValue))
   {
      writeDebugStreamLine("Read: 0x%X", readValue);
   }
   fileClose(fileHandle);
}

void testFloats()
{
   writeDebugStreamLine("Testing Floats");


   long fileHandle;

   float writeValue = 8.167;
   float readValue;

   fileHandle = fileOpenWrite(filename);
   for (int i = 0; i < 10; i++)
   {
      fileWriteFloat(fileHandle, writeValue);
      writeValue*=5;
   }
   writeDebugStreamLine("fileHandle: %d", fileHandle);
   fileClose(fileHandle);

   fileHandle = fileOpenRead(filename);
   while (fileReadFloat(fileHandle, &readValue))
   {
      writeDebugStreamLine("Read: %f", readValue);
   }
   fileClose(fileHandle);
}

void testShorts()
{
   writeDebugStreamLine("Testing Shorts");


   long fileHandle;

   short writeValue = 2;
   short readValue;

   fileHandle = fileOpenWrite(filename);
   for (int i = 0; i < 10; i++)
   {
      fileWriteShort(fileHandle, writeValue);
      writeValue*=2;
   }
   writeDebugStreamLine("fileHandle: %d", fileHandle);
   fileClose(fileHandle);

   fileHandle = fileOpenRead(filename);
   while (fileReadShort(fileHandle, &readValue))
   {
      writeDebugStreamLine("Read: %d", readValue);
   }
   fileClose(fileHandle);
}

void testChars()
{
   writeDebugStreamLine("Testing Chars");


   long fileHandle;

   char writeValue = 1;
   char readValue;

   fileHandle = fileOpenWrite(filename);
   for (int i = 0; i < 10; i++)
   {
      fileWriteChar(fileHandle, writeValue);
      writeValue+=5;
   }
   writeDebugStreamLine("fileHandle: %d", fileHandle);
   fileClose(fileHandle);

   fileHandle = fileOpenRead(filename);
   while (fileReadChar(fileHandle, &readValue))
   {
      writeDebugStreamLine("Read: %d", readValue);
   }
   fileClose(fileHandle);
}

void testData()
{
   writeDebugStreamLine("Testing Data");

   long fileHandle;

   char * string1 = "I like peanutbutter";
   int strlen1 = strlen(string1);

   char * string2 = "ROBOTC is cool";
   int strlen2 = strlen(string2);

   fileHandle = fileOpenWrite(filename);
   writeDebugStreamLine("fileHandle: %d", fileHandle);

   writeDebugStreamLine("strlen1: %d", strlen1);
   fileWriteData(fileHandle, string1, strlen1 + 1); // gets the 0 terminator as well
   fileWriteData(fileHandle, string2, strlen2 + 1); // gets the 0 terminator as well

   fileClose(fileHandle);

   fileHandle = fileOpenRead(filename);
   memset(readBuffer, 0, 128);
   fileReadData(fileHandle, readBuffer, strlen1 + 1);
   writeDebugStreamLine(readBuffer);
   fileReadData(fileHandle, readBuffer, strlen2 + 1);
   writeDebugStreamLine(readBuffer);

   fileClose(fileHandle);
}


task main()
{
   testLongs();
   testFloats();
   testShorts();
   testChars();
   testData();
}
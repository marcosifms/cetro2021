char * filename = "calibrar.txt";
char readBuffer[128];

void testLongs()
{
   writeDebugStreamLine("Testing Longs");

   long fileHandle;

   long readValue;


   fileHandle = fileOpenRead(filename);
   while (fileReadLong(fileHandle, &readValue))
   {
      writeDebugStreamLine("Read: %d", readValue);
   }
   fileClose(fileHandle);
}
task main()
{

testLongs();
delay(3000);

}

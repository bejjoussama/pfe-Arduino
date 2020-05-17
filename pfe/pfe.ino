int phaseA[] = {0, 6, 13, 19, 25, 31, 37, 44, 50, 56, 62, 68, 74, 80, 86, 92, 98, 103, 109, 115, 120, 126, 131, 136, 142, 147, 152, 157, 162, 167, 171, 176, 180, 185, 189, 193, 197, 201, 205, 208, 212, 215, 219, 222, 225, 228, 231, 233, 236, 238, 240, 242, 244, 246, 247, 249, 250, 251, 252, 253, 254, 254, 255, 255, 255, 255, 255, 254, 254, 253, 252, 251, 250, 249, 247, 246, 244, 242, 240, 238, 236, 233, 231, 228, 225, 222, 219, 215, 212, 208, 205, 201, 197, 193, 189, 185, 180, 176, 171, 167, 162, 157, 152, 147, 142, 136, 131, 126, 120, 115, 109, 103, 98, 92, 86, 80, 74, 68, 62, 56, 50, 44, 37, 31, 25, 19, 13, 6, 0, 6, 13, 19, 25, 31, 37, 44, 50, 56, 62, 68, 74, 80, 86, 92, 98, 103, 109, 115, 120, 126, 131, 136, 142, 147, 152, 157, 162, 167, 171, 176, 180, 185, 189, 193, 197, 201, 205, 208, 212, 215, 219, 222, 225, 228, 231, 233, 236, 238, 240, 242, 244, 246, 247, 249, 250, 251, 252, 253, 254, 254, 255, 255, 255, 255, 255, 254, 254, 253, 252, 251, 250, 249, 247, 246, 244, 242, 240, 238, 236, 233, 231, 228, 225, 222, 219, 215, 212, 208, 205, 201, 197, 193, 189, 185, 180, 176, 171, 167, 162, 157, 152, 147, 142, 136, 131, 126, 120, 115, 109, 103, 98, 92, 86, 80, 74, 68, 62, 56, 50, 44, 37, 31, 25, 19, 13, 6};
int phaseB[] = {221, 218, 214, 211, 207, 204, 200, 196, 192, 188, 183, 179, 174, 170, 165, 160, 155, 150, 145, 140, 135, 129, 124, 118, 113, 107, 101, 96, 90, 84, 78, 72, 66, 60, 54, 48, 42, 35, 29, 23, 17, 10, 4, 2, 8, 15, 21, 27, 33, 39, 46, 52, 58, 64, 70, 76, 82, 88, 94, 100, 105, 111, 117, 122, 128, 133, 138, 143, 149, 154, 159, 163, 168, 173, 177, 182, 186, 190, 194, 198, 202, 206, 210, 213, 217, 220, 223, 226, 229, 231, 234, 236, 239, 241, 243, 245, 246, 248, 249, 250, 252, 253, 253, 254, 254, 255, 255, 255, 255, 255, 254, 254, 253, 252, 251, 250, 248, 247, 245, 243, 241, 239, 237, 235, 232, 230, 227, 224, 221, 218, 214, 211, 207, 204, 200, 196, 192, 188, 183, 179, 174, 170, 165, 160, 155, 150, 145, 140, 135, 129, 124, 118, 113, 107, 101, 96, 90, 84, 78, 72, 66, 60, 54, 48, 42, 35, 29, 23, 17, 10, 4, 2, 8, 15, 21, 27, 33, 39, 46, 52, 58, 64, 70, 76, 82, 88, 94, 100, 105, 111, 117, 122, 128, 133, 138, 143, 149, 154, 159, 163, 168, 173, 177, 182, 186, 190, 194, 198, 202, 206, 210, 213, 217, 220, 223, 226, 229, 231, 234, 236, 239, 241, 243, 245, 246, 248, 249, 250, 252, 253, 253, 254, 254, 255, 255, 255, 255, 255, 254, 254, 253, 252, 251, 250, 248, 247, 245, 243, 241, 239, 237, 235, 232, 230, 227, 224};
int phaseC[] = {221, 224, 227, 230, 232, 235, 237, 239, 241, 243, 245, 247, 248, 250, 251, 252, 253, 254, 254, 255, 255, 255, 255, 255, 254, 254, 253, 253, 252, 250, 249, 248, 246, 245, 243, 241, 239, 236, 234, 231, 229, 226, 223, 220, 217, 213, 210, 206, 202, 198, 194, 190, 186, 182, 177, 173, 168, 163, 159, 154, 149, 143, 138, 133, 128, 122, 117, 111, 105, 100, 94, 88, 82, 76, 70, 64, 58, 52, 46, 39, 33, 27, 21, 15, 8, 2, 4, 10, 17, 23, 29, 35, 42, 48, 54, 60, 66, 72, 78, 84, 90, 96, 101, 107, 113, 118, 124, 129, 135, 140, 145, 150, 155, 160, 165, 170, 174, 179, 183, 188, 192, 196, 200, 204, 207, 211, 214, 218, 221, 224, 227, 230, 232, 235, 237, 239, 241, 243, 245, 247, 248, 250, 251, 252, 253, 254, 254, 255, 255, 255, 255, 255, 254, 254, 253, 253, 252, 250, 249, 248, 246, 245, 243, 241, 239, 236, 234, 231, 229, 226, 223, 220, 217, 213, 210, 206, 202, 198, 194, 190, 186, 182, 177, 173, 168, 163, 159, 154, 149, 143, 138, 133, 128, 122, 117, 111, 105, 100, 94, 88, 82, 76, 70, 64, 58, 52, 46, 39, 33, 27, 21, 15, 8, 2, 4, 10, 17, 23, 29, 35, 42, 48, 54, 60, 66, 72, 78, 84, 90, 96, 101, 107, 113, 118, 124, 129, 135, 140, 145, 150, 155, 160, 165, 170, 174, 179, 183, 188, 192, 196, 200, 204, 207, 211, 214, 218};
int i = 0;
int j = 0;
unsigned long currentTime = 0;
unsigned long prevTime = 0;
unsigned long period = 10;
bool OK = true;
void setup()
{
  pinMode(11, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(6, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(3, OUTPUT);
}
void loop()
{
  currentTime = millis();
  if (currentTime - prevTime >= period)
  {
    if (OK = true)
    {
      analogWrite(11, phaseA[i]);
      analogWrite(10, phaseA[i]);
      analogWrite(9, phaseA[i]);
    }
    else
    {
      analogWrite(6, phaseA[i]);
      analogWrite(5, phaseA[i]);
      analogWrite(3, phaseA[i]);
    }
    prevTime = currentTime;
    i++;

    if (i++ >= 127)
    {
      i = 0;
      OK = !OK;
    }
  }
}

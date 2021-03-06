#include <iostream>

typedef unsigned char uchar;
typedef unsigned char UINT8;

typedef struct
{
    uint32_t min;
    uint32_t max;
    const char* name;
}hidpage;

typedef struct
{
    uint32_t id;
    hidpage* page;
    uint32_t pagesize;
    const char* name;
}hidusagepage;

#define USAGE_PAGE          0x01
#define USAGE               0x02
#define COLLECTION          0x28
#define END_COLLECTION      0xc0
#define USAGE_MINIMUM       0x30
#define USAGE_MAXIMUM       0x0A
#define LOGICAL_MINIMUM     0x05
#define LOGICAL_MAXIMUM     0x09
#define REPORT_COUNT        0x25
#define REPORT_SIZE         0x1D
#define INPUT               0x20
#define OUTPUT              0x24
#define REPORTID            0x21

//---------------COLLECTION-----------------
#define Application         0x01

//---------------USAGE_PAGE-----------------
#define GenericDesktop      0x01
#define Button              0x09
#define USAGE_PAGE_Keyboard 0x07
#define LEDs                0x08


//---------------USAGE-----------------
#define USAGE_Keyboard      0x06
#define Mouse               0x02
#define X                   0x30
#define Y                   0x31
#define USAGE_Wheel         0x38

//---------------INPUT-----------------
#define INPUT_Const         0x01
#define INPUT_Var           0x02
#define INPUT_Rel           0x04
#define INPUT_Wrap          0x08
#define INPUT_NLin          0x10
#define INPUT_NPrf          0x20
#define INPUT_Null          0x40
#define INPUT_Vol           0x80

hidpage hid_Alphnumeric_Display[] = { { 0x0, 0x0, "Undefined" }, { 0x1, 0x1, "Alphanumeric Display" }, { 0x2, 0x1f, "Reserved" }, { 0x20, 0x20, "Display Attributes Report" }, { 0x21, 0x21, "ASCII Character Set" }, { 0x22, 0x22, "Data Read Back" }, { 0x23, 0x23, "Font Read Back" }, { 0x24, 0x24, "Display Control Report" }, { 0x25, 0x25, "Clear Display" }, { 0x26, 0x26, "Display Enable" }, { 0x27, 0x27, "Screen Saver Delay" }, { 0x28, 0x28, "Screen Saver Enable" }, { 0x29, 0x29, "Vertical Scroll" }, { 0x2a, 0x2a, "Horizontal Scroll" }, { 0x2b, 0x2b, "Character Report" }, { 0x2c, 0x2c, "Display Data" }, { 0x2d, 0x2d, "Display Status" }, { 0x2e, 0x2e, "Stat Not Ready" }, { 0x2f, 0x2f, "Stat Ready" }, { 0x30, 0x30, "Err Not a loadable character" }, { 0x31, 0x31, "Err Font data cannot be read" }, { 0x32, 0x32, "Cursor Position Report" }, { 0x33, 0x33, "Row" }, { 0x34, 0x34, "Column" }, { 0x35, 0x35, "Rows" }, { 0x36, 0x36, "Columns" }, { 0x37, 0x37, "Cursor Pixel Positioning" }, { 0x38, 0x38, "Cursor Mode" }, { 0x39, 0x39, "Cursor Enable" }, { 0x3a, 0x3a, "Cursor Blink" }, { 0x3b, 0x3b, "Font Report" }, { 0x3c, 0x3c, "Font Data" }, { 0x3d, 0x3d, "Character Width" }, { 0x3e, 0x3e, "Character Height" }, { 0x3f, 0x3f, "Character Spacing Horizontal" }, { 0x40, 0x40, "Character Spacing Vertical" }, { 0x41, 0x41, "Unicode Character Set" }, { 0x42, 0xffff, "Reserved" } };
hidpage hid_Battery_System[] = { { 0x0, 0x0, "Undefined" }, { 0x1, 0x1, "SMBBatteryMode" }, { 0x2, 0x2, "SMBBatteryStatus" }, { 0x3, 0x3, "SMBAlarmWarning" }, { 0x4, 0x4, "SMBChargerMode" }, { 0x5, 0x5, "SMBChargerStatus" }, { 0x6, 0x6, "SMBChargerSpecInfo" }, { 0x7, 0x7, "SMBSelectorState" }, { 0x8, 0x8, "SMBSelectorPreset" }, { 0x9, 0x9, "SMBSelectorInfo" }, { 0xa, 0xf, "Reserved" }, { 0x10, 0x10, "OptionalMfgFunction1" }, { 0x11, 0x11, "OptionalMfgFunction2" }, { 0x12, 0x12, "OptionalMfgFunction3" }, { 0x13, 0x13, "OptionalMfgFunction4" }, { 0x14, 0x14, "OptionalMfgFunction5" }, { 0x15, 0x15, "ConnectionToSMBus" }, { 0x16, 0x16, "OutputConnection" }, { 0x17, 0x17, "ChargerConnection" }, { 0x18, 0x18, "BatteryInsertion" }, { 0x19, 0x19, "Usenext" }, { 0x1a, 0x1a, "OKToUse" }, { 0x1b, 0x27, "Reserved" }, { 0x28, 0x28, "ManufacturerAccess" }, { 0x29, 0x29, "RemainingCapacityLimit" }, { 0x2a, 0x2a, "RemainingTimeLimit" }, { 0x2b, 0x2b, "AtRate" }, { 0x2c, 0x2c, "CapacityMode" }, { 0x2d, 0x2d, "BroadcastToCharger" }, { 0x2e, 0x2e, "PrimaryBattery" }, { 0x2f, 0x2f, "ChargeController" }, { 0x30, 0x3f, "Reserved" }, { 0x40, 0x40, "TerminateCharge" }, { 0x41, 0x41, "TermminateDischarge" }, { 0x42, 0x42, "BelowRemainingCapacityLimit" }, { 0x43, 0x43, "RemainingTimeLimitExpired" }, { 0x44, 0x44, "Charging" }, { 0x45, 0x45, "Discharging" }, { 0x46, 0x46, "FullyCharged" }, { 0x47, 0x47, "FullyDischarged" }, { 0x48, 0x48, "ConditionningFlag" }, { 0x49, 0x49, "AtRateOK" }, { 0x4a, 0x4a, "SMBErrorCode" }, { 0x4b, 0x4b, "NeedReplacement" }, { 0x4c, 0x5f, "Reserved" }, { 0x60, 0x60, "AtRateTimeToFull" }, { 0x61, 0x61, "AtRateTimeToEmpty" }, { 0x62, 0x62, "AverageCurrent" }, { 0x63, 0x63, "Maxerror" }, { 0x64, 0x64, "RelativeStateOfCharge" }, { 0x65, 0x65, "AbsoluteStateOfCharge" }, { 0x66, 0x66, "RemainingCapacity" }, { 0x67, 0x67, "FullChargeCapacity" }, { 0x68, 0x68, "RunTimeToEmpty" }, { 0x69, 0x69, "AverageTimeToEmpty" }, { 0x6a, 0x6a, "AverageTimeToFull" }, { 0x6b, 0x6b, "CycleCount" }, { 0x6c, 0x7f, "Reserved" }, { 0x80, 0x80, "BattPackModelLevel" }, { 0x81, 0x81, "InternalChargeController" }, { 0x82, 0x82, "PrimaryBatterySupport" }, { 0x83, 0x83, "DesignCapacity" }, { 0x84, 0x84, "SpecificationInfo" }, { 0x85, 0x85, "ManufacturerDate" }, { 0x86, 0x86, "SerialNumber" }, { 0x87, 0x87, "iManufacturerName" }, { 0x88, 0x88, "iDevicename" }, { 0x89, 0x89, "iDeviceChemistery" }, { 0x8a, 0x8a, "iManufacturerData" }, { 0x8b, 0x8b, "Rechargeable" }, { 0x8c, 0x8c, "WarningCapacityLimit" }, { 0x8d, 0x8d, "CapacityGranularity1" }, { 0x8e, 0x8e, "CapacityGranularity2" }, { 0x8f, 0xaf, "Reserved" }, { 0xb0, 0xbf, "Reserved" }, { 0xc0, 0xc0, "InhibitCharge" }, { 0xc1, 0xc1, "EnablePolling" }, { 0xc2, 0xc2, "ResetToZero" }, { 0xc3, 0xcf, "Reserved" }, { 0xd0, 0xd0, "ACPresent" }, { 0xd1, 0xd1, "BatteryPresent" }, { 0xd2, 0xd2, "PowerFail" }, { 0xd3, 0xd3, "AlarmInhibited" }, { 0xd4, 0xd4, "ThermistorUnderRange" }, { 0xd5, 0xd5, "ThermistorHot" }, { 0xd6, 0xd6, "ThermistorCold" }, { 0xd7, 0xd7, "ThermistorOverRange" }, { 0xd8, 0xd8, "VoltageOutOfRange" }, { 0xd9, 0xd9, "CurrentOutOfRange" }, { 0xda, 0xda, "CurrentNotRegulated" }, { 0xdb, 0xdb, "VoltageNotRegulated" }, { 0xdc, 0xdc, "MasterMode" }, { 0xdd, 0xdd, "ChargerBattery/HostControlled" }, { 0xde, 0xef, "Reserved" }, { 0xf0, 0xf0, "ChargerSpecInfo" }, { 0xf1, 0xf1, "ChargerSpecRef" }, { 0xf2, 0xf2, "Level2" }, { 0xf3, 0xf3, "Level3" }, { 0xf2, 0xff, "Reserved" } };
hidpage hid_Button[] = { { 0x0, 0x0, "No Buttons Pressed" }, { 0x1, 0x1, "Button" } };
hidpage hid_Consumer_Devices[] = { { 0x0, 0x0, "Unassigned" }, { 0x1, 0x1, "Consumer Control" }, { 0x2, 0x2, "Numeric Key Pad" }, { 0x4, 0x1f, "Reserved" }, { 0x20, 0x20, "+10" }, { 0x21, 0x21, "+100" }, { 0x22, 0x22, "AM/PM" }, { 0x23, 0x3f, "Reserved" }, { 0x30, 0x30, "Power" }, { 0x31, 0x31, "Reset" }, { 0x32, 0x32, "Sleep" }, { 0x33, 0x33, "Sleep After" }, { 0x34, 0x34, "Sleep Mode" }, { 0x35, 0x35, "Illumination" }, { 0x36, 0x36, "Function Buttons" }, { 0x37, 0x3f, "Reserved" }, { 0x40, 0x40, "Menu" }, { 0x41, 0x41, "Menu  Pick" }, { 0x42, 0x42, "Menu Up" }, { 0x43, 0x43, "Menu Down" }, { 0x44, 0x44, "Menu Left" }, { 0x45, 0x45, "Menu Right" }, { 0x46, 0x46, "Menu Escape" }, { 0x47, 0x47, "Menu Value Increase" }, { 0x48, 0x48, "Menu Value Decrease" }, { 0x49, 0x5f, "Reserved" }, { 0x60, 0x60, "Data On Screen" }, { 0x61, 0x61, "Closed Caption" }, { 0x62, 0x62, "Closed Caption Select" }, { 0x63, 0x63, "VCR/TV" }, { 0x64, 0x64, "Broadcast Mode" }, { 0x65, 0x65, "Snapshot" }, { 0x66, 0x66, "Still" }, { 0x67, 0x7f, "Reserved" }, { 0x80, 0x80, "Selection" }, { 0x81, 0x81, "Assign Selection" }, { 0x82, 0x82, "Mode Step" }, { 0x83, 0x83, "Recall Last" }, { 0x84, 0x84, "Enter Channel" }, { 0x85, 0x85, "Order Movie" }, { 0x86, 0x86, "Channel" }, { 0x87, 0x87, "Media Selection" }, { 0x88, 0x88, "Media Select Computer" }, { 0x89, 0x89, "Media Select TV" }, { 0x8a, 0x8a, "Media Select WWW" }, { 0x8b, 0x8b, "Media Select DVD" }, { 0x8c, 0x8c, "Media Select Telephone" }, { 0x8d, 0x8d, "Media Select Program Guide" }, { 0x8e, 0x8e, "Media Select Video Phone" }, { 0x8f, 0x8f, "Media Select Games" }, { 0x90, 0x90, "Media Select Messages" }, { 0x91, 0x91, "Media Select CD" }, { 0x92, 0x92, "Media Select VCR" }, { 0x93, 0x93, "Media Select Tuner" }, { 0x94, 0x94, "Quit" }, { 0x95, 0x95, "Help" }, { 0x96, 0x96, "Media Select Tape" }, { 0x97, 0x97, "Media Select Cable" }, { 0x98, 0x98, "Media Select Satellite" }, { 0x99, 0x99, "Media Select Security" }, { 0x9a, 0x9a, "Media Select Home" }, { 0x9b, 0x9b, "Media Select Call" }, { 0x9c, 0x9c, "Channel Increment" }, { 0x9d, 0x9d, "Channel Decrement" }, { 0x9e, 0x9f, "Reserved" }, { 0xa0, 0xa0, "VCR Plus" }, { 0xa1, 0xa1, "Once" }, { 0xa2, 0xa2, "Daily" }, { 0xa3, 0xa3, "Weekly" }, { 0xa4, 0xa4, "Monthly" }, { 0xa5, 0xaf, "Reserved" }, { 0xb0, 0xb0, "Play" }, { 0xb1, 0xb1, "Pause" }, { 0xb2, 0xb2, "Record" }, { 0xb3, 0xb3, "Fast Forward" }, { 0xb4, 0xb4, "Rewind" }, { 0xb5, 0xb5, "Scan Next Track" }, { 0xb6, 0xb6, "Scan Previous Track" }, { 0xb7, 0xb7, "Stop" }, { 0xb8, 0xb8, "Eject" }, { 0xb9, 0xb9, "Random Play" }, { 0xba, 0xba, "Select Disc" }, { 0xbb, 0xbb, "Enter Disc" }, { 0xbc, 0xbc, "Repeat" }, { 0xbd, 0xbd, "Tracking" }, { 0xbe, 0xbe, "Track Normal" }, { 0xbf, 0xbf, "Slow Tracking" }, { 0xc0, 0xc0, "Frame Forward" }, { 0xc1, 0xc1, "Frame Back" }, { 0xc2, 0xc2, "Mark" }, { 0xc3, 0xc3, "Clear Mark" }, { 0xc4, 0xc4, "Repeat From Mark" }, { 0xc5, 0xc5, "Return To Mark" }, { 0xc6, 0xc6, "Search Mark Forward" }, { 0xc7, 0xc7, "Search Mark Backwards" }, { 0xc8, 0xc8, "Counter Reset" }, { 0xc9, 0xc9, "Show Counter" }, { 0xca, 0xca, "Tracking Increment" }, { 0xcb, 0xcb, "Tracking Decrement" }, { 0xcc, 0xdf, "Reserved" }, { 0xe0, 0xe0, "Volume" }, { 0xe1, 0xe1, "Balance" }, { 0xe2, 0xe2, "Mute" }, { 0xe3, 0xe3, "Bass" }, { 0xe4, 0xe4, "Treble" }, { 0xe5, 0xe5, "Bass Boost" }, { 0xe6, 0xe6, "Surround Mode" }, { 0xe7, 0xe7, "Loudness" }, { 0xe8, 0xe8, "MPX" }, { 0xe9, 0xe9, "Volume Up" }, { 0xea, 0xea, "Volume Down" }, { 0xeb, 0xef, "Reserved" }, { 0xf0, 0xf0, "Speed Select" }, { 0xf1, 0xf1, "Playback Speed" }, { 0xf2, 0xf2, "Standard Play" }, { 0xf3, 0xf3, "Long Play" }, { 0xf4, 0xf4, "Extended Play" }, { 0xf5, 0xf5, "Slow" }, { 0xf6, 0xff, "Reserved" }, { 0x100, 0x100, "Fan Enable" }, { 0x101, 0x101, "Fan Speed" }, { 0x102, 0x102, "Light" }, { 0x103, 0x103, "Light Illumination Level" }, { 0x104, 0x104, "Climate Control Enable" }, { 0x105, 0x105, "Room Temperature" }, { 0x106, 0x106, "Security Enable" }, { 0x107, 0x107, "Fire Alarm" }, { 0x108, 0x108, "Police Alarm" }, { 0x109, 0xffff, "Reserved" } };
hidpage hid_Generic_Desktop[] = { { 0x0, 0x0, "Undefined" }, { 0x1, 0x1, "Pointer" }, { 0x2, 0x2, "Mouse" }, { 0x3, 0x3, "Reserved" }, { 0x4, 0x4, "Joystick" }, { 0x5, 0x5, "Game Pad" }, { 0x6, 0x6, "Keyboard" }, { 0x7, 0x7, "Keypad" }, { 0x8, 0x2f, "Reserved" }, { 0x30, 0x30, "X" }, { 0x31, 0x31, "Y" }, { 0x32, 0x32, "Z" }, { 0x33, 0x33, "Rx" }, { 0x34, 0x34, "Ry" }, { 0x35, 0x35, "Rz" }, { 0x36, 0x36, "Slider" }, { 0x37, 0x37, "Dial" }, { 0x38, 0x38, "Wheel" }, { 0x39, 0x39, "Hat switch" }, { 0x3a, 0x3a, "Counted Buffer" }, { 0x3b, 0x3b, "Byte Count" }, { 0x3c, 0x3c, "Motion Wakeup" }, { 0x3d, 0x3f, "Reserved" }, { 0x40, 0x40, "Vx" }, { 0x41, 0x41, "Vy" }, { 0x42, 0x42, "Vz" }, { 0x43, 0x43, "Vbrx" }, { 0x44, 0x44, "Vbry" }, { 0x45, 0x45, "Vbrx" }, { 0x46, 0x46, "Vno" }, { 0x47, 0x7f, "Reserved" }, { 0x80, 0x80, "System Control" }, { 0x81, 0x81, "System Power Down" }, { 0x82, 0x82, "System Sleep" }, { 0x83, 0x83, "System Wake Up" }, { 0x84, 0x84, "System Context Menu" }, { 0x85, 0x85, "System Main Menu" }, { 0x86, 0x86, "System App Menu" }, { 0x87, 0x87, "System Help Menu" }, { 0x88, 0x88, "System Menu Exit" }, { 0x89, 0x89, "System Menu Select" }, { 0x8a, 0x8a, "System Menu Right" }, { 0x8b, 0x8b, "System Menu Left" }, { 0x8c, 0x8c, "System Menu Up" }, { 0x8d, 0x8d, "System Menu Down" }, { 0x8e, 0xffff, "Reserved" } };
hidpage hid_Digitizers[] = { { 0x0, 0x0, "Undefined" }, { 0x1, 0x1, "Digitizer" }, { 0x2, 0x2, "Pen" }, { 0x3, 0x3, "Light Pen" }, { 0x4, 0x4, "Touch Screen" }, { 0x5, 0x5, "Touch Pad" }, { 0x6, 0x6, "White Board" }, { 0x7, 0x7, "Coordinate Measuring Machine" }, { 0x8, 0x8, "3-D Digitizer" }, { 0x9, 0x9, "Stereo Plotter" }, { 0xa, 0xa, "Articulated Arm" }, { 0xb, 0xb, "Armature" }, { 0xc, 0xc, "Multiple Point Digitizer" }, { 0xd, 0xd, "Free Space Wand" }, { 0xe, 0x1f, "Reserved" }, { 0x20, 0x20, "Stylus" }, { 0x21, 0x21, "Puck" }, { 0x22, 0x22, "Finger" }, { 0x23, 0x2f, "Reserved" }, { 0x30, 0x30, "Tip Pressure" }, { 0x31, 0x31, "Barrel Pressure" }, { 0x32, 0x32, "In Range" }, { 0x33, 0x33, "Touch" }, { 0x34, 0x34, "Untouch" }, { 0x35, 0x35, "Tap" }, { 0x36, 0x36, "Quality" }, { 0x37, 0x37, "Data Valid" }, { 0x38, 0x38, "Transducer Index" }, { 0x39, 0x39, "Tablet Function Keys" }, { 0x3a, 0x3a, "Program Change Keys" }, { 0x3b, 0x3b, "Battery Strength" }, { 0x3c, 0x3c, "Invert" }, { 0x3d, 0x3d, "X Tilt" }, { 0x3e, 0x3e, "Y Tilt" }, { 0x3f, 0x3f, "Azimuth" }, { 0x40, 0x40, "Altitude" }, { 0x41, 0x41, "Twist" }, { 0x42, 0x42, "Tip Switch" }, { 0x43, 0x43, "Secondary Tip Switch" }, { 0x44, 0x44, "Barrel Switch" }, { 0x45, 0x45, "Eraser" }, { 0x46, 0x46, "Tablet Pick" }, { 0x47, 0xffff, "Reserved" } };
hidpage hid_Gaming_Controls[] = { { 0x0, 0x0, "Undefined" }, { 0x1, 0x1, "3D Game Controller" }, { 0x2, 0x2, "Pinball Device " }, { 0x3, 0x3, "Gun Device " }, { 0x4, 0x1f, "Reserved" }, { 0x20, 0x20, "Point of View" }, { 0x21, 0x21, "Turn Right/Left" }, { 0x22, 0x22, "Pitch Right/Left" }, { 0x23, 0x23, "Roll Forward/Backward" }, { 0x24, 0x24, "Move Right/Left" }, { 0x25, 0x25, "Move Forward/Backward" }, { 0x26, 0x26, "Move Up/Down" }, { 0x27, 0x27, "Lean Right/Left" }, { 0x28, 0x28, "Lean Forward/Backward" }, { 0x29, 0x29, "Height of POV" }, { 0x2a, 0x2a, "Flipper" }, { 0x2b, 0x2b, "Secondary Flipper" }, { 0x2c, 0x2c, "Bump" }, { 0x2d, 0x2d, "New Game" }, { 0x2e, 0x2e, "Shoot Ball" }, { 0x2f, 0x2f, "Player" }, { 0x30, 0x30, "Gun Bolt" }, { 0x31, 0x31, "Gun Clip" }, { 0x32, 0x32, "Gun Selector" }, { 0x33, 0x33, "Gun Single Shot" }, { 0x34, 0x34, "Gun Burst" }, { 0x35, 0x35, "Gun Automatic" }, { 0x36, 0x36, "Gun Safety" }, { 0x37, 0xffff, "reserved" } };
hidpage hid_Keyboard[] = { { 0x0, 0x0, "Reserved (no event indicated)" }, { 0x1, 0x1, "Keyboard ErrorRollOver" }, { 0x2, 0x2, "Keyboard POSTFail" }, { 0x3, 0x3, "Keyboard ErrorUndefine" }, { 0x4, 0x4, "Keyboard a and A" }, { 0x5, 0x5, "Keyboard b and B" }, { 0x6, 0x6, "Keyboard c and C" }, { 0x7, 0x7, "Keyboard d and D" }, { 0x8, 0x8, "Keyboard e and E" }, { 0x9, 0x9, "Keyboard f and F" }, { 0xa, 0xa, "Keyboard g and G" }, { 0xb, 0xb, "Keyboard h and H" }, { 0xc, 0xc, "Keyboard i and I" }, { 0xd, 0xd, "Keyboard j and J" }, { 0xe, 0xe, "Keyboard k and K" }, { 0xf, 0xf, "Keyboard l and L" }, { 0x10, 0x10, "Keyboard m and M" }, { 0x11, 0x11, "Keyboard n and N" }, { 0x12, 0x12, "Keyboard o and O" }, { 0x13, 0x13, "Keyboard p and P" }, { 0x14, 0x14, "Keyboard q and Q" }, { 0x15, 0x15, "Keyboard r and R" }, { 0x16, 0x16, "Keyboard s and S" }, { 0x17, 0x17, "Keyboard t and T" }, { 0x18, 0x18, "Keyboard u and U" }, { 0x19, 0x19, "Keyboard v and V" }, { 0x1a, 0x1a, "Keyboard w and W" }, { 0x1b, 0x1b, "Keyboard x and X" }, { 0x1c, 0x1c, "Keyboard y and Y" }, { 0x1d, 0x1d, "Keyboard z and Z" }, { 0x1e, 0x1e, "Keyboard 1 and !" }, { 0x1f, 0x1f, "Keyboard 2 and @" }, { 0x20, 0x20, "Keyboard 3 and #" }, { 0x21, 0x21, "Keyboard 4 and $" }, { 0x22, 0x22, "Keyboard 5 and %" }, { 0x23, 0x23, "Keyboard 6 and ^" }, { 0x24, 0x24, "Keyboard 7 and &" }, { 0x25, 0x25, "Keyboard 8 and *" }, { 0x26, 0x26, "Keyboard 9 and (" }, { 0x27, 0x27, "Keyboard 0 and )" }, { 0x28, 0x28, "Keyboard Return (ENTER)" }, { 0x29, 0x29, "Keyboard ESCAPE" }, { 0x2a, 0x2a, "Keyboard DELETE (Backspace)" }, { 0x2b, 0x2b, "Keyboard Tab" }, { 0x2c, 0x2c, "Keyboard Spacebar" }, { 0x2d, 0x2d, "Keyboard - and (underscore)" }, { 0x2e, 0x2e, "Keyboard = and +" }, { 0x2f, 0x2f, "Keyboard [ and {" }, { 0x30, 0x30, "Keyboard ] and }" }, { 0x31, 0x31, "Keyboard \ and |" }, { 0x32, 0x32, "Keyboard Non-US # and ~" }, { 0x33, 0x33, "Keyboard ; and :" }, { 0x34, 0x34, "Keyboard ' and \"" }, { 0x35, 0x35, "Keyboard Grave Accent and Tilde" }, { 0x36, 0x36, "Keyboard,and < " }, { 0x37, 0x37, "Keyboard .and >" }, { 0x38, 0x38, "Keyboard / and ? " }, { 0x39, 0x39, "Keyboard Caps Lock" }, { 0x3a, 0x3a, "Keyboard F1" }, { 0x3b, 0x3b, "Keyboard F2" }, { 0x3c, 0x3c, "Keyboard F3" }, { 0x3d, 0x3d, "Keyboard F4" }, { 0x3e, 0x3e, "Keyboard F5" }, { 0x3f, 0x3f, "Keyboard F6" }, { 0x40, 0x40, "Keyboard F7" }, { 0x41, 0x41, "Keyboard F8" }, { 0x42, 0x42, "Keyboard F9" }, { 0x43, 0x43, "Keyboard F10" }, { 0x44, 0x44, "Keyboard F11" }, { 0x45, 0x45, "Keyboard F12" }, { 0x46, 0x46, "Keyboard PrintScreen" }, { 0x47, 0x47, "Keyboard Scroll Lock" }, { 0x48, 0x48, "Keyboard Pause" }, { 0x49, 0x49, "Keyboard Insert" }, { 0x4a, 0x4a, "Keyboard Home" }, { 0x4b, 0x4b, "Keyboard PageUp" }, { 0x4c, 0x4c, "Keyboard Delete Forward" }, { 0x4d, 0x4d, "Keyboard End" }, { 0x4e, 0x4e, "Keyboard PageDown" }, { 0x4f, 0x4f, "Keyboard RightArrow" }, { 0x50, 0x50, "Keyboard LeftArrow" }, { 0x51, 0x51, "Keyboard DownArrow" }, { 0x52, 0x52, "Keyboard UpArrow" }, { 0x53, 0x53, "Keypad Num Lock and Clear" }, { 0x54, 0x54, "Keypad / " }, { 0x55, 0x55, "Keypad * " }, { 0x56, 0x56, "Keypad - " }, { 0x57, 0x57, "Keypad + " }, { 0x58, 0x58, "Keypad ENTER" }, { 0x59, 0x59, "Keypad 1 and End" }, { 0x5a, 0x5a, "Keypad 2 and Down Arrow" }, { 0x5b, 0x5b, "Keypad 3 and PageDn" }, { 0x5c, 0x5c, "Keypad 4 and Left Arrow" }, { 0x5d, 0x5d, "Keypad 5" }, { 0x5e, 0x5e, "Keypad 6 and Right Arrow" }, { 0x5f, 0x5f, "Keypad 7 and Home" }, { 0x60, 0x60, "Keypad 8 and Up Arrow" }, { 0x61, 0x61, "Keypad 9 and PageUp" }, { 0x62, 0x62, "Keypad 0 and Insert" }, { 0x63, 0x63, "Keypad . and Delete" }, { 0x64, 0x64, "Keyboard Non - US \ and | " }, { 0x65, 0x65, "Keyboard Application" }, { 0x66, 0x66, "Keyboard Power" }, { 0x67, 0x67, "Keypad = " }, { 0x68, 0x68, "Keyboard F13" }, { 0x69, 0x69, "Keyboard F14" }, { 0x6a, 0x6a, "Keyboard F15" }, { 0x6b, 0x6b, "Keyboard F16" }, { 0x6c, 0x6c, "Keyboard F17" }, { 0x6d, 0x6d, "Keyboard F18" }, { 0x6e, 0x6e, "Keyboard F19" }, { 0x6f, 0x6f, "Keyboard F20" }, { 0x70, 0x70, "Keyboard F21" }, { 0x71, 0x71, "Keyboard F22" }, { 0x72, 0x72, "Keyboard F23" }, { 0x73, 0x73, "Keyboard F24" }, { 0x74, 0x74, "Keyboard Execute" }, { 0x75, 0x75, "Keyboard Help" }, { 0x76, 0x76, "Keyboard Menu" }, { 0x77, 0x77, "Keyboard Select" }, { 0x78, 0x78, "Keyboard Stop" }, { 0x79, 0x79, "Keyboard Again" }, { 0x7a, 0x7a, "Keyboard Undo" }, { 0x7b, 0x7b, "Keyboard Cut" }, { 0x7c, 0x7c, "Keyboard Copy" }, { 0x7d, 0x7d, "Keyboard Paste" }, { 0x7e, 0x7e, "Keyboard Find" }, { 0x7f, 0x7f, "Keyboard Mute" }, { 0x80, 0x80, "Keyboard Volume Up" }, { 0x81, 0x81, "Keyboard Volume Down" }, { 0x82, 0x82, "Keyboard Locking Caps Lock" }, { 0x83, 0x83, "Keyboard Locking Num Lock" }, { 0x84, 0x84, "Keyboard Locking Scroll Lock" }, { 0x85, 0x85, "Keypad Comma" }, { 0x86, 0x86, "Keypad Equal Sign" }, { 0x87, 0x87, "Keyboard Kanji1" }, { 0x88, 0x88, "Keyboard Kanji2" }, { 0x89, 0x89, "Keyboard Kanji3" }, { 0x8a, 0x8a, "Keyboard Kanji4" }, { 0x8b, 0x8b, "Keyboard Kanji5" }, { 0x8c, 0x8c, "Keyboard Kanji6" }, { 0x8d, 0x8d, "Keyboard Kanji7" }, { 0x8e, 0x8e, "Keyboard Kanji8" }, { 0x8f, 0x8f, "Keyboard Kanji9" }, { 0x90, 0x90, "Keyboard LANG1" }, { 0x91, 0x91, "Keyboard LANG2" }, { 0x92, 0x92, "Keyboard LANG3" }, { 0x93, 0x93, "Keyboard LANG4" }, { 0x94, 0x94, "Keyboard LANG5" }, { 0x95, 0x95, "Keyboard LANG6" }, { 0x96, 0x96, "Keyboard LANG7" }, { 0x97, 0x97, "Keyboard LANG8" }, { 0x98, 0x98, "Keyboard LANG9" }, { 0x99, 0x99, "Keyboard Alternate Erase" }, { 0x9a, 0x9a, "Keyboard SysReq / Attention" }, { 0x9b, 0x9b, "Keyboard Cancel" }, { 0x9c, 0x9c, "Keyboard Clear" }, { 0x9d, 0x9d, "Keyboard Prior" }, { 0x9e, 0x9e, "Keyboard Return" }, { 0x9f, 0x9f, "Keyboard Separator" }, { 0xa0, 0xa0, "Keyboard Out" }, { 0xa1, 0xa1, "Keyboard Oper" }, { 0xa2, 0xa2, "Keyboard Clear / Again" }, { 0xa3, 0xa3, "Keyboard CrSel / Props" }, { 0xa4, 0xa4, "Keyboard ExSel" }, { 0xa5, 0xdf, "Reserved" }, { 0xe0, 0xe0, "Keyboard LeftControl" }, { 0xe1, 0xe1, "Keyboard LeftShift" }, { 0xe2, 0xe2, "Keyboard LeftAlt" }, { 0xe3, 0xe3, "Keyboard Left GUI" }, { 0xe4, 0xe4, "Keyboard RightControl" }, { 0xe5, 0xe5, "Keyboard RightShift" }, { 0xe6, 0xe6, "Keyboard RightAlt" }, { 0xe7, 0xe7, "Keyboard Right GUI" }, { 0xe8, 0xffff, "Reserved" } };
hidpage hid_LEDs[] = { { 0x0, 0x0, "Undefined" }, { 0x1, 0x1, "Num Lock" }, { 0x2, 0x2, "Caps Lock" }, { 0x3, 0x3, "Scroll Lock" }, { 0x4, 0x4, "Compose" }, { 0x5, 0x5, "Kana" }, { 0x6, 0x6, "Power" }, { 0x7, 0x7, "Shift" }, { 0x8, 0x8, "Do Not Disturb" }, { 0x9, 0x9, "Mute" }, { 0xa, 0xa, "Tone Enable" }, { 0xb, 0xb, "High Cut Filter" }, { 0xc, 0xc, "Low Cut Filter" }, { 0xd, 0xd, "Equalizer Enable" }, { 0xe, 0xe, "Sound Field On" }, { 0xf, 0xf, "Surround field On" }, { 0x10, 0x10, "Repeat" }, { 0x11, 0x11, "Stereo" }, { 0x12, 0x12, "Sampling Rate Detect" }, { 0x13, 0x13, "Spinning" }, { 0x14, 0x14, "CAV" }, { 0x15, 0x15, "CLV" }, { 0x16, 0x16, "Recording Format Detect" }, { 0x17, 0x17, "Off-Hook" }, { 0x18, 0x18, "Ring" }, { 0x19, 0x19, "Message Waiting" }, { 0x1a, 0x1a, "Data Mode" }, { 0x1b, 0x1b, "Battery Operation" }, { 0x1c, 0x1c, "Battery OK" }, { 0x1d, 0x1d, "Battery Low" }, { 0x1e, 0x1e, "Speaker" }, { 0x1f, 0x1f, "Head Set" }, { 0x20, 0x20, "Hold" }, { 0x21, 0x21, "Microphone" }, { 0x22, 0x22, "Coverage" }, { 0x23, 0x23, "Night Mode" }, { 0x24, 0x24, "Send Calls" }, { 0x25, 0x25, "Call Pickup" }, { 0x26, 0x26, "Conference" }, { 0x27, 0x27, "Stand-by" }, { 0x28, 0x28, "Camera On" }, { 0x29, 0x29, "Camera Off" }, { 0x2a, 0x2a, "On-Line" }, { 0x2b, 0x2b, "Off-Line" }, { 0x2c, 0x2c, "Busy" }, { 0x2d, 0x2d, "Ready" }, { 0x2e, 0x2e, "Paper-Out" }, { 0x2f, 0x2f, "Paper-Jam" }, { 0x30, 0x30, "Remote" }, { 0x31, 0x31, "Forward" }, { 0x32, 0x32, "Reverse" }, { 0x33, 0x33, "Stop" }, { 0x34, 0x34, "Rewind" }, { 0x35, 0x35, "Fast Forward" }, { 0x36, 0x36, "Play" }, { 0x37, 0x37, "Pause" }, { 0x38, 0x38, "Record" }, { 0x39, 0x39, "Error" }, { 0x3a, 0x3a, "Usage Selected Indicator" }, { 0x3b, 0x3b, "Usage In Use Indicator" }, { 0x3c, 0x3c, "Usage Multi Mode Indicator" }, { 0x3d, 0x3d, "Indicator On" }, { 0x3e, 0x3e, "Indicator Flash" }, { 0x3f, 0x3f, "Indicator Slow Blink" }, { 0x40, 0x40, "Indicator Fast Blink" }, { 0x41, 0x41, "Indicator Off" }, { 0x42, 0x42, "Flash On Time" }, { 0x43, 0x43, "Slow Blink On Time" }, { 0x44, 0x44, "Slow Blink Off Time" }, { 0x45, 0x45, "Fast Blink On Time" }, { 0x46, 0x46, "Fast Blink Off Time" }, { 0x47, 0x47, "Usage Indicator Color" }, { 0x48, 0x48, "Red" }, { 0x49, 0x49, "Green" }, { 0x4a, 0x4a, "Amber" }, { 0x4b, 0x4b, "Generic Indicator" }, { 0x4c, 0xffff, "Reserved" } };
hidpage hid_Monitor[] = { { 0x0, 0x0, "Undefined" }, { 0x1, 0x1, "Monitor Control" }, { 0x2, 0x2, "EDID Information" }, { 0x3, 0x3, "VDIF Information" }, { 0x4, 0x4, "VESA Version" }, { 0x5, 0x5, "On Screen Display" }, { 0x6, 0x6, "Auto Size Center" }, { 0x7, 0x7, "Polarity Horz Synch" }, { 0x8, 0x8, "Polarity Vert Synch" }, { 0x9, 0x9, "Sync Type" }, { 0xa, 0xa, "Screen Position" }, { 0xb, 0xb, "Horizontal Frequency" }, { 0xc, 0xc, "Vertical Frequency" }, { 0xd, 0xffff, "Reserved" } };
hidpage hid_Monitor_Enumerated_Values[] = { { 0x0, 0x0, "unassigned" }, { 0x1, 0x1, "ENUM" } };
hidpage hid_Ordinals[] = { { 0x0, 0x0, "Unused" }, { 0x1, 0x1, "Instance" } };
hidpage hid_Power_Device[] = { { 0x0, 0x0, "Undefined" }, { 0x1, 0x1, "iName" }, { 0x2, 0x2, "PresentStatus" }, { 0x3, 0x3, "ChangedStatus" }, { 0x4, 0x4, "UPS" }, { 0x5, 0x5, "PowerSupply" }, { 0x6, 0xf, "Reserved" }, { 0x10, 0x10, "BatterySystem" }, { 0x11, 0x11, "BatterySystemID" }, { 0x12, 0x12, "Battery" }, { 0x13, 0x13, "BatteryID" }, { 0x14, 0x14, "Charger" }, { 0x15, 0x15, "ChargerID" }, { 0x16, 0x16, "PowerConverter" }, { 0x17, 0x17, "PowerConverterID" }, { 0x18, 0x18, "OutletSystem" }, { 0x19, 0x19, "OutletSystemID" }, { 0x1a, 0x1a, "Input" }, { 0x1b, 0x1b, "InputID" }, { 0x1c, 0x1c, "Output" }, { 0x1d, 0x1d, "OutputID" }, { 0x1e, 0x1e, "Flow" }, { 0x1f, 0x1f, "FlowID" }, { 0x20, 0x20, "Outlet" }, { 0x21, 0x21, "OutletID" }, { 0x22, 0x22, "Gang" }, { 0x23, 0x23, "GangID" }, { 0x24, 0x24, "Sink" }, { 0x25, 0x25, "SinkID" }, { 0x26, 0x2f, "Reserved" }, { 0x30, 0x30, "Voltage" }, { 0x31, 0x31, "Current" }, { 0x32, 0x32, "Frequency" }, { 0x33, 0x33, "ApparentPower" }, { 0x34, 0x34, "ActivePower" }, { 0x35, 0x35, "PercentLoad" }, { 0x36, 0x36, "Temperature" }, { 0x37, 0x37, "Humidity" }, { 0x38, 0x3f, "Reserved" }, { 0x40, 0x40, "ConfigVoltage" }, { 0x41, 0x41, "ConfigCurrent" }, { 0x42, 0x42, "ConfigFrequency" }, { 0x43, 0x43, "ConfigApparentPower" }, { 0x44, 0x44, "ConfigActivePower" }, { 0x45, 0x45, "ConfigPercentLoad" }, { 0x46, 0x46, "ConfigTemperature" }, { 0x47, 0x47, "ConfigHumidity" }, { 0x48, 0x4f, "Reserved" }, { 0x50, 0x50, "SwitchOnControl" }, { 0x51, 0x51, "SwitchOffControl" }, { 0x52, 0x52, "ToggleControl" }, { 0x53, 0x53, "LowVoltageTransfer" }, { 0x54, 0x54, "HighVoltageTransfer" }, { 0x55, 0x55, "DelayBeforeReboot" }, { 0x56, 0x56, "DelayBeforeStartup" }, { 0x57, 0x57, "DelayBeforeShutdown" }, { 0x58, 0x58, "Test" }, { 0x59, 0x59, "Vendorspecificcommand" }, { 0x5a, 0x5f, "Reserved" }, { 0x60, 0x60, "Present" }, { 0x61, 0x61, "Good" }, { 0x62, 0x62, "InternalFailure" }, { 0x63, 0x63, "VoltageOutOfRange" }, { 0x64, 0x64, "FrequencyOutOfRange" }, { 0x65, 0x65, "Overload" }, { 0x66, 0x66, "OverCharged" }, { 0x67, 0x67, "OverTemperature" }, { 0x68, 0x68, "ShutdownRequested" }, { 0x69, 0x69, "ShutdownImminent" }, { 0x6a, 0x6a, "VendorSpecificAnswerValid" }, { 0x6b, 0x6b, "SwitchOn/Off" }, { 0x6c, 0x6c, "Switcheble" }, { 0x6d, 0x6d, "Used" }, { 0x6e, 0x6e, "Boost" }, { 0x6f, 0x6f, "Buck" }, { 0x70, 0x70, "Initialized" }, { 0x71, 0x71, "Tested" }, { 0x71, 0xff, "Reserved" } };
hidpage hid_Simulation_Controls[] = { { 0x0, 0x0, "Undefined" }, { 0x1, 0x1, "Flight Simulation Device" }, { 0x2, 0x2, "Automobile Simulation Device" }, { 0x3, 0x3, "Tank Simulation Device" }, { 0x4, 0x4, "Spaceship Simulation Device" }, { 0x5, 0x5, "Submarine Simulation Device" }, { 0x6, 0x6, "Sailing Simulation Device" }, { 0x7, 0x7, "Motorcycle Simulation Device" }, { 0x8, 0x8, "Sports Simulation Device" }, { 0x9, 0x9, "Airplane Simulation Device" }, { 0xa, 0xa, "Helicopter Simulation Device" }, { 0xb, 0xb, "Magic Carpet Simulation Device" }, { 0xc, 0xc, "Bicycle" }, { 0xd, 0x1f, "reserved" }, { 0x20, 0x20, "Flight Control Stick" }, { 0x21, 0x21, "Flight Stick" }, { 0x22, 0x22, "Cyclic Control" }, { 0x23, 0x23, "Cyclic Trim" }, { 0x24, 0x24, "Flight Yoke" }, { 0x25, 0x25, "Track Control" }, { 0x26, 0x26, "Driving Control" }, { 0x27, 0xcf, "reserved" }, { 0xb0, 0xb0, "Aileron" }, { 0xb1, 0xb1, "Aileron Trim" }, { 0xb2, 0xb2, "Anti-Torque Control" }, { 0xb3, 0xb3, "Auto-pilot enable" }, { 0xb4, 0xb4, "Chaff Release" }, { 0xb5, 0xb5, "Collective Control" }, { 0xb6, 0xb6, "Dive Brake" }, { 0xb7, 0xb7, "Electronic Counter Measures" }, { 0xb8, 0xb8, "Elevator" }, { 0xb9, 0xb9, "Elevator Trim" }, { 0xba, 0xba, "Rudder" }, { 0xbb, 0xbb, "Throttle" }, { 0xbc, 0xbc, "Flight Communication" }, { 0xbd, 0xbd, "Flare Release" }, { 0xbe, 0xbe, "Landing Gear" }, { 0xbf, 0xbf, "Toe Brake" }, { 0xc0, 0xc0, "Trigger" }, { 0xc1, 0xc1, "Weapons Arm" }, { 0xc2, 0xc2, "Weapons Select" }, { 0xc3, 0xc3, "Wing Flaps" }, { 0xc4, 0xc4, "Accelerator" }, { 0xc5, 0xc5, "Brake" }, { 0xc6, 0xc6, "Clutch" }, { 0xc7, 0xc7, "Shifter" }, { 0xc8, 0xc8, "Steering" }, { 0xc9, 0xc9, "Turret Direction" }, { 0xca, 0xca, "Barrel Elevation" }, { 0xcb, 0xcb, "Dive Plane" }, { 0xcc, 0xcc, "Ballast" }, { 0xcd, 0xcd, "Bicycle Crank" }, { 0xce, 0xce, "Handle Bars" }, { 0xcf, 0xcf, "Front Brake" }, { 0xd0, 0xd0, "Rear Brake" }, { 0xd1, 0xffff, "reserved" } };
hidpage hid_Sports_Controls[] = { { 0x0, 0x0, "Unidentified" }, { 0x1, 0x1, "Baseball Bat" }, { 0x2, 0x2, "Golf Club" }, { 0x3, 0x3, "Rowing Machine" }, { 0x4, 0x4, "Treadmill" }, { 0x5, 0x2f, "Reserved" }, { 0x30, 0x30, "Oar" }, { 0x31, 0x31, "Slope" }, { 0x32, 0x32, "Rate" }, { 0x33, 0x33, "Stick Speed" }, { 0x34, 0x34, "Stick Face Angle" }, { 0x35, 0x35, "Stick Heel/Toe" }, { 0x36, 0x36, "Stick Follow Through" }, { 0x37, 0x37, "Stick Tempo" }, { 0x38, 0x38, "Stick Type" }, { 0x39, 0x39, "Stick Height" }, { 0x3a, 0x4f, "Reserved" }, { 0x50, 0x50, "Putter" }, { 0x51, 0x51, "1 Iron" }, { 0x52, 0x52, "2 Iron" }, { 0x53, 0x53, "3 Iron" }, { 0x54, 0x54, "4 Iron" }, { 0x55, 0x55, "5 Iron" }, { 0x56, 0x56, "6 Iron" }, { 0x57, 0x57, "7 Iron" }, { 0x58, 0x58, "8 Iron" }, { 0x59, 0x59, "9 Iron" }, { 0x59, 0x59, "10 Iron" }, { 0x5a, 0x5a, "11 Iron" }, { 0x5b, 0x5b, "Sand Wedge" }, { 0x5c, 0x5c, "Loft Wedge" }, { 0x5d, 0x5d, "Power Wedge" }, { 0x5e, 0x5e, "1 Wood" }, { 0x5f, 0x5f, "3 Wood" }, { 0x60, 0x60, "5 Wood" }, { 0x61, 0x61, "7 Wood" }, { 0x62, 0x62, "9 Wood" }, { 0x63, 0xffff, "reserved" } };
hidpage hid_Telephony_Devices[] = { { 0x0, 0x0, "Unassigned" }, { 0x1, 0x1, "Phone" }, { 0x2, 0x2, "Answering Machine" }, { 0x3, 0x3, "Message Controls" }, { 0x4, 0x4, "Handset" }, { 0x5, 0x5, "Headset" }, { 0x6, 0x6, "Telephony Key Pad" }, { 0x7, 0x7, "Programmable Button" }, { 0x8, 0x1f, "Reserved" }, { 0x20, 0x20, "Hook Switch" }, { 0x21, 0x21, "Flash" }, { 0x22, 0x22, "Feature" }, { 0x23, 0x23, "Hold" }, { 0x24, 0x24, "Redial" }, { 0x25, 0x25, "Transfer" }, { 0x26, 0x26, "Drop" }, { 0x27, 0x27, "Park" }, { 0x28, 0x28, "Forward Calls" }, { 0x29, 0x29, "Alternate Function" }, { 0x2a, 0x2a, "Line" }, { 0x2b, 0x2b, "Speaker Phone" }, { 0x2c, 0x2c, "Conference" }, { 0x2d, 0x2d, "Ring Enable" }, { 0x2e, 0x2e, "Ring Select" }, { 0x2f, 0x2f, "Phone Mute" }, { 0x30, 0x30, "Caller ID" }, { 0x31, 0x4f, "Reserved" }, { 0x50, 0x50, "Speed Dial" }, { 0x51, 0x51, "Store Number" }, { 0x52, 0x52, "Recall Number" }, { 0x53, 0x53, "Phone Directory" }, { 0x54, 0x6f, "Reserved" }, { 0x70, 0x70, "Voice Mail" }, { 0x71, 0x71, "Screen Calls" }, { 0x72, 0x72, "Do Not Disturb" }, { 0x73, 0x73, "Message" }, { 0x74, 0x74, "Answer On/Off" }, { 0x75, 0x8f, "Reserved" }, { 0x90, 0x90, "Inside Dial Tone" }, { 0x91, 0x91, "Outside Dial Tone" }, { 0x92, 0x92, "Inside Ring Tone" }, { 0x93, 0x93, "Outside Ring Tone" }, { 0x94, 0x94, "Priority Ring Tone" }, { 0x95, 0x95, "Inside Ringback" }, { 0x96, 0x96, "Priority Ringback" }, { 0x97, 0x97, "Line Busy Tone" }, { 0x98, 0x98, "Reorder Tone" }, { 0x99, 0x99, "Call Waiting Tone" }, { 0x9a, 0x9a, "Confirmation Tone 1" }, { 0x9b, 0x9b, "Confirmation Tone 2" }, { 0x9c, 0x9c, "Tones Off" }, { 0x9d, 0xaf, "Reserved" }, { 0xb0, 0xb0, "Phone Key 0" }, { 0xb1, 0xb1, "Phone Key 1" }, { 0xb2, 0xb2, "Phone Key 2" }, { 0xb3, 0xb3, "Phone Key 3" }, { 0xb4, 0xb4, "Phone Key 4" }, { 0xb5, 0xb5, "Phone Key 5" }, { 0xb6, 0xb6, "Phone Key 6" }, { 0xb7, 0xb7, "Phone Key 7" }, { 0xb8, 0xb8, "Phone Key 8" }, { 0xb9, 0xb9, "Phone Key 9" }, { 0xba, 0xba, "Phone Key Star" }, { 0xbb, 0xbb, "Phone Key Pound" }, { 0xbc, 0xbc, "Phone Key A" }, { 0xbd, 0xbd, "Phone Key B" }, { 0xbe, 0xbe, "Phone Key C" }, { 0xbf, 0xbf, "Phone Key D" }, { 0xc0, 0xffff, "Reserved" } };
hidpage hid_Unicode[] = { { 0x0, 0x0, "Unicode Char 0" }, { 0x0, 0x0, "Unicode Char" } };
hidpage hid_Vendor_Defined_Page_1[] = { { 0x0, 0x0, "Undefined" }, { 0x1, 0x1, "Vendor Usage 1" }, { 0x2, 0x2, "Vendor Usage 2" }, { 0x3, 0xffff, "Reserved" } };
hidpage hid_VESA_Command[] = { { 0x0, 0x0, "Undefined" }, { 0x1, 0x1, "Settings" }, { 0x2, 0x2, "Degauss" }, { 0x3, 0xffff, "Reserved" } };
hidpage hid_VESA_Virtual_Controls[] = { { 0x0, 0xf, "Reserved" }, { 0x10, 0x10, "Brightness" }, { 0x12, 0x12, "Contrast" }, { 0x16, 0x16, "Video Gain Red" }, { 0x18, 0x18, "Video Gain Green" }, { 0x1a, 0x1a, "Video Gain Blue" }, { 0x1c, 0x1c, "Focus " }, { 0x20, 0x20, "Horizontal Position " }, { 0x22, 0x22, "Horizontal Size " }, { 0x24, 0x24, "Horizontal Pincushion " }, { 0x26, 0x26, "Horizontal Pincushion Balance " }, { 0x28, 0x28, "Horizontal Misconvergence " }, { 0x2a, 0x2a, "Horizontal Linearity " }, { 0x2c, 0x2c, "Horizontal Linearity Balance " }, { 0x30, 0x30, "Vertical Position " }, { 0x32, 0x32, "Vertical Size " }, { 0x34, 0x34, "Vertical Pincushion " }, { 0x36, 0x36, "Vertical Pincushion Balance " }, { 0x38, 0x38, "Vertical Misconvergence " }, { 0x3a, 0x3a, "Vertical Linearity " }, { 0x3c, 0x3c, "Vertical Linearity Balance " }, { 0x40, 0x40, "Parallelogram Distortion" }, { 0x42, 0x42, "Trapezoidal Distortion" }, { 0x44, 0x44, "Tilt" }, { 0x46, 0x46, "Top Corner Distortion Control " }, { 0x48, 0x48, "Top Corner Distortion Balance " }, { 0x4a, 0x4a, "Bottom Corner Distortion Control " }, { 0x4c, 0x4c, "Bottom Corner Distortion Balance " }, { 0x56, 0x56, "Moir Horizontal" }, { 0x58, 0x58, "Moir Vertical" }, { 0x5e, 0x5e, "Input Level Select" }, { 0x60, 0x60, "Input Source Select" }, { 0x62, 0x62, "Stereo Mode" }, { 0x6c, 0x6c, "Video Black Level Red" }, { 0x6e, 0x6e, "Video Black Level Green" }, { 0x70, 0x70, "Video Black Level Blue" }, { 0x71, 0xffff, "Reserved" } };
hidpage hid_VR_Controls[] = { { 0x0, 0x0, "Unidentified" }, { 0x1, 0x1, "Belt" }, { 0x2, 0x2, "Body Suit" }, { 0x3, 0x3, "Flexor" }, { 0x4, 0x4, "Glove" }, { 0x5, 0x5, "Head Tracker" }, { 0x6, 0x6, "Head Mounted Display" }, { 0x7, 0x7, "Hand Tracker " }, { 0x8, 0x8, "Oculometer" }, { 0x9, 0x9, "Vest" }, { 0xa, 0xa, "Animatronic Device" }, { 0xb, 0x1f, "Reserved " }, { 0x20, 0x20, "Stereo Enable" }, { 0x21, 0x21, "Display Enable" }, { 0x22, 0xffff, "Reserved" } };

#define COUNT_OF(x) ((sizeof(x)/sizeof(0[x])) / ((size_t)(!(sizeof(x) % sizeof(0[x])))))

hidusagepage allpage[] = {
{ 20, hid_Alphnumeric_Display, COUNT_OF(hid_Alphnumeric_Display), "Alphnumeric Display"},
{ 133, hid_Battery_System, COUNT_OF(hid_Battery_System), "Battery System"},
{ 9, hid_Button, COUNT_OF(hid_Button), "Button"},
{ 12, hid_Consumer_Devices, COUNT_OF(hid_Consumer_Devices), "Consumer Devices"},
{ 1, hid_Generic_Desktop, COUNT_OF(hid_Generic_Desktop), "Generic Desktop"},
{ 13, hid_Digitizers, COUNT_OF(hid_Digitizers), "Digitizers"},
{ 5, hid_Gaming_Controls, COUNT_OF(hid_Gaming_Controls), "Gaming Controls"},
{ 7, hid_Keyboard, COUNT_OF(hid_Keyboard), "Keyboard"},
{ 8, hid_LEDs, COUNT_OF(hid_LEDs), "LEDs"},
{ 128, hid_Monitor, COUNT_OF(hid_Monitor), "Monitor"},
{ 129, hid_Monitor_Enumerated_Values, COUNT_OF(hid_Monitor_Enumerated_Values), "Monitor Enumerated Values"},
{ 10, hid_Ordinals, COUNT_OF(hid_Ordinals), "Ordinals"},
{ 132, hid_Power_Device, COUNT_OF(hid_Power_Device), "Power Device"},
{ 2, hid_Simulation_Controls, COUNT_OF(hid_Simulation_Controls), "Simulation Controls"},
{ 4, hid_Sports_Controls, COUNT_OF(hid_Sports_Controls), "Sports Controls"},
{ 11, hid_Telephony_Devices, COUNT_OF(hid_Telephony_Devices), "Telephony Devices"},
{ 16, hid_Unicode, COUNT_OF(hid_Unicode), "Unicode"},
{ 65280, hid_Vendor_Defined_Page_1, COUNT_OF(hid_Vendor_Defined_Page_1), "Vendor Defined Page 1"},
{ 131, hid_VESA_Command, COUNT_OF(hid_VESA_Command), "VESA Command"},
{ 130, hid_VESA_Virtual_Controls, COUNT_OF(hid_VESA_Virtual_Controls), "VESA Virtual Controls"},
{ 3, hid_VR_Controls, COUNT_OF(hid_VR_Controls), "VR Controls"},
};

const char* getpagename(uint32_t id)
{
    for (int i = 0; i < COUNT_OF(allpage); i++)
    {
        if (allpage[i].id == id)
        {
            return allpage[i].name;
        }
    }

    return "UNK";
}

const char* getusagename(uint32_t id, uint32_t usageid)
{
    for (int i = 0; i < COUNT_OF(allpage); i++)
    {
        if (allpage[i].id == id)
        {
            hidpage* usage = allpage[i].page;

            for (int p = 0; p < allpage[i].pagesize; p++)
            {
                if ((usage[p].min >= usageid) && (usage[p].max <= usageid))
                {
                    return usage[p].name;
                }
            }

            return "UNK";
        }
    }

    return "UNK";
}

void printhid(uchar* hid, int hidlen)
{
    unsigned char level = 0;
    uint32_t usage = 0, usagepage = 0;

    for (int i = 0; i < hidlen;)
    {
        unsigned char cmd = hid[i];
        uchar datalen = 0;
        uint32_t cmdtype = 0;

        switch (cmd & 3)
        {
        case 3:
        {
            datalen = 4;
        }break;

        default:
        {
            datalen = cmd & 3;
        }break;
        }

        if (cmd == 0xc0)
        {
            for (int p = 0; p < (level - 1); p++)
            {
                printf("\t");
            }
        }
        else
        {
            for (int p = 0; p < level; p++)
            {
                printf("\t");
            }
        }


        for (int p = 0; p < (datalen + 1); p++)
        {
            printf("0x%02x ", hid[i + p]);
        }

        i += 1;

        switch ((cmd >> 2) & 0x3)
        {
        case 0:
        {
            switch (cmd >> 4)
            {
            case 8:
            {
                printf("Input");
                cmdtype = 3;
            }break;
            case 9:
            {
                printf("Output");
                cmdtype = 3;
            }break;
            case 0xb:
            {
                printf("Feature");
            }break;
            case 0xa:
            {
                level += 1;
                printf("Collection");
                cmdtype = 4;
            }break;
            case 0xc:
            {
                level -= 1;
                printf("End Collection");
            }break;
            default:
            {
                printf("unk!!!");
            }break;
            }
        }break;

        case 1:
        {
            switch (cmd >> 4)
            {
            case 0:
            {
                printf("Usage Page");
                cmdtype = 2;
            }break;
            case 1:
            {
                printf("Logical Minimum");
            }break;
            case 2:
            {
                printf("Logical Maximum");
            }break;
            case 3:
            {
                printf("Physical Minimum");
            }break;
            case 4:
            {
                printf("Physical Maximum");
            }break;
            case 5:
            {
                printf("Unit Exponent");
            }break;
            case 6:
            {
                printf("Unit");
            }break;
            case 7:
            {
                printf("Report Size");
            }break;
            case 8:
            {
                printf("Report ID");
            }break;
            case 9:
            {
                printf("Report Count");
            }break;
            case 0xa:
            {
                printf("Push");
            }break;
            case 0xb:
            {
                printf("Pop");
            }break;
            default:
            {
                printf("unk!!!");
            }break;
            }
        }break;

        case 2:
        {
            switch (cmd >> 4)
            {
            case 0:
            {
                printf("Usage");
                cmdtype = 1;
            }break;
            case 1:
            {
                printf("Usage Minimum");
            }break;
            case 2:
            {
                printf("Usage Maximum");
            }break;
            case 3:
            {
                printf("Designator Index");
            }break;
            case 4:
            {
                printf("Designator Minimum");
            }break;
            case 5:
            {
                printf("Designator Maximum");
            }break;
            case 7:
            {
                printf("String Index");
            }break;
            case 8:
            {
                printf("String Minimum");
            }break;
            case 9:
            {
                printf("String Maximum");
            }break;
            case 0xa:
            {
                printf("Delimiter");
            }break;
            default:
            {
                printf("unk!!!");
            }break;
            }
        }break;

        }

        uint32_t data = 0;

        memcpy(&data, &hid[i], datalen);

        switch (cmdtype)
        {
        case 1://usage
        {
            usage = data;
            printf(" (%s)", getusagename(usagepage, usage));
        }break;

        case 2://usage page
        {
            usagepage = data;
            printf(" (%s)", getpagename(usagepage));
        }break;

        case 3:
        {
            printf(" (");

            if (data & INPUT_Const)
            {
                printf("Cnst");
            }
            else
            {
                printf("Data");
            }

            if (data & INPUT_Var)
            {
                printf(",Var");
            }
            else
            {
                printf(",Ary");
            }

            if (data & INPUT_Rel)
            {
                printf(",Rel");
            }
            else
            {
                printf(",Abs");
            }

            if (data & INPUT_Wrap)
            {
                printf(",Wrap");
            }

            if (data & INPUT_NLin)
            {
                printf(",NLin");
            }

            if (data & INPUT_NPrf)
            {
                printf(",NPrf");
            }
            if (data & INPUT_Null)
            {
                printf(",Null");
            }

            if (data & INPUT_Vol)
            {
                printf(",Vol");
            }

            printf(")");

        }break;

        case 4:
        {
            switch (data)
            {
            case 0:
            {
                printf(" (Physical)");
            }break;

            case 1:
            {
                printf(" (Application)");
            }break;

            case 2:
            {
                printf(" (Logical)");
            }break;

            }
        }break;

        default:
        {
            switch (datalen)
            {
            case 1:
            {
                printf(" (%d)", *(char*)&hid[i]);
            }break;

            case 2:
            {
                printf(" (%d)", *(short*)&hid[i]);
            }break;
            case 4:
            {
                printf(" (%d)", *(int*)&hid[i]);
            }break;
            }
        }
        break;
        }


        printf("\r\n");

        i += datalen;
    }
}

char* readfile(char* name, int* outsize)
{
    FILE* file = fopen(name, "rb");
    if (file == NULL)
    {
        printf("open file fail");
        return 0;
    }
    fseek(file, 0, SEEK_END);
    long length = ftell(file);

    char* buf = (char*)malloc(length);

    fseek(file, 0, SEEK_SET);

    *outsize = fread(buf, 1, length, file);

    return buf;
}

int main(int argc, char** argv)
{
    int datasize = 0;
    char* data = readfile(argv[1], &datasize);

    printhid((uchar*)data, datasize);

    getchar();
}

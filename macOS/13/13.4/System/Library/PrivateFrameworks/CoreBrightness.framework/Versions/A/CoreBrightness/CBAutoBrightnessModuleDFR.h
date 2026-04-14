@class NSString, CBDisplayModuleDFR, NSMutableArray, CBHIDEventManager;

@interface CBAutoBrightnessModuleDFR : CBModule <CBHIDServiceProtocol, CBContainerModuleProtocol, CBStatusInfoProtocol> {
    struct AABC { void /* function */ **x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; BOOL x15; float x16; BOOL x17; int x18; int x19; struct __IOHIDServiceClient *x20; struct __IOHIDServiceClient *x21; long long x22; float x23; float x24; void /* function */ *x25; void *x26; int x27; int x28; int x29; struct __CFDictionary *x30; struct __CFDictionary *x31; unsigned char x32; BOOL x33; struct WndBrightnessValues *x34; int x35; double x36; double x37; float x38; float x39; BOOL x40; BOOL x41; struct __IOHIDEvent *x42; struct __IOHIDServiceClient *x43; float *x44; unsigned int *x45; float x46; float x47; float x48; BOOL x49; BOOL x50; struct __Display *x51; float x52; struct __CFDictionary *x53; struct __CFDictionary *x54; BOOL x55; BOOL x56; BOOL x57; BOOL x58; BOOL x59; BOOL x60; int x61; BOOL x62; struct ALS *x63; struct ALS *x64; struct __IOHIDServiceClient *x65; struct __IOHIDServiceClient *x66; int x67; float x68; float x69; float x70; BOOL x71; BOOL x72; int x73; int x74; int x75; int x76; int x77; int x78; float x79; float x80; float x81; float x82; float x83; float x84; float x85; unsigned int x86; unsigned int x87; struct { float x0; float x1; float x2; float x3; } x88; int x89; BOOL x90; struct HotSpot { int x0; float x1; float x2; float x3; float x4; } x91; id x92; unsigned int x93; float x94; float x95; float x96; float x97; float x98; float x99; BOOL x100; struct _ALS_Struct { float x0; int x1; int x2; int x3; int x4; float x5; float x6; float x7; int x8; int x9; } x101; float x102; int x103; double x104; double x105; float x106; int x107; unsigned int x108; BOOL x109; float x110; float x111; float x112; float x113; BOOL x114; float x115; float x116; float x117; float x118; float x119; float x120; float x121; float x122; int x123; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; } x8; } x124[3]; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; } x8; } x125; struct { BOOL x0; struct { float x0; float x1; } x1; struct { float x0; float x1; } x2; struct { float x0; float x1; } x3; } x126; struct CurveCap { float x0[4]; float x1[4]; double x2; } x127; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x128; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x129; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x130[3]; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x131; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x132; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x133; int x134; BOOL x135; float x136; unsigned int x137; unsigned int x138; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; } x8; } x139; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; } x8; } x140; double x141; BOOL x142; struct { unsigned int x0; double x1[3]; int x2; } x143; struct { BOOL x0; int x1; double x2; double x3; double x4; } x144; BOOL x145; BOOL x146; unsigned int x147; float x148; float x149; BOOL x150; struct _SETTINGS { int x0; int x1; struct _INTERNAL_SETTINGS { int x0; int x1; int x2; float x3; float x4; float x5; } x2; } x151; int x152; BOOL x153; struct { struct { float x0; float x1; } x0; struct { float x0; BOOL x1; BOOL x2; union _restriction { struct { float x0; float x1; float x2; float x3; float x4; } x0; struct { float x0; float x1; struct { float x0[6]; float x1[6]; } x2[2]; } x1; } x3; } x1; struct { float x0; BOOL x1; BOOL x2; union _restriction { struct { float x0; float x1; float x2; float x3; float x4; } x0; struct { float x0; float x1; struct { float x0[6]; float x1[6]; } x2[2]; } x1; } x3; } x2; } x154; struct { int x0; double x1[12]; double x2[9]; unsigned long long x3; unsigned long long x4; unsigned int x5; id x6; } x155; long long x156; id x157; BOOL x158; BOOL x159; float x160; float x161; int x162; unsigned int x163; unsigned int x164; unsigned int x165; int x166; int x167; float *x168; int x169; float x170; float x171; float x172; float x173; float x174; float x175; struct TimeConstantTableEntry *x176; int x177; float x178; int x179; unsigned long long x180; int x181; id x182; id x183; struct { float x0; BOOL x1; float x2; BOOL x3; } x184; BOOL x185; } *_AABC;
    CBDisplayModuleDFR *_display;
    NSMutableArray *_alsServiceClients;
    NSMutableArray *_otherServiceClients;
    CBHIDEventManager *_hidEventManager;
    float _displayFactor;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)start;
- (void)stop;
- (id)copyIdentifiers;
- (id)initWithDisplayModule:(id)a0 andQueue:(id)a1;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyPropertyForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (id)copyPropertyInternalForKey:(id)a0;
- (BOOL)displayLogicalStatePropertyHandler:(id)a0;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;

@end

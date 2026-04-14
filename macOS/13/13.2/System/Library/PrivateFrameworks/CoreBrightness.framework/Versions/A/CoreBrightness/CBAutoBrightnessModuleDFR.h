@class NSString, CBDisplayModuleDFR, NSMutableArray, CBHIDEventManager;

@interface CBAutoBrightnessModuleDFR : CBModule <CBHIDServiceProtocol, CBContainerModuleProtocol, CBStatusInfoProtocol> {
    struct AABC { void /* function */ **x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; BOOL x15; float x16; int x17; int x18; struct __IOHIDServiceClient *x19; struct __IOHIDServiceClient *x20; long long x21; float x22; float x23; void /* function */ *x24; void *x25; int x26; int x27; int x28; struct __CFDictionary *x29; struct __CFDictionary *x30; unsigned char x31; BOOL x32; struct WndBrightnessValues *x33; int x34; double x35; double x36; float x37; float x38; BOOL x39; BOOL x40; struct __IOHIDEvent *x41; struct __IOHIDServiceClient *x42; float *x43; unsigned int *x44; float x45; float x46; float x47; BOOL x48; BOOL x49; struct __Display *x50; float x51; struct __CFDictionary *x52; struct __CFDictionary *x53; BOOL x54; BOOL x55; BOOL x56; BOOL x57; BOOL x58; BOOL x59; int x60; BOOL x61; struct ALS *x62; struct ALS *x63; struct __IOHIDServiceClient *x64; struct __IOHIDServiceClient *x65; int x66; float x67; float x68; float x69; BOOL x70; BOOL x71; int x72; int x73; int x74; int x75; int x76; int x77; float x78; float x79; float x80; float x81; float x82; float x83; float x84; unsigned int x85; unsigned int x86; struct { float x0; float x1; float x2; float x3; } x87; int x88; BOOL x89; struct HotSpot { int x0; float x1; float x2; float x3; float x4; } x90; id x91; unsigned int x92; float x93; float x94; float x95; float x96; float x97; float x98; BOOL x99; struct _ALS_Struct { float x0; int x1; int x2; int x3; int x4; float x5; float x6; float x7; int x8; int x9; } x100; float x101; int x102; double x103; double x104; float x105; int x106; unsigned int x107; BOOL x108; float x109; float x110; float x111; float x112; BOOL x113; float x114; float x115; float x116; float x117; float x118; float x119; float x120; float x121; int x122; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; } x8; } x123[3]; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; } x8; } x124; struct { BOOL x0; struct { float x0; float x1; } x1; struct { float x0; float x1; } x2; struct { float x0; float x1; } x3; } x125; struct CurveCap { float x0[4]; float x1[4]; double x2; } x126; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x127; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x128; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x129[3]; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x130; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x131; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x132; int x133; BOOL x134; float x135; unsigned int x136; unsigned int x137; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; } x8; } x138; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; } x8; } x139; double x140; BOOL x141; struct { unsigned int x0; double x1[3]; int x2; } x142; struct { BOOL x0; int x1; double x2; double x3; double x4; } x143; BOOL x144; BOOL x145; unsigned int x146; float x147; float x148; BOOL x149; struct _SETTINGS { int x0; int x1; struct _INTERNAL_SETTINGS { int x0; int x1; int x2; float x3; float x4; float x5; } x2; } x150; int x151; BOOL x152; struct { struct { float x0; float x1; } x0; struct { float x0; BOOL x1; BOOL x2; union _restriction { struct { float x0; float x1; float x2; float x3; float x4; } x0; struct { float x0; float x1; struct { float x0[6]; float x1[6]; } x2[2]; } x1; } x3; } x1; struct { float x0; BOOL x1; BOOL x2; union _restriction { struct { float x0; float x1; float x2; float x3; float x4; } x0; struct { float x0; float x1; struct { float x0[6]; float x1[6]; } x2[2]; } x1; } x3; } x2; } x153; struct { int x0; double x1[12]; double x2[9]; unsigned long long x3; unsigned long long x4; unsigned int x5; id x6; } x154; long long x155; id x156; BOOL x157; BOOL x158; float x159; float x160; int x161; unsigned int x162; unsigned int x163; unsigned int x164; int x165; int x166; float *x167; int x168; float x169; float x170; float x171; float x172; float x173; float x174; struct TimeConstantTableEntry *x175; int x176; float x177; int x178; unsigned long long x179; int x180; id x181; id x182; struct { float x0; BOOL x1; float x2; BOOL x3; } x183; BOOL x184; } *_AABC;
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
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (id)copyPropertyForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (id)copyPropertyInternalForKey:(id)a0;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (id)copyIdentifiers;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)initWithDisplayModule:(id)a0 andQueue:(id)a1;
- (BOOL)displayLogicalStatePropertyHandler:(id)a0;

@end

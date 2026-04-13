@class NSString, CBDisplayModuleDFR, NSMutableArray, CBHIDEventManager;

@interface CBAutoBrightnessModuleDFR : CBModule <CBHIDServiceProtocol, CBContainerModuleProtocol, CBStatusInfoProtocol> {
    struct AABC { void /* function */ **x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; BOOL x15; int x16; int x17; struct __IOHIDServiceClient *x18; struct __IOHIDServiceClient *x19; long long x20; float x21; float x22; void /* function */ *x23; void *x24; int x25; int x26; int x27; struct __CFDictionary *x28; struct __CFDictionary *x29; unsigned char x30; BOOL x31; struct WndBrightnessValues *x32; int x33; double x34; double x35; float x36; float x37; BOOL x38; BOOL x39; struct __IOHIDEvent *x40; struct __IOHIDServiceClient *x41; float *x42; unsigned int *x43; float x44; float x45; float x46; BOOL x47; BOOL x48; struct __Display *x49; float x50; struct __CFDictionary *x51; struct __CFDictionary *x52; BOOL x53; BOOL x54; BOOL x55; BOOL x56; BOOL x57; int x58; BOOL x59; struct ALS *x60; struct ALS *x61; BOOL x62; struct __IOHIDServiceClient *x63; struct __IOHIDServiceClient *x64; int x65; float x66; float x67; float x68; BOOL x69; BOOL x70; int x71; int x72; int x73; int x74; int x75; float x76; float x77; float x78; float x79; float x80; float x81; float x82; unsigned int x83; unsigned int x84; struct { float x0; float x1; float x2; float x3; } x85; int x86; BOOL x87; struct HotSpot { int x0; float x1; float x2; float x3; float x4; } x88; id x89; unsigned int x90; float x91; float x92; float x93; float x94; float x95; float x96; BOOL x97; struct _ALS_Struct { float x0; int x1; int x2; int x3; int x4; float x5; float x6; float x7; int x8; int x9; } x98; float x99; int x100; double x101; double x102; float x103; int x104; unsigned int x105; BOOL x106; float x107; float x108; float x109; float x110; BOOL x111; float x112; float x113; float x114; float x115; float x116; float x117; float x118; float x119; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; } x8; } x120[3]; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; } x8; } x121; struct { BOOL x0; struct { float x0; float x1; } x1; struct { float x0; float x1; } x2; struct { float x0; float x1; } x3; } x122; struct CurveCap { float x0[4]; float x1[4]; double x2; } x123; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x124; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x125; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x126[3]; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x127; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x128; int x129; BOOL x130; float x131; unsigned int x132; unsigned int x133; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; } x8; } x134; double x135; BOOL x136; struct { unsigned int x0; double x1[3]; int x2; } x137; struct { BOOL x0; int x1; double x2; double x3; double x4; } x138; BOOL x139; BOOL x140; unsigned int x141; float x142; float x143; BOOL x144; struct _SETTINGS { int x0; int x1; struct _INTERNAL_SETTINGS { int x0; int x1; int x2; float x3; float x4; float x5; } x2; } x145; int x146; BOOL x147; struct { struct { float x0; float x1; } x0; struct { float x0; BOOL x1; BOOL x2; union _restriction { struct { float x0; float x1; float x2; float x3; float x4; } x0; struct { float x0; float x1; struct { float x0[6]; float x1[6]; } x2[2]; } x1; } x3; } x1; struct { float x0; BOOL x1; BOOL x2; union _restriction { struct { float x0; float x1; float x2; float x3; float x4; } x0; struct { float x0; float x1; struct { float x0[6]; float x1[6]; } x2[2]; } x1; } x3; } x2; } x148; struct { int x0; double x1[12]; double x2[9]; unsigned long long x3; unsigned long long x4; unsigned int x5; id x6; } x149; BOOL x150; BOOL x151; float x152; float x153; int x154; unsigned int x155; unsigned int x156; unsigned int x157; int x158; int x159; float *x160; int x161; float x162; float x163; float x164; float x165; float x166; float x167; struct TimeConstantTableEntry *x168; int x169; float x170; int x171; unsigned long long x172; int x173; id x174; unsigned int x175; struct { float x0[10]; float x1[15]; float x2[10]; float x3[10]; float x4[10]; float x5[10]; } x176; struct { float x0; BOOL x1; float x2; BOOL x3; } x177; BOOL x178; } *_AABC;
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
- (id)copyPropertyInternalForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (id)copyIdentifiers;
- (id)initWithDisplayModule:(id)a0 andQueue:(id)a1;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)displayLogicalStatePropertyHandler:(id)a0;

@end

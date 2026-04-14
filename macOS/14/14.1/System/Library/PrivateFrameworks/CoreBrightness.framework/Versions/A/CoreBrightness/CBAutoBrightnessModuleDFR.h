@class NSString, CBDisplayModuleDFR, NSMutableArray, CBHIDEventManager;

@interface CBAutoBrightnessModuleDFR : CBModule <CBHIDServiceProtocol, CBContainerModuleProtocol, CBStatusInfoProtocol> {
    struct AABC { void /* function */ **x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; BOOL x15; float x16; BOOL x17; int x18; int x19; struct __IOHIDServiceClient *x20; struct __IOHIDServiceClient *x21; long long x22; float x23; float x24; void /* function */ *x25; void *x26; int x27; int x28; int x29; struct __CFDictionary *x30; struct __CFDictionary *x31; unsigned char x32; BOOL x33; struct WndBrightnessValues *x34; int x35; double x36; double x37; float x38; float x39; BOOL x40; BOOL x41; struct __IOHIDEvent *x42; struct __IOHIDServiceClient *x43; float *x44; unsigned int *x45; float x46; float x47; float x48; BOOL x49; BOOL x50; struct __Display *x51; float x52; struct __CFDictionary *x53; struct __CFDictionary *x54; BOOL x55; BOOL x56; BOOL x57; BOOL x58; BOOL x59; BOOL x60; int x61; BOOL x62; struct ALS *x63; struct ALS *x64; struct __IOHIDServiceClient *x65; struct __IOHIDServiceClient *x66; int x67; float x68; float x69; float x70; BOOL x71; BOOL x72; int x73; int x74; int x75; int x76; int x77; int x78; float x79; float x80; float x81; float x82; float x83; float x84; float x85; unsigned int x86; unsigned int x87; struct { float x0; float x1; float x2; float x3; } x88; int x89; id x90; unsigned int x91; float x92; float x93; float x94; float x95; float x96; float x97; BOOL x98; struct _ALS_Struct { float x0; int x1; int x2; int x3; int x4; float x5; float x6; float x7; int x8; int x9; } x99; float x100; int x101; double x102; double x103; float x104; int x105; unsigned int x106; float x107; float x108; float x109; float x110; float x111; float x112; int x113; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; } x8; } x114[3]; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; } x8; } x115; struct { BOOL x0; struct { float x0; float x1; } x1; struct { float x0; float x1; } x2; struct { float x0; float x1; } x3; } x116; struct CurveCap { float x0[4]; float x1[4]; double x2; } x117; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x118; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x119; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x120[3]; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x121; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x122; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x123; int x124; BOOL x125; float x126; unsigned int x127; unsigned int x128; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; } x8; } x129; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; } x8; } x130; double x131; BOOL x132; struct { unsigned int x0; double x1[3]; int x2; } x133; struct { BOOL x0; int x1; double x2; double x3; double x4; } x134; BOOL x135; BOOL x136; unsigned int x137; float x138; float x139; BOOL x140; BOOL x141; BOOL x142; float x143; struct _SETTINGS { int x0; int x1; struct _INTERNAL_SETTINGS { int x0; int x1; int x2; float x3; float x4; float x5; } x2; } x144; int x145; BOOL x146; struct { struct { float x0; float x1; } x0; struct { BOOL x0; BOOL x1; union _restriction { struct { float x0; float x1; float x2; float x3; float x4; } x0; struct { float x0; float x1; float x2; float x3; struct { float x0[6]; float x1[6]; } x4[2]; } x1; } x2; } x1; struct { BOOL x0; BOOL x1; union _restriction { struct { float x0; float x1; float x2; float x3; float x4; } x0; struct { float x0; float x1; float x2; float x3; struct { float x0[6]; float x1[6]; } x4[2]; } x1; } x2; } x2; } x147; struct { int x0; double x1[12]; double x2[9]; unsigned long long x3; unsigned long long x4; unsigned int x5; id x6; } x148; long long x149; id x150; id x151; BOOL x152; float x153; float x154; int x155; unsigned int x156; unsigned int x157; unsigned int x158; int x159; int x160; float *x161; int x162; float x163; float x164; float x165; float x166; float x167; float x168; struct TimeConstantTableEntry *x169; int x170; float x171; int x172; unsigned long long x173; int x174; id x175; id x176; struct { float x0; BOOL x1; float x2; BOOL x3; } x177; BOOL x178; } *_AABC;
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
- (id)initWithDisplayModule:(id)a0 andQueue:(id)a1;
- (id)copyIdentifiers;
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

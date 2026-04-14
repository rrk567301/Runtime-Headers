@class NSString, CBDisplayModuleDFR, NSMutableArray, CBHIDEventManager;

@interface CBAutoBrightnessModuleDFR : CBModule <CBHIDServiceProtocol, CBContainerModuleProtocol, CBStatusInfoProtocol> {
    struct AABC { void /* function */ **x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; struct UpdateCurveStrategy *x15; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x16; BOOL x17; float x18; BOOL x19; int x20; int x21; struct __IOHIDServiceClient *x22; struct __IOHIDServiceClient *x23; long long x24; float x25; float x26; void /* function */ *x27; void *x28; int x29; int x30; int x31; struct __CFDictionary *x32; struct __CFDictionary *x33; unsigned char x34; BOOL x35; struct WndBrightnessValues *x36; int x37; double x38; double x39; float x40; float x41; BOOL x42; BOOL x43; struct __IOHIDEvent *x44; struct __IOHIDServiceClient *x45; float *x46; unsigned int *x47; float x48; float x49; float x50; BOOL x51; BOOL x52; struct __Display *x53; float x54; struct __CFDictionary *x55; struct __CFDictionary *x56; BOOL x57; BOOL x58; BOOL x59; BOOL x60; BOOL x61; BOOL x62; int x63; BOOL x64; struct ALS *x65; struct ALS *x66; struct __IOHIDServiceClient *x67; struct __IOHIDServiceClient *x68; int x69; float x70; float x71; float x72; BOOL x73; BOOL x74; int x75; int x76; int x77; int x78; int x79; int x80; float x81; float x82; float x83; float x84; float x85; float x86; float x87; unsigned int x88; unsigned int x89; struct { float x0; float x1; float x2; float x3; } x90; int x91; id x92; unsigned int x93; float x94; float x95; float x96; float x97; float x98; float x99; BOOL x100; struct _ALS_Struct { float x0; int x1; int x2; int x3; int x4; float x5; float x6; float x7; int x8; int x9; } x101; float x102; int x103; double x104; double x105; float x106; int x107; unsigned int x108; float x109; float x110; float x111; float x112; float x113; float x114; int x115; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; double x8; } x8; } x116[3]; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; double x8; } x8; } x117; struct { BOOL x0; struct { float x0; float x1; } x1; struct { float x0; float x1; } x2; struct { float x0; float x1; } x3; } x118; struct CurveCap { float x0[4]; float x1[4]; double x2; } x119; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x120; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x121; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x122[3]; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x123; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x124; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x125; int x126; BOOL x127; float x128; unsigned int x129; unsigned int x130; unsigned int x131; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; double x8; } x8; } x132; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; double x8; } x8; } x133; double x134; BOOL x135; struct { unsigned int x0; double x1[3]; int x2; } x136; struct { BOOL x0; int x1; double x2; double x3; double x4; } x137; BOOL x138; BOOL x139; unsigned int x140; float x141; float x142; BOOL x143; BOOL x144; BOOL x145; float x146; struct _SETTINGS { int x0; int x1; struct _INTERNAL_SETTINGS { int x0; int x1; int x2; float x3; float x4; float x5; } x2; } x147; int x148; BOOL x149; struct { struct { float x0; float x1; } x0; struct { BOOL x0; BOOL x1; union _restriction { struct { float x0; float x1; float x2; float x3; float x4; } x0; struct { float x0; float x1; float x2; float x3; struct { float x0[6]; float x1[6]; } x4[2]; } x1; } x2; } x1; struct { BOOL x0; BOOL x1; union _restriction { struct { float x0; float x1; float x2; float x3; float x4; } x0; struct { float x0; float x1; float x2; float x3; struct { float x0[6]; float x1[6]; } x4[2]; } x1; } x2; } x2; } x150; struct { int x0; double x1[12]; double x2[9]; unsigned long long x3; unsigned long long x4; unsigned int x5; id x6; } x151; long long x152; id x153; id x154; BOOL x155; float x156; float x157; int x158; unsigned int x159; unsigned int x160; unsigned int x161; int x162; int x163; float *x164; int x165; float x166; float x167; float x168; float x169; float x170; float x171; struct TimeConstantTableEntry *x172; int x173; float x174; int x175; unsigned long long x176; int x177; id x178; id x179; struct { float x0; BOOL x1; float x2; BOOL x3; } x180; BOOL x181; } *_AABC;
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

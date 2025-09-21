@class NSString, CBDisplayModuleDFR, NSMutableArray, CBHIDEventManager;

@interface CBAutoBrightnessModuleDFR : CBModule <CBHIDServiceProtocol, CBContainerModuleProtocol, CBStatusInfoProtocol> {
    struct AABC { void /* function */ **x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; float x11; float x12; float x13; float x14; struct UpdateCurveStrategy *x15; struct mutex { struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x0; } x16; BOOL x17; float x18; BOOL x19; int x20; int x21; struct __IOHIDServiceClient *x22; long long x23; float x24; float x25; void /* function */ *x26; void *x27; int x28; int x29; int x30; struct __CFDictionary *x31; struct __CFDictionary *x32; BOOL x33; BOOL x34; struct __Display *x35; float x36; struct __CFDictionary *x37; struct __CFDictionary *x38; BOOL x39; BOOL x40; BOOL x41; BOOL x42; BOOL x43; BOOL x44; int x45; BOOL x46; struct ALS *x47; struct ALS *x48; struct __IOHIDServiceClient *x49; struct __IOHIDServiceClient *x50; int x51; float x52; float x53; float x54; BOOL x55; BOOL x56; int x57; int x58; int x59; int x60; int x61; int x62; float x63; float x64; float x65; float x66; float x67; float x68; float x69; float x70; float x71; unsigned int x72; unsigned int x73; struct { float x0; float x1; float x2; float x3; } x74; int x75; id x76; unsigned int x77; float x78; float x79; float x80; float x81; float x82; float x83; BOOL x84; struct _ALS_Struct { float x0; int x1; int x2; int x3; int x4; float x5; float x6; float x7; int x8; int x9; } x85; float x86; int x87; double x88; double x89; float x90; int x91; unsigned int x92; float x93; float x94; float x95; float x96; float x97; float x98; float x99; int x100; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; double x8; int x9; float x10; } x8; } x101[3]; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; double x8; int x9; float x10; } x8; } x102; struct { BOOL x0; struct { float x0; float x1; } x1; struct { float x0; float x1; } x2; struct { float x0; float x1; } x3; float x4; } x103; struct CurveCap { float x0[4]; float x1[4]; double x2; } x104; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x105; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x106; BOOL x107; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x108[3]; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x109[3]; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x110; struct CustomCurve { float x0[20]; float x1[20]; int x2; } x111; int x112; float x113; unsigned int x114; unsigned int x115; unsigned int x116; BOOL x117; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; double x8; int x9; float x10; } x8; } x118; struct Curve { float x0; float x1; float x2; float x3; float x4; float x5; float x6; float x7; struct CurvePrefs { float x0[3]; float x1[3]; float x2; float x3; unsigned int x4; unsigned int x5[3]; BOOL x6; float x7; double x8; int x9; float x10; } x8; } x119; double x120; BOOL x121; struct { unsigned int x0; double x1[3]; int x2; } x122; struct { BOOL x0; int x1; double x2; double x3; double x4; } x123; BOOL x124; BOOL x125; unsigned int x126; float x127; float x128; BOOL x129; BOOL x130; BOOL x131; float x132; struct _SETTINGS { int x0; int x1; struct _INTERNAL_SETTINGS { int x0; int x1; int x2; float x3; float x4; float x5; } x2; } x133; int x134; BOOL x135; struct { struct { float x0; float x1; } x0; struct { BOOL x0; BOOL x1; union _restriction { struct { float x0; float x1; float x2; float x3; float x4; } x0; struct { float x0; float x1; float x2; float x3; struct { float x0[6]; float x1[6]; } x4[2]; } x1; } x2; } x1; struct { BOOL x0; BOOL x1; union _restriction { struct { float x0; float x1; float x2; float x3; float x4; } x0; struct { float x0; float x1; float x2; float x3; struct { float x0[6]; float x1[6]; } x4[2]; } x1; } x2; } x2; } x136; struct { int x0; double x1[12]; double x2[9]; unsigned long long x3; unsigned long long x4; unsigned int x5; id x6; } x137; BOOL x138; long long x139; id x140; id x141; unsigned int x142; BOOL x143; BOOL x144; float x145; float x146; int x147; unsigned int x148; unsigned int x149; unsigned int x150; int x151; int x152; float *x153; int x154; float x155; float x156; float x157; float x158; float x159; float x160; struct PerceptualLuminanceThresholding *x161; unsigned int x162; float x163; int x164; unsigned long long x165; int x166; id x167; id x168; struct { float x0; BOOL x1; float x2; BOOL x3; } x169; BOOL x170; } *_AABC;
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

- (id)copyPropertyForKey:(id)a0;
- (void)start;
- (void)dealloc;
- (void)stop;
- (id)copyPropertyInternalForKey:(id)a0;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (id)copyIdentifiers;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (id)initWithDisplayModule:(id)a0 andQueue:(id)a1;
- (BOOL)displayLogicalStatePropertyHandler:(id)a0;

@end

@class NSString, CBDisplayModuleDFR, NSMutableArray, CBHIDEventManager;

@interface CBAutoBrightnessModuleDFR : CBModule <CBHIDServiceProtocol, CBContainerModuleProtocol, CBStatusInfoProtocol> {
    struct AABC { void /* function */ **x0; BOOL x1; float x2; BOOL x3; int x4; int x5; struct __IOHIDServiceClient *x6; long long x7; float x8; float x9; void /* function */ *x10; void *x11; int x12; int x13; int x14; struct __CFDictionary *x15; struct __CFDictionary *x16; BOOL x17; BOOL x18; struct __Display *x19; float x20; struct __CFDictionary *x21; struct __CFDictionary *x22; BOOL x23; BOOL x24; BOOL x25; BOOL x26; BOOL x27; BOOL x28; int x29; BOOL x30; struct ALS *x31; struct ALS *x32; struct __IOHIDServiceClient *x33; struct __IOHIDServiceClient *x34; int x35; float x36; float x37; float x38; BOOL x39; BOOL x40; int x41; int x42; int x43; int x44; int x45; int x46; float x47; float x48; float x49; float x50; float x51; float x52; float x53; float x54; float x55; unsigned int x56; unsigned int x57; struct { float x0; float x1; float x2; float x3; } x58; int x59; struct AAB *x60; int x61; unsigned long long x62; id x63; BOOL x64; BOOL x65; id x66; unsigned int x67; float x68; float x69; float x70; float x71; float x72; float x73; BOOL x74; struct _ALS_Struct { float x0; int x1; int x2; int x3; int x4; float x5; float x6; float x7; int x8; int x9; } x75; float x76; int x77; double x78; double x79; float x80; int x81; unsigned int x82; float x83; float x84; float x85; float x86; float x87; float x88; float x89; int x90; int x91; float x92; unsigned int x93; unsigned int x94; unsigned int x95; BOOL x96; double x97; BOOL x98; struct { unsigned int x0; double x1[3]; int x2; } x99; struct { BOOL x0; int x1; double x2; double x3; double x4; } x100; BOOL x101; BOOL x102; unsigned int x103; float x104; float x105; BOOL x106; BOOL x107; BOOL x108; float x109; struct _SETTINGS { int x0; int x1; struct _INTERNAL_SETTINGS { int x0; int x1; int x2; float x3; float x4; float x5; } x2; } x110; int x111; BOOL x112; struct { struct { float x0; float x1; } x0; struct { BOOL x0; BOOL x1; union _restriction { struct { float x0; float x1; float x2; float x3; float x4; } x0; struct { float x0; float x1; float x2; float x3; struct { float x0[6]; float x1[6]; } x4[2]; } x1; } x2; } x1; struct { BOOL x0; BOOL x1; union _restriction { struct { float x0; float x1; float x2; float x3; float x4; } x0; struct { float x0; float x1; float x2; float x3; struct { float x0[6]; float x1[6]; } x4[2]; } x1; } x2; } x2; } x113; id x114; BOOL x115; long long x116; id x117; id x118; unsigned int x119; BOOL x120; BOOL x121; float x122; float x123; int x124; unsigned int x125; unsigned int x126; unsigned int x127; int x128; int x129; float *x130; int x131; float x132; float x133; float x134; float x135; float x136; float x137; struct PerceptualLuminanceThresholding *x138; unsigned int x139; float x140; int x141; unsigned long long x142; int x143; id x144; id x145; struct { float x0; BOOL x1; float x2; BOOL x3; } x146; BOOL x147; } *_AABC;
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

- (void)stop;
- (id)copyPropertyForKey:(id)a0 withParameter:(id)a1;
- (void)handleNotificationForKey:(id)a0 withProperty:(id)a1;
- (BOOL)handleHIDEvent:(struct __IOHIDEvent { } *)a0 from:(struct __IOHIDServiceClient { } *)a1;
- (id)copyPropertyForKey:(id)a0;
- (id)copyIdentifiers;
- (BOOL)removeHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (BOOL)setProperty:(id)a0 forKey:(id)a1;
- (id)copyPropertyInternalForKey:(id)a0;
- (void)start;
- (void)sendNotificationForKey:(id)a0 withValue:(id)a1;
- (void)dealloc;
- (BOOL)addHIDServiceClient:(struct __IOHIDServiceClient { } *)a0;
- (id)initWithDisplayModule:(id)a0 andQueue:(id)a1;
- (BOOL)displayLogicalStatePropertyHandler:(id)a0;

@end

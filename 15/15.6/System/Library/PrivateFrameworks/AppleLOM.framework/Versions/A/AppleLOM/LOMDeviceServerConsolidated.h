@class NSObject, NSArray, LOMStateMachine;
@protocol OS_dispatch_source;

@interface LOMDeviceServerConsolidated : LOMDeviceServer {
    unsigned int _smcService;
    unsigned int _sleepSMCNICEnable;
    NSObject<OS_dispatch_source> *_gpioResetTimer;
    struct IONotificationPort { } *_powerNotificationPort;
    unsigned int _powerNotifier;
    unsigned int _powerNotifierConnect;
    NSArray *_supportedInterfaces;
}

@property struct { unsigned int x0; BOOL x1; struct SMCAccumPlatformInfo *x2; struct { unsigned int x0; struct { int x0; int x1; union { struct { int x0; BOOL x1; unsigned short x2; unsigned char x3; } x0; char x1[5]; } x2; unsigned int x3; } x1; union { unsigned long long x0; long long x1; double x2; } x2; union { unsigned long long x0; long long x1; double x2; } x3; union { unsigned long long x0; long long x1; double x2; } x4; } x3[4]; struct { unsigned int x0; struct { int x0; int x1; union { struct { int x0; BOOL x1; unsigned short x2; unsigned char x3; } x0; char x1[5]; } x2; unsigned int x3; } x1; union { unsigned long long x0; long long x1; double x2; } x2; union { unsigned long long x0; long long x1; double x2; } x3; union { unsigned long long x0; long long x1; double x2; } x4; } x4[4]; unsigned char x5; unsigned char x6; BOOL x7; BOOL x8; BOOL x9; struct { unsigned int x0[4]; unsigned int x1[4]; unsigned char x2; unsigned char x3; } x10; BOOL x11; BOOL x12; } *smcObject;
@property (retain) LOMStateMachine *stateMachine;

- (id)description;
- (void).cxx_destruct;
- (char)start;
- (void)stop;
- (id)serialize;
- (id)supportedInterfaces;
- (char)remove:(id)a0 error:(out id *)a1;
- (char)smcOpen;
- (void)completeDeviceRequest:(id)a0;
- (unsigned int)copySMCService;
- (char)enableSMC:(char)a0;
- (char)getInfo:(id *)a0 error:(out id *)a1;
- (id)handleDeviceRequest:(id)a0 error:(id *)a1;
- (void)handleSMCAction:(int)a0;
- (char)install:(id)a0 error:(out id *)a1;
- (void)powerNotification:(unsigned long long)a0 args:(void *)a1;
- (char)setupNWStack:(id)a0;
- (char)setupPowerStateNotification;
- (void)setupStateMachine;
- (void)smcClose;
- (char)smcSetLOMEnable:(char)a0;
- (char)smcSetResetGPIO:(unsigned short)a0;
- (void)teardownNWStack:(char)a0;

@end

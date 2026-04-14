@class NSLock;

@interface ASDTMSGController : NSObject

@property (nonatomic) struct MSGController { } *controller;
@property (retain, nonatomic) NSLock *lock;
@property (copy, nonatomic) id /* block */ getTimestampBlock;

+ (id)localController;
+ (id)createControllerIsRemote:(BOOL)a0;
+ (id)createLock;
+ (id)remoteController;

- (void)dealloc;
- (void).cxx_destruct;
- (int)isMsgSystemReady:(BOOL *)a0 withTimeoutNs:(unsigned long long)a1;
- (int)syncSet:(unsigned int)a0 config:(const struct ASDTMSGSyncConfig { struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; } x0; unsigned int x1; unsigned short x2; } *)a1;
- (int)syncGet:(unsigned int)a0 config:(struct ASDTMSGSyncConfig { struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; } x0; unsigned int x1; unsigned short x2; } *)a1;
- (BOOL)createMSGController:(BOOL)a0;
- (int)hardwareSync:(unsigned int)a0 toSoftwareSync:(unsigned int *)a1;
- (id)initIsRemote:(BOOL)a0;
- (int)syncGet:(unsigned int)a0 trackingTimeStamp:(struct ASDTTimeStamp { struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; } x0; unsigned long long x1; } *)a1;
- (int)syncStartSlaveScheduled:(unsigned int)a0 atFrame:(unsigned short)a1;
- (int)syncStop:(unsigned int)a0;
- (BOOL)waitUntilReadyWithTimeoutNs:(unsigned long long)a0;

@end

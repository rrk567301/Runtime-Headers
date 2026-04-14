@class NSString, NSDictionary, IOSurface, ASDTStreamSessionWrapper, ASDTStreamSession, NSLock;

@interface ASDTStreamSessionShared : NSObject

@property (nonatomic) struct ASDTStreamSessionConfig { unsigned int streamID; unsigned int clientCode; unsigned int bufferSize; unsigned int packetSize; unsigned int txTimeout; unsigned int direction; int loopback; BOOL streamIDisRaw; BOOL remote; BOOL verbose; } config;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) BOOL started;
@property (nonatomic) struct ASDTTime { long long nsec; long long hostTicks; unsigned short hostFrac; unsigned short kind; unsigned int reserved; } startStopTime;
@property (retain, nonatomic) NSDictionary *streamSessionAttributes;
@property (retain, nonatomic) ASDTStreamSessionWrapper *streamSessionWrapper;
@property (weak, nonatomic) ASDTStreamSession *owningSession;
@property (weak, nonatomic) IOSurface *ioSurface;
@property (retain, nonatomic) NSLock *lock;
@property (nonatomic) unsigned int streamID;

- (void)dealloc;
- (void).cxx_destruct;
- (id).cxx_construct;
- (id)initWithConfig:(struct ASDTStreamSessionConfig { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; BOOL x7; BOOL x8; BOOL x9; } *)a0;
- (BOOL)changeIOSurface:(id)a0;
- (id)createWrapperWithAttributes:(id)a0;
- (void)destroyStreamSession;
- (unsigned int)getRXSyncNoDataCount:(BOOL)a0;
- (id)sessionAttributes;
- (int)setupForStreamSession:(id)a0 withIOSurface:(id)a1;
- (int)startForStreamSession:(id)a0;
- (void)stopForStreamSession:(id)a0;

@end

@class NSString, ASDTStreamSessionShared;

@interface ASDTStreamSession : NSObject

@property (retain, nonatomic) NSString *name;
@property (nonatomic) struct ASDTStreamSessionConfig { unsigned int streamID; unsigned int clientCode; unsigned int bufferSize; unsigned int packetSize; unsigned int txTimeout; unsigned int direction; int loopback; BOOL streamIDisRaw; BOOL remote; BOOL verbose; } config;
@property (weak, nonatomic) ASDTStreamSessionShared *sharedStreamSession;

- (void).cxx_destruct;
- (int)start;
- (void)stop;
- (void)clearStats;
- (BOOL)configurationMatches:(struct ASDTStreamSessionConfig { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; BOOL x7; BOOL x8; BOOL x9; } *)a0;
- (id)createSharedStreamSessionWithConfig:(struct ASDTStreamSessionConfig { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; BOOL x7; BOOL x8; BOOL x9; } *)a0;
- (unsigned int)getRXSyncNoDataCount:(BOOL)a0;
- (id)initWithConfig:(struct ASDTStreamSessionConfig { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; BOOL x7; BOOL x8; BOOL x9; } *)a0 withName:(id)a1;
- (int)setupWithIOSurface:(id)a0;

@end

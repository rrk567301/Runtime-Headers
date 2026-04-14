@class NSLock, NSMutableDictionary;

@interface ASDTStreamSessionManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *sessions;
@property (retain, nonatomic) NSLock *lock;

+ (id)sharedManager;
+ (unsigned int)streamIDForConfig:(struct ASDTStreamSessionConfig { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; BOOL x7; BOOL x8; BOOL x9; } *)a0;
+ (id)streamSessionForConfig:(struct ASDTStreamSessionConfig { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; BOOL x7; BOOL x8; BOOL x9; } *)a0;
+ (id)streamNameWithID:(unsigned int)a0 isRemote:(BOOL)a1;
+ (id)streamNameForConfig:(struct ASDTStreamSessionConfig { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; BOOL x7; BOOL x8; BOOL x9; } *)a0;
+ (BOOL)getRequirements:(struct ASDTStreamSessionRequirements { unsigned int x0[2]; unsigned int x1[2]; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; } *)a0 forStreamID:(unsigned int)a1;
+ (BOOL)streamIsStarted:(unsigned int)a0 isRemote:(BOOL)a1;
+ (struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; })streamStartStopTime:(unsigned int)a0 isRemote:(BOOL)a1;

- (id)init;
- (void).cxx_destruct;
- (id)streamSessionForConfig:(struct ASDTStreamSessionConfig { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; BOOL x7; BOOL x8; BOOL x9; } *)a0;
- (id)createStreamSessionForConfig:(struct ASDTStreamSessionConfig { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; int x6; BOOL x7; BOOL x8; BOOL x9; } *)a0;
- (id)streamSessionForName:(id)a0;
- (id)getStreamIDRequirements:(unsigned char)a0;
- (BOOL)streamIsStarted:(id)a0;
- (struct ASDTTime { long long x0; long long x1; unsigned short x2; unsigned short x3; unsigned int x4; })streamStartStopTime:(id)a0;

@end

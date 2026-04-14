@class _TtC17MobileInBoxUpdate24MIBULoopbackServerClient;

@interface MobileInBoxUpdate.MIBULoopbackServerClient : NSObject

@property (class, nonatomic, readonly) _TtC17MobileInBoxUpdate24MIBULoopbackServerClient *sharedInstance;

- (id)init;
- (void).cxx_destruct;
- (BOOL)startServerWithWebPort:(unsigned short)a0 webRoot:(id)a1 waitTillDone:(BOOL)a2 error:(id *)a3;
- (BOOL)stopServerAndReturnError:(id *)a0;

@end

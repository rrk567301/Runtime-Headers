@class NSObject;
@protocol OS_dispatch_queue;

@interface BRCFileProviderDaemonUtils : NSObject {
    NSObject<OS_dispatch_queue> *_timerQueue;
}

- (id)init;
- (void).cxx_destruct;
- (void)_waitForFPToBeReadyToAcceptXPCAndExecuteBlock:(id /* block */)a0 checkIntervalInSec:(unsigned char)a1 retries:(int)a2;
- (void)waitForFPToBeReadyToAcceptXPCAndExecuteBlock:(id /* block */)a0;

@end

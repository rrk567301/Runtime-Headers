@class NSError, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_semaphore;

@interface BRCFileProviderDaemonUtils : NSObject {
    char _inSyncBubble;
    char _isFPFS;
    char _interrupted;
    char _fpReady;
    NSError *_fpReadyError;
    char _startedWaitingForFP;
    char _shouldBoostFileProvider;
    NSObject<OS_dispatch_semaphore> *_waitForFPSemaphore;
    NSObject<OS_dispatch_queue> *_fileProviderReadyQueue;
}

+ (id)sharedInstance;

- (void)dealloc;
- (void).cxx_destruct;
- (void)interrupt;
- (id)_initWithSyncBubble:(char)a0 isFPFS:(char)a1;
- (void)_signalFPReady;
- (void)_waitIsOver;
- (char)boostFileProvider;
- (void)enableFileProviderBoosting;
- (char)waitForFPToBeReadyToAcceptXPCWithError:(id *)a0;

@end

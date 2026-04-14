@class NSObject;
@protocol OS_dispatch_semaphore;

@interface BRCFileProviderDaemonUtils : NSObject {
    BOOL _inSyncBubble;
    BOOL _isFPFS;
    BOOL _interrupted;
    BOOL _fpReady;
    NSObject<OS_dispatch_semaphore> *_waitForFPSemaphore;
}

+ (id)sharedInstance;

- (void).cxx_destruct;
- (void)interrupt;
- (id)_initWithSyncBubble:(BOOL)a0 isFPFS:(BOOL)a1;
- (void)_signalFPReady;
- (BOOL)boostFileProviderWithError:(id *)a0;
- (BOOL)waitForFPToBeReadyToAcceptXPCWithError:(id *)a0;

@end

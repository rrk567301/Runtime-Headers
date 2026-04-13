@class NSObject;
@protocol PMDeviceLockMonitorDelegate, OS_dispatch_queue;

@interface PMDeviceLockMonitor : NSObject

@property BOOL deviceUnlockedSinceBoot;
@property BOOL protectedDataAvailable;
@property (weak) id<PMDeviceLockMonitorDelegate> delegate;
@property (weak) NSObject<OS_dispatch_queue> *delegateQueue;

+ (id)sharedInstance;
+ (id)log;

- (id)init;
- (void).cxx_destruct;
- (void)setDelegate:(id)a0 delegateQueue:(id)a1;

@end

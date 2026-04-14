@class NSString, SignpostSupportSubsystemCategoryAllowlist, NSObject;
@protocol OS_dispatch_queue, OS_os_transaction;

@interface STYSignpostsMonitorHelper : NSObject

@property BOOL shouldBeEnabled;
@property BOOL isEnabled;
@property (retain) NSObject<OS_dispatch_queue> *processingQueue;
@property (retain) NSObject<OS_os_transaction> *osTransaction;
@property (readonly) NSString *name;
@property (readonly) SignpostSupportSubsystemCategoryAllowlist *allowList;

- (void)resetState;
- (void).cxx_destruct;
- (BOOL)needsEnablementChange;
- (id)init;
- (void)handleInterval:(id)a0;
- (void)takeTransaction;
- (void)didEndMonitoring;
- (void)handleEmit:(id)a0;
- (void)handleIntervalBegin:(id)a0;
- (BOOL)wantsAnimationFrameRate;
- (void)willStartMonitoring;

@end

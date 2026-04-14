@class BPSSink, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXSmartActivationEarlyExitDetectionLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}

+ (id)sharedInstance;

- (BOOL)_logEventIfEarlyExit:(id)a0;
- (id)init;
- (void)stopListening;
- (void)_registerForModeChangeNotifications;
- (void).cxx_destruct;
- (void)_processNewUserFocusComputedModeEvent:(id)a0;

@end

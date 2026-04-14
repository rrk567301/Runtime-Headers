@class BPSSink, BMBiomeScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXSmartActivationEarlyExitDetectionLogger : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    BMBiomeScheduler *_scheduler;
    BPSSink *_sink;
}

+ (id)sharedInstance;

- (void)_processNewUserFocusComputedModeEvent:(id)a0;
- (void)_registerForModeChangeNotifications;
- (BOOL)_logEventIfEarlyExit:(id)a0;
- (void)stopListening;
- (void).cxx_destruct;
- (id)init;

@end

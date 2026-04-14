@class NSUserDefaults, NSUUID, ATXCoreDuetContextHelper, ATXAnchorModelPredictionScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXAnchorModelInferenceEngine : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    ATXAnchorModelPredictionScheduler *_predictionScheduler;
    _Atomic BOOL _started;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_defaults;
    NSUUID *_microLocationSchedulerToken;
}

+ (id)sharedInstance;

- (void)registerForAnchorExit:(id)a0 cdContext:(id)a1;
- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (void)start;
- (void)handleLOIEntrance;
- (id /* block */)exitCallbackForAnchor:(id)a0;
- (void)handleAnchorEventForIdleTimeBegin;
- (void)handleInferenceEvent:(id)a0;
- (void)handleAnchorEventForMicrolocationVisitAnchor;
- (id)init;
- (void)unregisterAnchorEventListeners;
- (id)supportedAnchorsForInference;
- (void)handleAnchorExitEventForGymArrival;
- (void)registerForAnchorEntrance:(id)a0 cdContext:(id)a1;
- (void).cxx_destruct;
- (id)currentDuetEventForAnchor:(id)a0;
- (void)dealloc;
- (void)unregisterAnchorEventListenerForAnchor:(id)a0;
- (void)registerAnchorEventListeners;
- (void)registerForWakingNotificationForAnchor:(id)a0 cdContext:(id)a1;
- (void)handleAnchorEventForAnchor:(id)a0;
- (void)handleLOIExit;
- (void)registerAnchorEventListenerForAnchor:(id)a0;
- (void)setupContextStoreListenerForAnchor:(id)a0 context:(id)a1;
- (void)handleAnchorEventForGymArrival;
- (void)retryPreviouslyIncompleteInference;
- (id)notificationIdentifierForAnchor:(id)a0;
- (void)queueHandleInferenceEvent:(id)a0;
- (id /* block */)entranceCallbackForAnchor:(id)a0;

@end

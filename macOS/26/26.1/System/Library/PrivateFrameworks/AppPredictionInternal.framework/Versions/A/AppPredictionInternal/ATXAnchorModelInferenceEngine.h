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

- (void)start;
- (void)handleAnchorEventForMicrolocationVisitAnchor;
- (void)registerForWakingNotificationForAnchor:(id)a0 cdContext:(id)a1;
- (void)registerAnchorEventListeners;
- (void)handleAnchorExitEventForGymArrival;
- (id /* block */)exitCallbackForAnchor:(id)a0;
- (void)registerForAnchorEntrance:(id)a0 cdContext:(id)a1;
- (void)unregisterAnchorEventListenerForAnchor:(id)a0;
- (id)supportedAnchorsForInference;
- (void)handleLOIEntrance;
- (id)notificationIdentifierForAnchor:(id)a0;
- (void)handleInferenceEvent:(id)a0;
- (void)queueHandleInferenceEvent:(id)a0;
- (id)currentDuetEventForAnchor:(id)a0;
- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (void)dealloc;
- (void)retryPreviouslyIncompleteInference;
- (void)handleAnchorEventForGymArrival;
- (void)registerAnchorEventListenerForAnchor:(id)a0;
- (void)handleLOIExit;
- (void).cxx_destruct;
- (void)unregisterAnchorEventListeners;
- (void)registerForAnchorExit:(id)a0 cdContext:(id)a1;
- (id /* block */)entranceCallbackForAnchor:(id)a0;
- (void)setupContextStoreListenerForAnchor:(id)a0 context:(id)a1;
- (void)handleAnchorEventForIdleTimeBegin;
- (id)init;
- (void)handleAnchorEventForAnchor:(id)a0;

@end

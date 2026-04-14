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

- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (void)handleAnchorEventForAnchor:(id)a0;
- (id)currentDuetEventForAnchor:(id)a0;
- (void)handleLOIExit;
- (void)setupContextStoreListenerForAnchor:(id)a0 context:(id)a1;
- (void)handleInferenceEvent:(id)a0;
- (void)queueHandleInferenceEvent:(id)a0;
- (id)supportedAnchorsForInference;
- (void)registerAnchorEventListenerForAnchor:(id)a0;
- (void)registerForAnchorExit:(id)a0 cdContext:(id)a1;
- (void)handleAnchorEventForGymArrival;
- (void).cxx_destruct;
- (void)unregisterAnchorEventListenerForAnchor:(id)a0;
- (void)start;
- (void)registerAnchorEventListeners;
- (void)handleAnchorEventForMicrolocationVisitAnchor;
- (void)registerForAnchorEntrance:(id)a0 cdContext:(id)a1;
- (void)handleAnchorExitEventForGymArrival;
- (id /* block */)entranceCallbackForAnchor:(id)a0;
- (void)registerForWakingNotificationForAnchor:(id)a0 cdContext:(id)a1;
- (void)handleAnchorEventForIdleTimeBegin;
- (id /* block */)exitCallbackForAnchor:(id)a0;
- (id)init;
- (void)unregisterAnchorEventListeners;
- (id)notificationIdentifierForAnchor:(id)a0;
- (void)handleLOIEntrance;
- (void)retryPreviouslyIncompleteInference;
- (void)dealloc;

@end

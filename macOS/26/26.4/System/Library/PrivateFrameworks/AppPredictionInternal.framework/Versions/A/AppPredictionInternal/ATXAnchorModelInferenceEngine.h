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
- (id)notificationIdentifierForAnchor:(id)a0;
- (void)handleAnchorEventForGymArrival;
- (void)handleAnchorEventForIdleTimeBegin;
- (id /* block */)entranceCallbackForAnchor:(id)a0;
- (void)unregisterAnchorEventListenerForAnchor:(id)a0;
- (void)setupContextStoreListenerForAnchor:(id)a0 context:(id)a1;
- (void)registerForWakingNotificationForAnchor:(id)a0 cdContext:(id)a1;
- (id)currentDuetEventForAnchor:(id)a0;
- (id)supportedAnchorsForInference;
- (void).cxx_destruct;
- (void)handleInferenceEvent:(id)a0;
- (void)handleAnchorEventForMicrolocationVisitAnchor;
- (void)unregisterAnchorEventListeners;
- (void)handleLOIEntrance;
- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (void)retryPreviouslyIncompleteInference;
- (id)init;
- (void)handleAnchorExitEventForGymArrival;
- (void)start;
- (id /* block */)exitCallbackForAnchor:(id)a0;
- (void)handleAnchorEventForAnchor:(id)a0;
- (void)registerAnchorEventListeners;
- (void)handleLOIExit;
- (void)queueHandleInferenceEvent:(id)a0;
- (void)dealloc;
- (void)registerForAnchorEntrance:(id)a0 cdContext:(id)a1;
- (void)registerAnchorEventListenerForAnchor:(id)a0;

@end

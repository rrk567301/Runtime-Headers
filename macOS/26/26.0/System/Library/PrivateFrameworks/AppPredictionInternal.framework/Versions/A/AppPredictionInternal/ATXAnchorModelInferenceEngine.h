@class NSUserDefaults, ATXCoreDuetContextHelper, ATXAnchorModelPredictionScheduler, NSObject;
@protocol OS_dispatch_queue;

@interface ATXAnchorModelInferenceEngine : NSObject {
    ATXCoreDuetContextHelper *_contextHelper;
    ATXAnchorModelPredictionScheduler *_predictionScheduler;
    _Atomic BOOL _started;
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_defaults;
}

+ (id)sharedInstance;

- (void)start;
- (void)dealloc;
- (void)registerAnchorEventListeners;
- (void)registerAnchorEventListenerForAnchor:(id)a0;
- (void)handleLOIEntrance;
- (id /* block */)exitCallbackForAnchor:(id)a0;
- (void)handleLOIExit;
- (id)exitNotificationIdentifierForAnchor:(id)a0;
- (id)notificationIdentifierForAnchor:(id)a0;
- (id)init;
- (void)handleInferenceEvent:(id)a0;
- (void)registerForAnchorExit:(id)a0 cdContext:(id)a1;
- (void)handleAnchorEventForIdleTimeBegin;
- (void)handleAnchorEventForGymArrival;
- (void)registerForAnchorEntrance:(id)a0 cdContext:(id)a1;
- (void)registerForWakingNotificationForAnchor:(id)a0 cdContext:(id)a1;
- (void)handleAnchorEventForAnchor:(id)a0;
- (id /* block */)entranceCallbackForAnchor:(id)a0;
- (void)unregisterAnchorEventListeners;
- (id)supportedAnchorsForInference;
- (void)queueHandleInferenceEvent:(id)a0;
- (id)currentDuetEventForAnchor:(id)a0;
- (void)retryPreviouslyIncompleteInference;
- (void)unregisterAnchorEventListenerForAnchor:(id)a0;
- (void)handleAnchorExitEventForGymArrival;
- (void)handleAnchorEventForMicrolocationVisitAnchor;
- (void)setupContextStoreListenerForAnchor:(id)a0 context:(id)a1;
- (void).cxx_destruct;

@end

@class IASMissingKeyboardAnalyzerTimestampCache, NSMutableDictionary, NSDate, IASMissingKeyboardAnalyzerPublishTimerInfo, IASMissingKeyboardAnalyzerSignalTimerCycleInfo, NSObject, IASMissingKeyboardAnalyzerSignalTimerInfo;
@protocol OS_dispatch_source;

@interface IASMissingKeyboardAnalyzer : IASAnalyzer

@property (retain, nonatomic) NSObject<OS_dispatch_source> *signalTimer;
@property (retain, nonatomic) IASMissingKeyboardAnalyzerSignalTimerInfo *signalTimerInfo;
@property (retain, nonatomic) IASMissingKeyboardAnalyzerSignalTimerCycleInfo *signalTimerCycleInfo;
@property (retain, nonatomic) NSMutableDictionary *foregroundScenes;
@property (retain, nonatomic) NSMutableDictionary *foregroundSceneOrientations;
@property (retain, nonatomic) NSMutableDictionary *inputModesByBundleId;
@property (nonatomic) double keyboardRequestedSignalLag;
@property (retain, nonatomic) IASMissingKeyboardAnalyzerTimestampCache *timestampCache;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *publishTimer;
@property (retain, nonatomic) IASMissingKeyboardAnalyzerPublishTimerInfo *publishTimerInfo;
@property (retain, nonatomic) NSDate *eligibleTime;

+ (unsigned long long)keyboardPresenceDetectionResultForOrientation:(id)a0;
+ (unsigned long long)keyboardPresenceDetectionResultForOrientation:(id)a0 screenshotEndTime:(id *)a1;
+ (unsigned long long)keyboardPresenceDetectionResultForOrientationEnum:(long long)a0;
+ (id)orientationStringFromEnum:(long long)a0;

- (void).cxx_destruct;
- (void)consumeAction:(id)a0;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2 eventHandler:(id /* block */)a3;
- (id)addCommonFieldsToEvent:(id)a0;
- (void)addPlaceholderSceneIdToSignal:(id)a0;
- (BOOL)bundleIdHasMultipleForegroundScenes:(id)a0;
- (void)cancelPublishTimer;
- (void)cancelSignalTimerWithReason:(id)a0;
- (void)endSignalTimerCycle;
- (void)handleKeyboardDismissedSignal:(id)a0;
- (void)handleKeyboardRequestedSignal:(id)a0;
- (void)handleSignal:(id)a0;
- (void)keyboardDismissedTimerExpired;
- (void)keyboardRequestedTimerExpired;
- (BOOL)maybeModifyPendingEventWithSignal:(id)a0;
- (void)maybePublishFields:(id)a0;
- (void)maybePublishFields:(id)a0 debugInfo:(id)a1 classifierProbabilities:(id)a2;
- (unsigned long long)newKeyboardArchitectureFeatureFlagStatus;
- (void)openImageURL:(id)a0;
- (BOOL)orientationStringIsValid:(id)a0;
- (void)prepareAndShowDebugNotificationForFields:(id)a0 debugInfo:(id)a1 classifierProbabilities:(id)a2;
- (void)publishTimerExpired;
- (void)scheduleToPublishFields:(id)a0;
- (void)scheduleToPublishFields:(id)a0 debugInfo:(id)a1;
- (unsigned long long)sessionEndStatusFromCancelReason:(id)a0;
- (unsigned long long)sessionEndStatusFromKeyboardDetectionResult:(unsigned long long)a0;
- (BOOL)shouldHandleSignal:(id)a0;
- (void)showDebugNotification:(id)a0 withImageURL:(id)a1;
- (BOOL)signalShouldCancelTimer:(id)a0;
- (BOOL)signalShouldHaveSceneId:(id)a0;
- (void)startKeyboardDismissedTimerForSignalName:(id)a0 bundleId:(id)a1 sceneId:(id)a2;
- (void)startKeyboardRequestedTimerForSignalName:(id)a0 bundleId:(id)a1 sceneId:(id)a2;
- (void)startPublishTimer;
- (unsigned long long)startSignalEnumFromSignalName:(id)a0;
- (void)startTimerCycleWithSignal:(id)a0;
- (id)stringFromSessionEndStatus:(unsigned long long)a0;
- (BOOL)timerInfoMatchesSignalBundleId:(id)a0 signalSceneId:(id)a1;
- (BOOL)timerIsDismissTimer;
- (BOOL)timerIsRequestTimer;
- (id)timestampStringWithMicroseconds:(id)a0;
- (void)updateSignalTimerCycleWithSignal:(id)a0;

@end

@class NSObject, NSLocale, TITypingSession, TIKeyboardInputManagerConfig, NSMutableArray, TITypingDESRecordWriter, TIDPEventDispatcher, TIBiomeObserver, TIMetricDescriptorRegistry, TISKMetricCollector, TIKBUserModel, TICoreAnalyticsEventDispatcher, TIFeatureUsageMetricsCache, NSArray, NSString;
@protocol OS_dispatch_queue;

@interface TITypingSessionMonitor : NSObject <TITypingSessionMonitoringProtocol> {
    NSObject<OS_dispatch_queue> *_workQueue;
}

@property (retain, nonatomic) TIKeyboardInputManagerConfig *config;
@property (retain, nonatomic) TIMetricDescriptorRegistry *metricDescriptorRegistry;
@property (retain, nonatomic) TITypingDESRecordWriter *desRecordWriter;
@property (retain, nonatomic) NSArray *interactionObservers;
@property (retain, nonatomic) NSMutableArray *aggregatedEventObservers;
@property (readonly, nonatomic) NSLocale *locale;
@property (readonly, nonatomic) TIKBUserModel *userModel;
@property (readonly, nonatomic) TISKMetricCollector *sensorKitMetricCollector;
@property (readonly, nonatomic) TICoreAnalyticsEventDispatcher *coreAnalyticsEventDispatcher;
@property (readonly, nonatomic) TIDPEventDispatcher *differentialPrivacyEventDispatcher;
@property (readonly, nonatomic) TIFeatureUsageMetricsCache *featureUsageMetricsCache;
@property (readonly, nonatomic) TIBiomeObserver *biomeObserver;
@property (readonly, nonatomic) TITypingSession *currentTypingSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (char)shouldRecordSession:(id)a0;

- (void).cxx_destruct;
- (void)tearDown;
- (void)acceptingCandidateWithTrigger:(id)a0;
- (void)changingContextWithTrigger:(id)a0;
- (void)_lazyLoadAggregatedEventObservers;
- (void)_loadAggregatedEventObservers;
- (void)_loadInteractionObservers;
- (id)_typingSessionFromInteractionObservers:(id)a0;
- (void)addDrawInputWithSyllableCount:(unsigned long long)a0 keyboardState:(id)a1;
- (void)addKeyInput:(id)a0 keyboardState:(id)a1;
- (void)addTouchEvent:(id)a0;
- (void)candidateAccepted:(id)a0 withInput:(id)a1 documentState:(id)a2 inputContext:(id)a3 inputStem:(id)a4 predictionBarHit:(char)a5 useCandidateSelection:(char)a6 candidateIndex:(long long)a7 keyboardState:(id)a8;
- (void)candidatesOffered:(id)a0 keyboardState:(id)a1;
- (void)contextDidChange:(id)a0 wordDelete:(char)a1 cursorMoved:(char)a2 extendsPriorWord:(char)a3 inWord:(id)a4 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a5 selectionLocation:(unsigned long long)a6 keyboardState:(id)a7;
- (id)currentInteractionObservers;
- (void)endSessionWithInteractionObservers:(id)a0 sessionParams:(id)a1 timestamp:(id)a2;
- (id)initWithConfig:(id)a0 metricDescriptorRegistry:(id)a1;
- (void)layoutDidChange:(id)a0 keyboardState:(id)a1;
- (id)observeSession:(id)a0 sessionParams:(id)a1;
- (id)resetInteractionObserversForNextSession;
- (void)setClientID:(id)a0 keyboardState:(id)a1;

@end

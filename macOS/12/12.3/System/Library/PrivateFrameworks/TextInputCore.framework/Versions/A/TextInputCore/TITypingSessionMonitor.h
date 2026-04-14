@class TIKeyboardLayout, NSObject, NSLocale, TITypingSession, NSMutableArray, TITypingDESRecordWriter, TIDPEventDispatcher, TIBiomeObserver, NSString, TISKMetricCollector, TICoreAnalyticsEventDispatcher, TIKBUserModel, TIFeatureUsageMetricsCache;
@protocol OS_dispatch_queue;

@interface TITypingSessionMonitor : NSObject <TITypingSessionMonitoringProtocol> {
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _useDODML;
}

@property (retain, nonatomic) TITypingSession *currentTypingSession;
@property (retain, nonatomic) TITypingDESRecordWriter *desRecordWriter;
@property (retain, nonatomic) NSLocale *locale;
@property (retain, nonatomic) TIKeyboardLayout *currentLayout;
@property (retain, nonatomic) NSMutableArray *aggregatedEventObservers;
@property (readonly, nonatomic) TIKBUserModel *userModel;
@property (readonly, nonatomic) TISKMetricCollector *sensorKitMetricCollector;
@property (readonly, nonatomic) TICoreAnalyticsEventDispatcher *coreAnalyticsEventDispatcher;
@property (readonly, nonatomic) TIDPEventDispatcher *differentialPrivacyEventDispatcher;
@property (readonly, nonatomic) TIFeatureUsageMetricsCache *featureUsageMetricsCache;
@property (readonly, nonatomic) TIBiomeObserver *biomeObserver;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)shouldRecordSession:(id)a0;
+ (id)temporaryKeyboardsDirectory;
+ (id)loadAllStoredSessions;

- (id)forwardingTargetForSelector:(SEL)a0;
- (void).cxx_destruct;
- (void)tearDown;
- (void)layoutDidChange:(id)a0 keyboardState:(id)a1;
- (id)observeSession:(id)a0 sessionParams:(id)a1;
- (id)initWithConfig:(id)a0 metricDescriptorRegistry:(id)a1;
- (id)endTypingSession;
- (void)keyboardDidSuspend:(id)a0 withSessionParams:(id)a1;

@end

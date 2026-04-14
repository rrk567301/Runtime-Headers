@class NSDictionary;

@interface IASGenericAnalyzer : IASAnalyzer

@property (retain, nonatomic) NSDictionary *channelBasedPayloadKeyAllowList;
@property (retain, nonatomic) NSDictionary *signalTranslation;

- (id)description;
- (void).cxx_destruct;
- (void)_appendAllowListedPayloadKeyAndValueTo:(id)a0 forSignalAnalyticsObject:(id)a1;
- (void)_appendSignalEnumTo:(id)a0 forSignalAnalyticsObject:(id)a1;
- (void)consumeAction:(id)a0;
- (void)enumerateAnalytics;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 eventHandler:(id /* block */)a2;
- (BOOL)shouldBeGarbageCollected;

@end

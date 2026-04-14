@class NSDictionary, NSString;

@interface IASGenericAnalyzer : IASAnalyzer

@property (retain, nonatomic) NSDictionary *channelBasedPayloadKeyAllowList;
@property (retain, nonatomic) NSDictionary *signalTranslation;
@property (copy, nonatomic) NSString *currentEventName;

- (id)description;
- (void).cxx_destruct;
- (void)consumeAction:(id)a0;
- (void)enumerateAnalytics;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2;
- (id)initWithAnalyzerSessionId:(id)a0 sessionManagerDelegate:(id)a1 queue:(id)a2 eventHandler:(id /* block */)a3;
- (BOOL)shouldBeGarbageCollected;
- (void)_appendAllowListedPayloadKeyAndValueTo:(id)a0 forSignalAnalyticsObject:(id)a1;
- (void)_appendSignalEnumTo:(id)a0 forSignalAnalyticsObject:(id)a1;
- (id)imageGenerationSignalToGenmojiMap:(id)a0;
- (void)publishEventWithFields:(id)a0;

@end

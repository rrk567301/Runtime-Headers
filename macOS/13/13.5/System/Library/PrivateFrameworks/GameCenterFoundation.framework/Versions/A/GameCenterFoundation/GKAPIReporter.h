@interface GKAPIReporter : NSObject

+ (id)reporter;

- (void)sendMetrics:(id)a0;
- (void)recordVoiceChat;
- (void)recordClickWithAction:(id)a0 targetId:(id)a1 targetType:(id)a2 pageType:(id)a3;
- (void)recordImpressionWithType:(id)a0 index:(id)a1 element:(id)a2 parent:(id)a3;
- (void)recordPageWithID:(id)a0 pageContext:(id)a1 pageType:(id)a2;
- (void)recordPerformanceMetrics:(id)a0;
- (void)sendPerformanceMetrics:(id)a0;

@end

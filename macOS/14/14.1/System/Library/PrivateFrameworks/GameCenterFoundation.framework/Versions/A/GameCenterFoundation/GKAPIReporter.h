@interface GKAPIReporter : NSObject

+ (id)reporter;

- (void)sendMetrics:(id)a0;
- (void)recordVoiceChat;
- (void)recordClickWithAction:(id)a0 targetId:(id)a1 targetType:(id)a2 pageId:(id)a3 pageType:(id)a4;
- (void)recordClickWithAction:(id)a0 targetId:(id)a1 targetType:(id)a2 pageId:(id)a3 pageType:(id)a4 additionalFields:(id)a5;
- (void)recordMultiplayerActivityMetrics:(id)a0;
- (void)recordMultiplayerErrorID:(id)a0;
- (void)recordPageWithID:(id)a0 pageContext:(id)a1 pageType:(id)a2;
- (void)recordPerformanceMetrics:(id)a0;
- (void)sendPerformanceMetrics:(id)a0;
- (id)utilityService;

@end

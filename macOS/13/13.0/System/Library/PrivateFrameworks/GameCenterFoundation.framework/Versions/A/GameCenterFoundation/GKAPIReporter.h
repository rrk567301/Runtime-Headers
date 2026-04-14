@interface GKAPIReporter : NSObject

+ (id)reporter;

- (void)recordVoiceChat;
- (void)recordClickWithAction:(id)a0 targetId:(id)a1 targetType:(id)a2;
- (void)recordPageWithID:(id)a0 pageContext:(id)a1 pageType:(id)a2;
- (void)sendMetrics:(id)a0 isPage:(BOOL)a1;

@end

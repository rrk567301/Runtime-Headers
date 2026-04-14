@interface GKAPIReporter : NSObject

+ (id)reporter;

- (void)sendMetrics:(id)a0;
- (void)recordVoiceChat;
- (void)recordClickWithAction:(id)a0 targetId:(id)a1 targetType:(id)a2 pageId:(id)a3 pageType:(id)a4;
- (void)recordClickWithAction:(id)a0 targetId:(id)a1 targetType:(id)a2 pageId:(id)a3 pageType:(id)a4 additionalFields:(id)a5;
- (void)recordInviteFriendClickEventWithPageType:(id)a0 pageId:(id)a1 pushBased:(BOOL)a2 knownRecipient:(BOOL)a3 location:(id)a4;
- (void)recordLoadUrlMetrics:(id)a0;
- (void)recordMultiplayerActivityMetrics:(id)a0;
- (void)recordMultiplayerErrorID:(id)a0;
- (void)recordPageWithID:(id)a0 pageContext:(id)a1 pageType:(id)a2;
- (void)recordPageWithID:(id)a0 pageContext:(id)a1 pageType:(id)a2 refApp:(id)a3;
- (void)recordPerformanceMetrics:(id)a0;
- (void)sendPerformanceMetrics:(id)a0;
- (id)utilityService;

@end

@interface IASignalAnalytics : NSObject

+ (void)sendSignal:(id)a0 toChannel:(id)a1 withPayload:(id)a2;
+ (void)sendSignal:(id)a0 toChannel:(id)a1 withUniqueStringID:(id)a2 withPayload:(id)a3;
+ (id)xpcClient;
+ (void)invalidateConnection;
+ (id)actionQueue;
+ (void)sendSignal:(id)a0 toChannel:(id)a1 withNullableUniqueStringID:(id)a2 withPayload:(id)a3;
+ (id)uiQueue;
+ (BOOL)checkAndHandleSpecialCasesWithChannel:(id)a0 signal:(id)a1 withUniqueStringID:(id)a2 payload:(id)a3;
+ (id)getGeneratedContentString;
+ (void)handleLaunchSmartRepliesFeedbackWithAction:(long long)a0 withUniqueStringID:(id)a1 payload:(id)a2;
+ (void)handleSmartRepliesFeedbackUIPresentedWithUniqueStringID:(id)a0 withPayload:(id)a1;
+ (void)sendSignal:(id)a0 toChannel:(id)a1 withNullableSessionID:(id)a2 withPayload:(id)a3;
+ (void)sendSignal:(id)a0 toChannel:(id)a1 withSessionID:(id)a2 withPayload:(id)a3;
+ (id)sharedSmartReplyFeedbackCache;
+ (id)statelessSessionManager;

@end

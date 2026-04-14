@interface IASignalAnalytics : NSObject

+ (id)xpcClient;
+ (void)invalidateConnection;
+ (void)sendSignal:(id)a0 toChannel:(id)a1 withPayload:(id)a2;
+ (void)sendSignal:(id)a0 toChannel:(id)a1 withUniqueStringID:(id)a2 withPayload:(id)a3;
+ (BOOL)checkAndHandleSpecialCasesWithChannel:(id)a0 signal:(id)a1 payload:(id)a2;
+ (void)handleLaunchSmartRepliesFeedbackWithAction:(long long)a0 Payload:(id)a1;
+ (void)handleSmartRepliesFeedbackUIPresentedWithPayload:(id)a0;
+ (void)sendSignal:(id)a0 toChannel:(id)a1 withSessionID:(id)a2 withPayload:(id)a3;

@end

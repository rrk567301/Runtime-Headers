@interface TUIInputAnalytics : NSObject

+ (void)sendGenmojiCreationSignal:(id)a0 payload:(id)a1;
+ (id)getIAChannelGenmojiCreation;
+ (void)_sendSignal:(id)a0 toChannel:(id)a1 withThreadId:(id)a2 withPayload:(id)a3;
+ (void)didHandleSmartReplyAnalyticsEventOfType:(long long)a0 withBundleId:(id)a1 withInputContextHistoryRequestId:(id)a2 withMsgOrMailThreadId:(id)a3 withSmartReplyResponse:(id)a4;
+ (id)getIASignalGenmojiCreationEmojiKeyPlaneSwitched;
+ (id)getIASignalGenmojiCreationEmojiSearchDismissed;
+ (id)getIASignalGenmojiCreationEmojiSearchInvoked;
+ (id)getIASignalGenmojiCreationGenmojiButtonPressed;

@end

@interface TUIInputAnalytics : NSObject

+ (void)sendGenmojiCreationSignal:(id)a0 payload:(id)a1;
+ (id)getIAChannelCandidateBar;
+ (id)getIAChannelGenmojiCreation;
+ (void)didHandleSmartReplyAnalyticsEventOfType:(long long)a0 withBundleId:(id)a1 withInputContextHistoryRequestId:(id)a2 withMsgOrMailThreadId:(id)a3 withSmartReplyResponse:(id)a4 withConversationType:(long long)a5;
+ (id)getIASignalCandidateBarMixmojiCombineButtonPressed;
+ (id)getIASignalCandidateBarMixmojiCombineButtonShown;
+ (id)getIASignalGenmojiCreationEmojiKeyPlaneSwitched;
+ (id)getIASignalGenmojiCreationEmojiSearchDismissed;
+ (id)getIASignalGenmojiCreationEmojiSearchInvoked;
+ (id)getIASignalGenmojiCreationGenmojiButtonPressed;
+ (void)sendCandidateBarSignal:(id)a0 threadId:(id)a1 payload:(id)a2;
+ (void)sendSmartRepliesPollActionShownSignalWithInputContextHistory:(id)a0;

@end

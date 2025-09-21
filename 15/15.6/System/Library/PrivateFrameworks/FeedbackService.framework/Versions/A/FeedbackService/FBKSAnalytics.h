@interface FBKSAnalytics : NSObject

+ (void)logFeedbackdLaunchedFeedbackWithForm:(id)a0 usedAlertPrompt:(char)a1 usedNotificationPrompt:(char)a2 usedHiddenApp:(char)a3;
+ (void)logFeedbackdReceivedNotificationResponse:(id)a0 formIdentifier:(id)a1;

@end

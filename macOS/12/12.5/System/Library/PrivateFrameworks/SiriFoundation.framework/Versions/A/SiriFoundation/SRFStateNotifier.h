@interface SRFStateNotifier : NSObject

+ (id)sharedNotifier;
+ (void)notifySiriDidAppear;
+ (void)notifySiriDidDisappear;
+ (void)notifySiriAboutToListen;
+ (void)notifySiriListening;
+ (void)notifySiriThinking;
+ (void)notifySiriSuccess;
+ (void)notifyTrainingAboutToListen;
+ (void)notifyTrainingListening;
+ (void)notifyTrainingThinking;
+ (void)notifyDictationAboutToListen;
+ (void)notifyDictationListening;

- (void)_notifyWithDistributedNotification:(id)a0;
- (void)_notifyWithNotification:(id)a0;

@end

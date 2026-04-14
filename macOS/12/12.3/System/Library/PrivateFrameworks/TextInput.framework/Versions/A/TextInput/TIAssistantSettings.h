@interface TIAssistantSettings : NSObject

+ (void)presentDialogForType:(long long)a0 withCompletionHandler:(id /* block */)a1;
+ (void)dismissedDataSharingWithResponse:(long long)a0;
+ (void)launchKeyboardSettings;
+ (void)launchDictationSettings;
+ (void)connectForOperations:(id /* block */)a0 withErrorHandler:(id /* block */)a1;
+ (void)dismissDialog;
+ (void)setTestBlock:(id /* block */)a0;
+ (void)promptToEnableDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)promptToRemindDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)promptReminderDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)promptToEnableDictationWithCompletionHandler:(id /* block */)a0;
+ (void)dismissEnableDictationPrompt;
+ (void)dismissEnableDataSharingPrompt;

@end

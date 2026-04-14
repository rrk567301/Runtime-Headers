@interface TIAssistantSettings : NSObject

+ (void)launchKeyboardSettings;
+ (void)promptToRemindDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)setTestBlock:(id /* block */)a0;
+ (void)dismissEnableDictationPrompt;
+ (void)promptToEnableDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)presentDialogForType:(long long)a0 withCompletionHandler:(id /* block */)a1;
+ (void)promptReminderDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)connectForOperations:(id /* block */)a0 withErrorHandler:(id /* block */)a1;
+ (void)dismissDialog;
+ (void)launchDictationSettings;
+ (void)dismissEnableDataSharingPrompt;
+ (void)dismissedDataSharingWithResponse:(long long)a0;
+ (void)promptToEnableDictationWithCompletionHandler:(id /* block */)a0;
+ (void)launchPencilSettings;

@end

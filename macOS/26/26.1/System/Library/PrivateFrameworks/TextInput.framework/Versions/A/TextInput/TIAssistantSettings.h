@interface TIAssistantSettings : NSObject

+ (void)promptToEnableDictationWithCompletionHandler:(id /* block */)a0;
+ (void)presentDialogForType:(long long)a0 withCompletionHandler:(id /* block */)a1;
+ (void)dismissEnableDictationPrompt;
+ (void)dismissEnableDataSharingPrompt;
+ (void)promptToRemindDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)launchDictationSettings;
+ (void)dismissDialog;
+ (void)dismissedDataSharingWithResponse:(long long)a0;
+ (void)setTestBlock:(id /* block */)a0;
+ (void)launchPencilSettings;
+ (void)launchKeyboardSettings;
+ (void)promptToEnableDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)promptReminderDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)connectForOperations:(id /* block */)a0 withErrorHandler:(id /* block */)a1;

@end

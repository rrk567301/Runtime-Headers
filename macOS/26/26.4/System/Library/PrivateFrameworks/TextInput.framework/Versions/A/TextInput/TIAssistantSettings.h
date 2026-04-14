@interface TIAssistantSettings : NSObject

+ (void)promptReminderDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)setTestBlock:(id /* block */)a0;
+ (void)launchKeyboardSettings;
+ (void)dismissDialog;
+ (void)promptToEnableDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)launchDictationSettings;
+ (void)connectForOperations:(id /* block */)a0 withErrorHandler:(id /* block */)a1;
+ (void)promptToRemindDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)promptToEnableDictationWithCompletionHandler:(id /* block */)a0;
+ (void)dismissEnableDictationPrompt;
+ (void)dismissedDataSharingWithResponse:(long long)a0;
+ (void)dismissEnableDataSharingPrompt;
+ (void)launchPencilSettings;
+ (void)presentDialogForType:(long long)a0 withCompletionHandler:(id /* block */)a1;

@end

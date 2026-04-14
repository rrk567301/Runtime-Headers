@interface TIAssistantSettings : NSObject

+ (void)dismissedDataSharingWithResponse:(long long)a0;
+ (void)promptToEnableDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)setTestBlock:(id /* block */)a0;
+ (void)promptToRemindDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)promptToEnableDictationWithCompletionHandler:(id /* block */)a0;
+ (void)presentDialogForType:(long long)a0 withCompletionHandler:(id /* block */)a1;
+ (void)launchKeyboardSettings;
+ (void)promptReminderDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)launchDictationSettings;
+ (void)dismissEnableDictationPrompt;
+ (void)dismissEnableDataSharingPrompt;
+ (void)connectForOperations:(id /* block */)a0 withErrorHandler:(id /* block */)a1;
+ (void)dismissDialog;
+ (void)launchPencilSettings;

@end

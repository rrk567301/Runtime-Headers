@interface TIAssistantSettings : NSObject

+ (void)promptToEnableDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)launchDictationSettings;
+ (void)promptToEnableDictationWithCompletionHandler:(id /* block */)a0;
+ (void)dismissedDataSharingWithResponse:(long long)a0;
+ (void)promptToRemindDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)connectForOperations:(id /* block */)a0 withErrorHandler:(id /* block */)a1;
+ (void)setTestBlock:(id /* block */)a0;
+ (void)dismissEnableDataSharingPrompt;
+ (void)dismissEnableDictationPrompt;
+ (void)dismissDialog;
+ (void)promptReminderDataSharingWithCompletionHandler:(id /* block */)a0;
+ (void)launchPencilSettings;
+ (void)presentDialogForType:(long long)a0 withCompletionHandler:(id /* block */)a1;
+ (void)launchKeyboardSettings;

@end

@interface WFShortcutsSecuritySettings : NSObject

+ (char)areScriptingActionsEnabled;
+ (char)allowsSharingLargeAmountsOfData;
+ (char)allowsDeletingLargeAmountsOfData;
+ (char)allowsDeletingWithoutConfirmation;
+ (id)scripingActionDisabledErrorWithActionName:(id)a0;

@end

@interface WFShortcutsSecuritySettings : NSObject

+ (BOOL)allowsDeletingWithoutConfirmation;
+ (BOOL)areScriptingActionsEnabled;
+ (id)scripingActionDisabledErrorWithActionName:(id)a0;
+ (BOOL)allowsSharingLargeAmountsOfData;
+ (BOOL)allowsDeletingLargeAmountsOfData;

@end

@interface WFShortcutsSecuritySettings : NSObject

+ (BOOL)areScriptingActionsEnabled;
+ (BOOL)allowsSharingLargeAmountsOfData;
+ (BOOL)allowsDeletingLargeAmountsOfData;
+ (BOOL)allowsDeletingWithoutConfirmation;
+ (id)scripingActionDisabledErrorWithActionName:(id)a0;

@end

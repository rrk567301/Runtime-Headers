@interface WFSharingSettings : NSObject

+ (BOOL)sharingEnabled;
+ (id)sharingDisabledAlertWithShortcutName:(id)a0;
+ (id)shortcutFileSharingDisabledError;
+ (id)privateSharingDisabledErrorWithShortcutName:(id)a0;
+ (BOOL)shortcutFileSharingEnabled;
+ (id)sharingDisabledAlertWithWorkflowName:(id)a0;
+ (id)shortcutFileSharingDisabledAlert;
+ (BOOL)isPrivateSharingEnabled;
+ (id)privateSharingDisabledAlertWithShortcutName:(id)a0;

@end

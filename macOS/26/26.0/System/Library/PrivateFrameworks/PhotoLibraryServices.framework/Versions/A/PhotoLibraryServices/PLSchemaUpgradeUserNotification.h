@class NSString;

@interface PLSchemaUpgradeUserNotification : NSObject

@property (readonly) NSString *message;

- (id)initWithMessage:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isDisabled;
- (BOOL)_shouldShowUserNotification;
- (void)_snoozeForHours:(unsigned long long)a0;
- (long long)showAlertAndWaitForResponse;

@end

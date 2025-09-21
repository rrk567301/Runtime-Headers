@class NSString;

@interface PLRebuildUserNotification : NSObject

@property (readonly) NSString *message;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (char)_shouldShowUserNotification;
- (void)_snoozeForHours:(unsigned long long)a0;
- (long long)showAlertAndWaitForResponse;

@end

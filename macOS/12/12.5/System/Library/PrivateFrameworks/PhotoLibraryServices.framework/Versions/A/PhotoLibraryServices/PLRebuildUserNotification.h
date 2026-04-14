@class NSString;

@interface PLRebuildUserNotification : NSObject

@property (readonly) NSString *message;

- (void).cxx_destruct;
- (id)initWithMessage:(id)a0;
- (long long)showAlertAndWaitForResponse;
- (BOOL)_shouldShowUserNotification;
- (void)_snoozeForHours:(unsigned long long)a0;

@end

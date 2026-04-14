@class NSString;

@interface STDeviceDowntimeUserNotificationContext : STUserNotificationContext

@property (copy, nonatomic) NSString *localizedUserNotificationBodyKey;

+ (BOOL)supportsSecureCoding;

- (id)notificationBundleIdentifier;
- (id)destinations;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)setEndDateComponents:(id)a0 referenceDate:(id)a1;
- (void)setEndDateComponents:(id)a0 referenceDate:(id)a1 locale:(id)a2;

@end

@class UNMutableNotificationContent, NSString, NSArray, UNNotificationTrigger, NSNumber;

@interface STUserNotificationContext : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) UNMutableNotificationContent *notificationContent;
@property (readonly) NSNumber *destinations;
@property (readonly, copy) NSString *notificationBundleIdentifier;
@property (copy, nonatomic) NSString *identifier;
@property (copy, nonatomic) NSArray *localizedUserNotificationBodyArguments;
@property (copy, nonatomic) UNNotificationTrigger *trigger;

- (id)init;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (void)notificationContentWithCompletionBlock:(id /* block */)a0;

@end

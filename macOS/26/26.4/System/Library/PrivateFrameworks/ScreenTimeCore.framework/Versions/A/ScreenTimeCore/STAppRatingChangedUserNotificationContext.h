@class NSString, NSArray;

@interface STAppRatingChangedUserNotificationContext : STUserNotificationContext

@property (readonly) NSString *regionRatingLimit;
@property (readonly) NSArray *bundleIdentifiers;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (id)notificationBundleIdentifier;
- (void)encodeWithCoder:(id)a0;
- (id)initWithIdentifier:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)initWithRatingLimit:(id)a0 bundleIdentifiers:(id)a1;

@end

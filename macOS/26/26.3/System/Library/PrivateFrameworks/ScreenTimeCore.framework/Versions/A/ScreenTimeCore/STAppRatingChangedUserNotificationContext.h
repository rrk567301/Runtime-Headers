@class NSString, NSArray;

@interface STAppRatingChangedUserNotificationContext : STUserNotificationContext

@property (readonly) NSString *regionRatingLimit;
@property (readonly) NSArray *bundleIdentifiers;

+ (id)new;
+ (BOOL)supportsSecureCoding;

- (id)initWithIdentifier:(id)a0;
- (id)init;
- (id)notificationBundleIdentifier;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (void)customizeNotificationContent:(id)a0 withCompletionBlock:(id /* block */)a1;
- (id)initWithRatingLimit:(id)a0 bundleIdentifiers:(id)a1;

@end

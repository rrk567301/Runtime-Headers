@class ATXNotificationManagementMAConstants, NSUserDefaults;

@interface ATXNotificationManagementUserDefaultsOrMAConstants : NSObject {
    ATXNotificationManagementMAConstants *_constants;
    NSUserDefaults *_defaults;
}

- (void).cxx_destruct;
- (id)init;
- (double)doubleForKey:(id)a0 defaultReturnValue:(double)a1;
- (id)numberForKey:(id)a0 defaultReturnValue:(id)a1;

@end

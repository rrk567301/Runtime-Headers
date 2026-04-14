@interface NSPressureConfiguration : NSObject

@property (readonly) long long pressureBehavior;

+ (id)_mtConfigurationForGestureBehaviors:(id)a0;
+ (long long)_mtBehaviorIDForPressureBehavior:(long long)a0;

- (id)description;
- (id)init;
- (void)set;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithPressureBehavior:(long long)a0;
- (id)_mtConfiguration;
- (long long)_mtBehaviorID;

@end

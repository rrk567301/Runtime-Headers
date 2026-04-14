@interface NSPressureConfiguration : NSObject

@property (readonly) long long pressureBehavior;

+ (long long)_mtBehaviorIDForPressureBehavior:(long long)a0;
+ (id)_mtConfigurationForGestureBehaviors:(id)a0;

- (void)set;
- (id)initWithCoder:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)init;
- (long long)_mtBehaviorID;
- (id)_mtConfiguration;
- (id)initWithPressureBehavior:(long long)a0;

@end

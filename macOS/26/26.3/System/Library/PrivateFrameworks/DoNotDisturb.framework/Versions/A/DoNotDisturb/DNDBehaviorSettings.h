@interface DNDBehaviorSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly) unsigned long long interruptionBehavior;
@property (readonly) unsigned long long interruptionBehaviorSetting;

- (id)description;
- (id)init;
- (id)_initWithInterruptionBehaviorSetting:(unsigned long long)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)_initWithSettings:(id)a0;
- (unsigned long long)interruptionBehavior;

@end

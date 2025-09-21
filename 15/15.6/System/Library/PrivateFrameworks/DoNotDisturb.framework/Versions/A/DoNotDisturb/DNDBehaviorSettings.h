@interface DNDBehaviorSettings : NSObject <NSCopying, NSMutableCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly) unsigned long long interruptionBehavior;
@property (readonly) unsigned long long interruptionBehaviorSetting;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)_initWithInterruptionBehaviorSetting:(unsigned long long)a0;
- (id)_initWithSettings:(id)a0;
- (unsigned long long)interruptionBehavior;

@end

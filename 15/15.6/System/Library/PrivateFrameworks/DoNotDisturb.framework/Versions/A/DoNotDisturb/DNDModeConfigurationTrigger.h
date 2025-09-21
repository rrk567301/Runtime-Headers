@interface DNDModeConfigurationTrigger : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) char hasSecureData;
@property (readonly, nonatomic) long long compatibilityVersion;
@property (readonly) unsigned long long enabledSetting;
@property (readonly) char isEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithEnabledSetting:(unsigned long long)a0;

@end

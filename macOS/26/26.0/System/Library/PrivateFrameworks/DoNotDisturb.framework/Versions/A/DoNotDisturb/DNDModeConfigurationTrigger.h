@interface DNDModeConfigurationTrigger : NSObject <NSCopying, NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) BOOL hasSecureData;
@property (readonly, nonatomic) long long compatibilityVersion;
@property (readonly) unsigned long long enabledSetting;
@property (readonly) BOOL isEnabled;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)initWithEnabledSetting:(unsigned long long)a0;

@end

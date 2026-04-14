@class NSString, DNDApplicationIdentifier;

@interface DNDModeConfigurationAppForegroundTrigger : DNDModeConfigurationTrigger

@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly, copy) DNDApplicationIdentifier *applicationIdentifier;

+ (BOOL)supportsSecureCoding;

- (BOOL)hasSecureData;
- (id)description;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)a0;
- (id)initWithApplicationIdentifier:(id)a0 enabledSetting:(unsigned long long)a1;
- (id)initWithBundleIdentifier:(id)a0 enabledSetting:(unsigned long long)a1;

@end

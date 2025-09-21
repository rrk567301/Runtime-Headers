@interface WFToggleSettingContextualAction : WFContextualAction

@property (readonly, nonatomic) unsigned long long setting;
@property (readonly, nonatomic) unsigned long long operation;

+ (char)supportsSecureCoding;
+ (id)spotlightDomainIdentifierForBundleIdentifier:(id)a0;

- (unsigned long long)hash;
- (char)isEqual:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (id)settingBiomeStreamIdentifier;
- (id)_staticDisplayStringForDecoding;
- (id)associatedSettingsPreference;
- (char)availableFromLockedContext;
- (id)displayStringForSetting:(unsigned long long)a0 operation:(unsigned long long)a1;
- (id)initWithSetting:(unsigned long long)a0 operation:(unsigned long long)a1;
- (id)initWithSetting:(unsigned long long)a0 operation:(unsigned long long)a1 unconfigured:(char)a2;
- (char)isReversible;

@end

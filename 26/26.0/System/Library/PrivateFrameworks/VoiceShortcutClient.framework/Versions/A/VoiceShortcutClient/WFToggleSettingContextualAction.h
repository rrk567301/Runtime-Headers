@interface WFToggleSettingContextualAction : WFContextualAction

@property (readonly, nonatomic) unsigned long long setting;
@property (readonly, nonatomic) unsigned long long operation;

+ (BOOL)supportsSecureCoding;
+ (id)spotlightDomainIdentifierForBundleIdentifier:(id)a0;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)uniqueIdentifier;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)settingBiomeStreamIdentifier;
- (id)_staticDisplayStringForDecoding;
- (id)associatedSettingsPreference;
- (BOOL)availableFromLockedContext;
- (id)displayStringForSetting:(unsigned long long)a0 operation:(unsigned long long)a1;
- (id)initWithSetting:(unsigned long long)a0 operation:(unsigned long long)a1;
- (id)initWithSetting:(unsigned long long)a0 operation:(unsigned long long)a1 unconfigured:(BOOL)a2;
- (BOOL)isReversible;

@end

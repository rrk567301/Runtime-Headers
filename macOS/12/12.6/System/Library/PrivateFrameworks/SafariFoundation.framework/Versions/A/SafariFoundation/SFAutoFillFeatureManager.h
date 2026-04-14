@class NSString;

@interface SFAutoFillFeatureManager : NSObject

@property (nonatomic) BOOL shouldAutoFillPasswordsFromKeychain;
@property (retain, nonatomic) NSString *preferredCredentialProviderForSaving;

+ (id)sharedFeatureManager;
+ (const struct __CFString { } *)autoFillPreferencesDomain;
+ (BOOL)defaultValueForPasswordAndCreditCardAutoFill;
+ (void)autoFillPreferencesDidChange;

- (id)init;
- (BOOL)shouldAutoFillPasswords;
- (void)_refreshCachedAutoFillRestrictionValues;

@end

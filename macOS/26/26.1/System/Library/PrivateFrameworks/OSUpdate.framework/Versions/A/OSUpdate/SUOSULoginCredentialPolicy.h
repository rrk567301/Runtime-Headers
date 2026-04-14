@interface SUOSULoginCredentialPolicy : NSObject

@property (class) unsigned long long lastVendedHarvestMode;

+ (unsigned long long)_policyForHarvestingMode:(unsigned long long)a0;
+ (unsigned long long)currentLoginCredentialPolicy;
+ (void)setExternalizedLocalAuthenticationContextData:(id)a0;

@end

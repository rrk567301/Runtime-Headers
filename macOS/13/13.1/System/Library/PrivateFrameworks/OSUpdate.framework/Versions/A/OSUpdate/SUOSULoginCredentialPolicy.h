@interface SUOSULoginCredentialPolicy : NSObject

+ (unsigned long long)currentLoginCredentialPolicy;
+ (void)setLastCollectedCredentialDate:(id)a0;
+ (void)setExternalizedLocalAuthenticationContextData:(id)a0;

@end

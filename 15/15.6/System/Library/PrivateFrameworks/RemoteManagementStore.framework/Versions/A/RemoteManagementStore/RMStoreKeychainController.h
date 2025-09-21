@interface RMStoreKeychainController : NSObject

+ (void)removeTrustForCertificateRef:(id)a0 configurationKey:(id)a1 fullTrust:(char)a2 scope:(long long)a3 completionHandler:(id /* block */)a4;
+ (void)setTrustForCertificateRef:(id)a0 configurationKey:(id)a1 fullTrust:(char)a2 scope:(long long)a3 completionHandler:(id /* block */)a4;

@end

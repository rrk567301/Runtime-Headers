@interface POKeychainHelper : NSObject

- (int)addTokens:(id)a0 metaData:(id)a1 toKeychainForService:(id)a2 username:(id)a3;
- (int)addTokens:(id)a0 metaData:(id)a1 toKeychainForService:(id)a2 username:(id)a3 system:(BOOL)a4;
- (int)removeTokensFromKeychainWithService:(id)a0 username:(id)a1;
- (BOOL)retrieveCertAndKeyForTokenId:(id)a0 context:(id)a1 forSigning:(BOOL)a2 hash:(id)a3 certificate:(struct __SecCertificate **)a4 privateKey:(struct __SecKey **)a5;
- (BOOL)retrieveIdentityForTokenId:(id)a0 context:(id)a1 forSigning:(BOOL)a2 hash:(id)a3 identity:(struct __SecIdentity **)a4;
- (int)retrieveTokensFromKeychainForService:(id)a0 username:(id)a1 returningTokens:(id *)a2 metaData:(id *)a3;

@end

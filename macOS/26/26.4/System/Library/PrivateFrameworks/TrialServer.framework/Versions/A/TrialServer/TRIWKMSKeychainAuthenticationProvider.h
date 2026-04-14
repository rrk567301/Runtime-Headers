@class NSString;

@interface TRIWKMSKeychainAuthenticationProvider : NSObject <TRIWKMSAuthenticationProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isSupported;
- (id)providerName;
- (id)accessTokenWithError:(id *)a0;
- (id)certificateChainWithPrivateKey:(struct __SecKey **)a0 error:(id *)a1;
- (id)fetchAndUnwrapKeyFromWKMS:(id)a0 certChainString:(id)a1 privateKey:(struct __SecKey { } *)a2 error:(id *)a3;

@end

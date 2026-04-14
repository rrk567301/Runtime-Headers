@class NSString;

@interface POAuthenticationProcess : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate>

@property (nonatomic) BOOL waitForConnectivity;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void)URLSession:(id)a0 taskIsWaitingForConnectivity:(id)a1;
- (void)URLSession:(id)a0 task:(id)a1 willPerformHTTPRedirection:(id)a2 newRequest:(id)a3 completionHandler:(id /* block */)a4;
- (void)URLSession:(id)a0 didReceiveChallenge:(id)a1 completionHandler:(id /* block */)a2;
- (void)performPasswordLoginUsingLoginConfiguration:(id)a0 deviceConfiguration:(id)a1 userConfiguration:(id)a2 jwksStorageProvider:(id)a3 userName:(id)a4 password:(id)a5 completion:(id /* block */)a6;
- (void)performSEPKeyLoginUsingLoginConfiguration:(id)a0 deviceConfiguration:(id)a1 userConfiguration:(id)a2 jwksStorageProvider:(id)a3 userName:(id)a4 signingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a5 certificate:(struct __SecCertificate { } *)a6 completion:(id /* block */)a7;
- (void)performTokenRefreshUsingLoginConfiguration:(id)a0 deviceConfiguration:(id)a1 userConfiguration:(id)a2 refreshToken:(id)a3 signingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a4 completion:(id /* block */)a5;
- (void)performLoginWithContext:(id)a0 loginConfiguration:(id)a1 deviceConfiguration:(id)a2 jwksStorageProvider:(id)a3 loginJWT:(id)a4 completion:(id /* block */)a5;
- (id)createAuthenticationContextUsingLoginConfiguration:(id)a0 deviceConfiguration:(id)a1;
- (id)createPartyVInfoWithContext:(id)a0 apvKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1;
- (id)createNonceRequestWithContext:(id)a0 loginConfiguration:(id)a1;
- (void)performNonceRequestWithContext:(id)a0 loginConfiguration:(id)a1 request:(id)a2 completion:(id /* block */)a3;
- (id)createEmbeddedAssertionWithContext:(id)a0 loginConfiguration:(id)a1 userName:(id)a2 signingKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a3;
- (id)createLoginJWTWithContext:(id)a0 loginConfiguration:(id)a1 userConfiguration:(id)a2 userName:(id)a3 password:(id)a4 embeddedAssertion:(id)a5;
- (id)createLoginRequestWithContext:(id)a0 loginConfiguration:(id)a1 jwt:(id)a2;
- (void)performLoginRequestWithContext:(id)a0 loginConfiguration:(id)a1 request:(id)a2 completion:(id /* block */)a3;
- (void)retrieveSigningKeyWithContext:(id)a0 loginConfiguration:(id)a1 jwksStorageProvider:(id)a2 keyId:(id)a3 completion:(id /* block */)a4;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)findKey:(id)a0 inJWKSData:(id)a1;
- (BOOL)validateIdToken:(id)a0 context:(id)a1 loginConfiguration:(id)a2 key:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a3;
- (BOOL)validatePartyUInfo:(id)a0 context:(id)a1;
- (BOOL)validatePartyVInfo:(id)a0 context:(id)a1 publicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2;
- (id)createTestMessagesForLoginConfiguration:(id)a0 certificate:(struct __SecCertificate { } *)a1;

@end

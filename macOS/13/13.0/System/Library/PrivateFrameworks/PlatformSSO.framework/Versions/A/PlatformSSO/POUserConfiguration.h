@class NSString, LAContext, NSData, POKeychainHelper, NSDate, NSArray;

@interface POUserConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain) NSData *_sepKeyData;
@property (retain) POKeychainHelper *keychainHelper;
@property (retain) NSString *loginUserName;
@property (retain) NSString *uniqueIdentifier;
@property (retain) NSString *ssoExtensionIdentifier;
@property (readonly) NSData *tokens;
@property (readonly) NSDate *tokenExpiration;
@property (readonly) NSDate *tokenReceived;
@property long long state;
@property unsigned long long loginType;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *sepKey;
@property (nonatomic) struct __SecCertificate { } *sepKeyCertificate;
@property (retain) NSData *_credential;
@property (retain) NSData *_contextData;
@property (retain) LAContext *credentialContext;
@property (retain) NSArray *kerberosStatus;
@property (retain) NSData *pendingSSOTokens;

- (id)description;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)dataRepresentation;
- (id)tokens;
- (id)currentRefreshToken;
- (BOOL)setTokens:(id)a0 returningError:(id *)a1;
- (BOOL)encryptPendingSSOTokens:(id)a0 usingPublicKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a1;
- (id)decryptPendingSSOTokensUsingPrivateKey:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a0;
- (id)calculateExpirationForTokens:(id)a0;
- (id)dataRepresentationForDisplay:(BOOL)a0;
- (id)initWithData:(id)a0 contextData:(id)a1;

@end

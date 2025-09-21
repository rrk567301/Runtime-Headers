@class NSString, NSArray, NSData, POUserLoginConfiguration, NSDate, NSNumber;

@interface POUserConfiguration : NSObject <NSSecureCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (copy) NSString *ssoExtensionIdentifier;
@property (retain) NSData *_sepKeyData;
@property (readonly) int version;
@property (retain) POUserLoginConfiguration *userLoginConfiguration;
@property (copy) NSString *uniqueIdentifier;
@property (copy) NSString *__ssoExtensionIdentifier;
@property long long state;
@property (retain, nonatomic) NSDate *lastLoginDate;
@property unsigned long long loginType;
@property struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *sepKey;
@property (copy, nonatomic) NSNumber *signingAlgorithm;
@property (copy, nonatomic) NSNumber *pendingSigningAlgorithm;
@property (nonatomic) struct __SecCertificate { } *sepKeyCertificate;
@property (copy) NSString *smartCardTokenId;
@property (copy) NSData *smartCardHash;
@property (copy) NSData *_credential;
@property (copy) NSData *_setupContext;
@property (copy) NSData *_setupPINContext;
@property (copy) NSData *_setupWrapHash;
@property (copy) NSData *_loginContext;
@property (copy) NSArray *kerberosStatus;
@property (copy) NSData *userDecryptionKeyHash;
@property struct __SecCertificate { } *userDecryptionCertificate;
@property (copy) NSString *userDecryptionContext;
@property (copy) NSString *userUnlockData;
@property (copy) NSData *userUnlockHash;
@property struct __SecCertificate { } *userUnlockCertificate;
@property (readonly) NSString *tokenId;
@property (readonly) NSString *unlockTokenId;
@property (copy, nonatomic) NSDate *lastCheckDate;
@property (readonly, getter=isNewUser) BOOL newUser;

- (void)updateVersion;
- (id)dataRepresentation;
- (id)initWithData:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)init;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)newUser;
- (struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)sepKeyWithContext:(id)a0;
- (id)dataRepresentationForDisplay:(BOOL)a0;

@end

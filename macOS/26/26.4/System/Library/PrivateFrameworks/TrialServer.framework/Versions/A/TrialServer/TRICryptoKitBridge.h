@class NSString;

@interface TRICryptoKitBridge : NSObject

@property (class, nonatomic, readonly) NSString *errorDomain;
@property (class, nonatomic, readonly) NSString *errorReasonKey;
@property (class, nonatomic, readonly) NSString *errorExpectedLengthKey;
@property (class, nonatomic, readonly) NSString *errorActualLengthKey;
@property (class, nonatomic, readonly) NSString *errorExpectedMinLengthKey;

+ (id)decryptAESGCMFromBase64WithCiphertextBase64:(id)a0 keyBase64:(id)a1 error:(id *)a2;
+ (id)decryptAESGCMWithCiphertext:(id)a0 keyBase64:(id)a1 error:(id *)a2;
+ (id)decryptAESGCMWithRawKey:(id)a0 keyData:(id)a1 aad:(id)a2 error:(id *)a3;
+ (id)encryptAESGCMToBase64WithPlaintext:(id)a0 keyBase64:(id)a1 error:(id *)a2;
+ (id)encryptAESGCMWithPlaintext:(id)a0 keyBase64:(id)a1 error:(id *)a2;
+ (id)fetchAndUnwrapKeyFromWKMSWithAuthData:(id)a0 certChain:(id)a1 privateKeyRef:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a2;
+ (id)fetchAndUnwrapKeyFromWKMSWithOIDC:(id)a0 accessToken:(id)a1 certChain:(id)a2 privateKeyRef:(struct __SecKey { struct __CFRuntimeBase { unsigned long long x0; _Atomic unsigned long long x1; } x0; struct __SecKeyDescriptor *x1; void *x2; } *)a3;
+ (id)unwrapKeyUsingHPKEWithWrappedKeyBase64:(id)a0 recipientPrivateKeyBase64:(id)a1 error:(id *)a2;

- (void).cxx_destruct;
- (id)init;

@end

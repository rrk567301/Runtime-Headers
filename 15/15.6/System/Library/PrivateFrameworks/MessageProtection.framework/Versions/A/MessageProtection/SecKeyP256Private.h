@class NSData, SecKeyP256Public, NSString;

@interface SecKeyP256Private : NSObject <P256PrivateKeyProtocol>

@property (readonly, nonatomic) id privateKey;
@property (readonly, nonatomic) NSData *privateKeyBlob;
@property (retain, nonatomic) SecKeyP256Public *publicKey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)generate;
+ (id)compactPrivateKeyWithAccessControl:(id)a0;
+ (id)defaultProtectionClassForPlatform;
+ (id)generateWithAccessControl:(id)a0;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 error:(id *)a1;
- (id)signData:(id)a0 error:(id *)a1;
- (id)keychainData;
- (id)authenticateAndRetryKeyAgreement:(id)a0 error:(id *)a1;
- (id)getPrivateKeyRefWithError:(id *)a0;
- (id)keyAgreement:(id)a0 error:(id *)a1;
- (id)keyAgreement:(id)a0 error:(id *)a1 isRetry:(char)a2;

@end

@class NSString;

@interface DICreateParams : DIBaseParams

@property (nonatomic) unsigned long long numBlocks;
@property (nonatomic) unsigned long long encryptionMethod;
@property (copy, nonatomic) NSString *systemKeychainAccount;
@property (nonatomic) char passphrase;
@property (copy, nonatomic) NSString *publicKey;
@property (copy, nonatomic) NSString *certificate;

+ (char)supportsSecureCoding;
+ (char)checkExistingFileWithURL:(id)a0 isDirectory:(char)a1 error:(id *)a2;
+ (char)eraseIfExistingWithURL:(id)a0 error:(id *)a1;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 numBlocks:(unsigned long long)a1 error:(id *)a2;
- (char)createWithError:(id *)a0;
- (char)createDiskImageParamsWithError:(id *)a0;
- (void)createDiskImageParamsXPC;
- (char)createEncryptionWithXPCHandler:(id)a0 error:(id *)a1;
- (char)getCertificateWithEncryptionCreator:(id)a0 outCertificate:(id *)a1 error:(id *)a2;
- (char)onErrorCleanup;
- (char)resizeWithNumBlocks:(unsigned long long)a0 error:(id *)a1;
- (char)setPassphrase:(const char *)a0 error:(id *)a1;
- (char)supportsPstack;
- (char)tryCreateUsingKeychainCertificateWithError:(id *)a0;

@end

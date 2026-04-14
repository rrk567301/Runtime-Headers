@class NSString;

@interface DICreateParams : DIBaseParams

@property (nonatomic) unsigned long long numBlocks;
@property (nonatomic) unsigned long long encryptionMethod;
@property (copy, nonatomic) NSString *systemKeychainAccount;

+ (BOOL)supportsSecureCoding;

- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (BOOL)createWithError:(id *)a0;
- (id)initWithURL:(id)a0 numBlocks:(unsigned long long)a1 error:(id *)a2;
- (BOOL)createEncryptionWithXPCHandler:(id)a0 error:(id *)a1;
- (void)createDiskImageParamsXPC;
- (BOOL)createDiskImageParamsWithError:(id *)a0;
- (BOOL)setPassphrase:(const char *)a0 error:(id *)a1;
- (BOOL)resizeWithNumBlocks:(unsigned long long)a0 error:(id *)a1;
- (BOOL)checkExistingFileWithIsDirectory:(BOOL)a0 error:(id *)a1;
- (BOOL)eraseIfExistingWithError:(id *)a0;
- (BOOL)onErrorCleanup;

@end

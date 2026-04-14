@class DIClient2Controller_XPCHandler, DITemporaryPassphrase, NSString;

@interface DICreateParams : DIBaseParams

@property (retain, nonatomic) DIClient2Controller_XPCHandler *folderCopyXPCHandler;
@property (nonatomic) unsigned long long numBlocks;
@property (readonly, nonatomic) DITemporaryPassphrase *temporaryPassphrase;
@property (nonatomic) struct AuthorizationOpaqueRef { } *createFromAuthRef;
@property (nonatomic) unsigned long long encryptionMethod;
@property (copy, nonatomic) NSString *systemKeychainAccount;
@property (nonatomic) BOOL passphrase;
@property (copy, nonatomic) NSString *publicKey;
@property (copy, nonatomic) NSString *certificate;

+ (BOOL)supportsSecureCoding;
+ (BOOL)checkExistingFileWithURL:(id)a0 isDirectory:(BOOL)a1 error:(id *)a2;
+ (BOOL)eraseIfExistingWithURL:(id)a0 error:(id *)a1;
+ (BOOL)toHeaderEncryptionMode:(unsigned long long)a0 headerEncMode:(void *)a1 error:(id *)a2;

- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (id)initWithURL:(id)a0 numBlocks:(unsigned long long)a1 error:(id *)a2;
- (BOOL)setPassphrase:(const char *)a0 encryptionMethod:(unsigned long long)a1 error:(id *)a2;
- (id)createWithError:(id *)a0;
- (BOOL)createDiskImageParamsWithError:(id *)a0;
- (void)createDiskImageParamsXPC;
- (BOOL)createEncryptionWithXPCHandler:(id)a0 error:(id *)a1;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct { struct DiskImage *x0; } x0; })createInternalWithError:(id *)a0;
- (BOOL)onErrorCleanup;
- (BOOL)resizeWithDiskImage:(void *)a0 numberOfBlocks:(unsigned long long)a1 error:(id *)a2;
- (BOOL)resizeWithNumBlocks:(unsigned long long)a0 error:(id *)a1;
- (BOOL)rootCopierWithDstFolderURL:(id)a0 srcFolderURL:(id)a1 progress:(id)a2 error:(id *)a3;
- (BOOL)supportsPstack;
- (BOOL)traverseSrcFolderAsRootWithURL:(id)a0 parallelMode:(BOOL)a1 progress:(id)a2 folderSize:(unsigned long long *)a3 numFiles:(unsigned long long *)a4 error:(id *)a5;
- (BOOL)validateBlockSizeSupport;

@end

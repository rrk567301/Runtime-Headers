@class NSUUID, DIURL, DiskImageParamsXPC, NSError, DIShadowChain;

@interface DIBaseParams : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) char supportsSecureCoding;

@property (readonly, nonatomic) struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; } backend;
@property (readonly, nonatomic) void *cryptoHeader;
@property (retain, nonatomic) DiskImageParamsXPC *diskImageParamsXPC;
@property (copy, nonatomic) DIURL *inputURL;
@property (readonly, nonatomic) DIShadowChain *shadowChain;
@property (readonly, nonatomic) char RAMdisk;
@property (nonatomic) unsigned long long rawBlockSize;
@property (readonly, nonatomic) char hasUnlockedBackend;
@property (readonly, copy, nonatomic) NSUUID *encryptionUUID;
@property (readonly, copy, nonatomic) NSUUID *instanceID;
@property (readonly, nonatomic) char isPstack;
@property (copy, nonatomic) NSError *deserializationError;
@property (readonly, nonatomic) char requiresRootDaemon;
@property (nonatomic) unsigned long long readPassphraseFlags;

- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)invalidate;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (char)checkBeforeSetWithIsPassphrase:(char)a0 error:(id *)a1;
- (char)openExistingImageWithFlags:(int)a0 error:(id *)a1;
- (char)prepareImageWithXpcHandler:(id)a0 fileMode:(long long)a1 error:(id *)a2;
- (char)setPassphrase:(const char *)a0 error:(id *)a1;
- (char)supportsPstack;
- (char)tryResolvePstackChain:(id *)a0;
- (char)tryUnlockUsingKeychainCertificateWithError:(id *)a0;
- (char)validateDeserializationWithError:(id *)a0;

@end

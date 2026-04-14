@class NSUUID, DiskImageParamsXPC, NSError, NSData, DIShadowChain, DIURL, NSMutableData, NSNumber;

@interface DIBaseParams : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (readonly, nonatomic) struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; } backend;
@property (readonly, nonatomic) void *cryptoHeader;
@property (retain, nonatomic) DiskImageParamsXPC *diskImageParamsXPC;
@property (copy, nonatomic) DIURL *inputURL;
@property (readonly, nonatomic) DIShadowChain *shadowChain;
@property (readonly, nonatomic) BOOL RAMdisk;
@property (nonatomic) unsigned int blockSize;
@property (readonly, nonatomic) NSNumber *overrideBlockSize;
@property (readonly, nonatomic) BOOL hasUnlockedBackend;
@property (readonly, copy, nonatomic) NSUUID *encryptionUUID;
@property (readonly, copy, nonatomic) NSUUID *instanceID;
@property (readonly, nonatomic) BOOL isPstack;
@property (copy, nonatomic) NSError *deserializationError;
@property (readonly, nonatomic) NSMutableData *mutableSymmetricKey;
@property (readonly, nonatomic) BOOL requiresRootDaemon;
@property (nonatomic) unsigned long long readPassphraseFlags;
@property (copy, nonatomic) NSData *symmetricKey;

- (void)invalidate;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)dealloc;
- (BOOL)openExistingImageWithError:(id *)a0;
- (BOOL)openExistingImageWithFlags:(int)a0 error:(id *)a1;
- (BOOL)prepareImageWithXpcHandler:(id)a0 fileMode:(long long)a1 error:(id *)a2;
- (BOOL)replaceDiskImageWithUnlockedBackendXPC:(id)a0 error:(id *)a1;
- (BOOL)supportsPstack;
- (BOOL)tryResolvePstackChain:(id *)a0;
- (BOOL)unlockWithPassphrase:(const char *)a0 error:(id *)a1;
- (BOOL)validateDeserializationWithError:(id *)a0;

@end

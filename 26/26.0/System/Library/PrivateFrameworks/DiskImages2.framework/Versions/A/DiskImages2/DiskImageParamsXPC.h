@class BackendXPC, NSUUID, NSURL, DIShadowChain;

@interface DiskImageParamsXPC : NSObject <NSSecureCoding, NSCoding>

@property (class, readonly) BOOL supportsSecureCoding;

@property (retain, nonatomic) BackendXPC *backendXPC;
@property (retain, nonatomic) DIShadowChain *shadowChain;
@property (retain, nonatomic) BackendXPC *cacheBackendXPC;
@property (readonly, nonatomic) BOOL isWritableFormat;
@property (readonly, nonatomic) BOOL isSparseFormat;
@property (readonly, nonatomic) unsigned long long numBlocks;
@property (nonatomic) unsigned long long blockSize;
@property (copy, nonatomic) NSURL *cacheURL;
@property (readonly, nonatomic) struct vector<std::shared_ptr<LockableResource>, std::allocator<std::shared_ptr<LockableResource>>> { void *x0; void *x1; void *x2; } lockableResources;
@property (copy, nonatomic) NSUUID *instanceID;

+ (id)newWithURL:(id)a0 fileOpenFlags:(int)a1 error:(id *)a2;
+ (BOOL)getAEAKeyFromSAKSWithMetadata:(id)a0 key:(char *)a1 error:(id *)a2;
+ (BOOL)getAEAKeyWithHelper:(void *)a0 keyBuffer:(char *)a1 bufferSize:(unsigned long long)a2 error:(id *)a3;
+ (id)newAEABackendThrowsWithBackendXPC:(id)a0 error:(id *)a1;
+ (id)newWithUnlockedBackendXPC:(id)a0 blockSize:(unsigned long long)a1 error:(id *)a2;
+ (id)newWithUnlockedBackendXPC:(id)a0 error:(id *)a1;
+ (BOOL)validateSupportedFormatWithBackendXPC:(id)a0 error:(id *)a1;

- (void)encodeWithCoder:(id)a0;
- (id)description;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (BOOL)allowOnDiskCacheWithSinkDiskImage:(const void *)a0;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct DiskImage *x0; })createDiskImageWithCache:(BOOL)a0 shadowValidation:(BOOL)a1;
- (struct shared_ptr<DiskImage> { struct DiskImage *x0; struct __shared_weak_count *x1; })createShadowDiskImageWithBackend:(struct shared_ptr<Backend> { struct Backend *x0; struct __shared_weak_count *x1; })a0 numBlocks:(unsigned long long)a1 sinkDiskImage:(const void *)a2 cache_only:(BOOL)a3 stack_size:(unsigned long long)a4;
- (struct unique_ptr<DiskImage, std::default_delete<DiskImage>> { struct DiskImage *x0; })createSinkDiskImage;
- (struct unique_ptr<const info::DiskImageInfo, std::default_delete<const info::DiskImageInfo>> { struct DiskImageInfo *x0; })getImageInfoWithExtra:(BOOL)a0 error:(id *)a1;
- (id)initWithBackendXPC:(id)a0;
- (id)initWithBackendXPC:(id)a0 blockSize:(unsigned long long)a1;
- (BOOL)lockBackendsWithError:(id *)a0;
- (BOOL)lockBackendsWithWritableOnly:(BOOL)a0 error:(id *)a1;
- (BOOL)lockWritableBackendsWithError:(id *)a0;
- (BOOL)mountedOnAPFS;
- (BOOL)setBlockSize:(unsigned long long)a0 error:(id *)a1;
- (int)setSizeWithDiskImage:(void *)a0 newSize:(unsigned long long)a1;

@end

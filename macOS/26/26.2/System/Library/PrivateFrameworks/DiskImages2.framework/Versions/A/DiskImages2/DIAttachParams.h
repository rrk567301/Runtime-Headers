@class DIStatFS, NSString, NSURL;

@interface DIAttachParams : DIBaseParams

@property (nonatomic) unsigned long long commandSize;
@property (nonatomic) unsigned long long regEntryID;
@property (nonatomic) BOOL handleRefCount;
@property (retain, nonatomic) DIStatFS *inputStatFS;
@property (copy, nonatomic) NSString *inputMountedFrom;
@property (nonatomic) BOOL emulateExternalDisk;
@property (nonatomic) BOOL suppressSsdFlags;
@property (nonatomic) BOOL singleInstanceDaemon;
@property BOOL autoMount;
@property (nonatomic) long long fileMode;
@property (nonatomic) unsigned int blockSize;
@property (nonatomic) BOOL onDiskCache;
@property (copy, nonatomic) NSURL *customCacheURL;
@property (nonatomic) BOOL uniqueDevice;
@property (nonatomic) BOOL shouldValidateShadows;

+ (BOOL)supportsSecureCoding;
+ (BOOL)copyWithURL:(id)a0 outURLStr:(char *)a1 maxLen:(unsigned long long)a2 error:(id *)a3;

- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)encodeWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)setupDefaults;
- (id)initWithExistingParams:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 shadowURLs:(id)a1 error:(id *)a2;
- (BOOL)isDeviceHighThroughputWithRegistryEntryID:(unsigned long long)a0;
- (BOOL)isDeviceSolidStateWithRegistryEntryID:(unsigned long long)a0;
- (BOOL)isDeviceWithProperty:(const char *)a0 registryEntryID:(unsigned long long)a1 predicate:(struct function<bool (iokit_utils::di_io_obj_t)> { struct __value_func<bool (iokit_utils::di_io_obj_t)> { union type { unsigned char x0[24]; } x0; void *x1; } x0; })a2;
- (id)newAttachWithError:(id *)a0;
- (BOOL)reOpenIfWritableWithError:(id *)a0;
- (BOOL)setPassphrase:(const char *)a0 error:(id *)a1;
- (id)toDI1ParamsWithError:(id *)a0;
- (BOOL)updateStatFSWithError:(id *)a0;

@end

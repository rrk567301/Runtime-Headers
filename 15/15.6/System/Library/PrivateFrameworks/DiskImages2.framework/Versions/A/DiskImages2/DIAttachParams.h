@class DIStatFS, NSString, NSURL;

@interface DIAttachParams : DIBaseParams

@property (nonatomic) unsigned long long commandSize;
@property (nonatomic) unsigned long long regEntryID;
@property (nonatomic) char handleRefCount;
@property (retain, nonatomic) DIStatFS *inputStatFS;
@property (copy, nonatomic) NSString *inputMountedFrom;
@property (nonatomic) char emulateExternalDisk;
@property char autoMount;
@property (nonatomic) long long fileMode;
@property (nonatomic) unsigned long long rawBlockSize;
@property (nonatomic) char onDiskCache;
@property (copy, nonatomic) NSURL *customCacheURL;
@property (nonatomic) char uniqueDevice;
@property (nonatomic) char shouldValidateShadows;

+ (char)supportsSecureCoding;
+ (char)copyWithURL:(id)a0 outURLStr:(char *)a1 maxLen:(unsigned long long)a2 error:(id *)a3;

- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)initWithURL:(id)a0 error:(id *)a1;
- (void)setupDefaults;
- (id)initWithExistingParams:(id)a0 error:(id *)a1;
- (id)initWithURL:(id)a0 shadowURLs:(id)a1 error:(id *)a2;
- (id)newAttachWithError:(id *)a0;
- (char)reOpenIfWritableWithError:(id *)a0;
- (id)toDI1ParamsWithError:(id *)a0;
- (char)updateStatFSWithError:(id *)a0;

@end

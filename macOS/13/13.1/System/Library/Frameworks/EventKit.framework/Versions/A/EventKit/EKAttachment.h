@class NSURL, NSString, NSNumber;

@interface EKAttachment : EKObject

@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *localRelativePath;
@property (readonly, nonatomic) NSURL *localURL;
@property (readonly, nonatomic) NSURL *localURLForArchivedData;
@property (nonatomic) BOOL isBinary;
@property (nonatomic) BOOL autoArchived;
@property (retain, nonatomic) NSString *externalModificationTag;
@property (retain, nonatomic) NSString *externalID;
@property (readonly, nonatomic) NSString *fileName;
@property (retain, nonatomic) NSString *fileNameRaw;
@property (retain, nonatomic) NSString *fileFormat;
@property (retain, nonatomic) NSNumber *fileSize;
@property (readonly, nonatomic) NSString *UUID;
@property (retain, nonatomic) NSURL *URLForPendingFileCopy;
@property (readonly, retain) NSString *contentType;
@property (readonly, nonatomic) NSURL *urlOnDisk;

+ (id)knownSingleValueKeysForComparison;
+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;
+ (BOOL)canonicalizedEqualityTestValue1:(id)a0 value2:(id)a1 key:(id)a2 object1:(id)a3 object2:(id)a4;
+ (id)createTempDestinationURLWithExtension:(id)a0;
+ (id)_copyFileAtURLToTemporaryDirectory:(id)a0;

- (id)description;
- (id)init;
- (unsigned int)flags;
- (id)initWithUUID:(id)a0;
- (void)setFlags:(unsigned int)a0;
- (void)setUUID:(id)a0;
- (BOOL)save:(id *)a0;
- (id)URLString;
- (void)setURLString:(id)a0;
- (void)setLocalRelativePath:(id)a0;
- (id)securityScopedLocalURLWrapper;
- (id)securityScopedLocalURLForArchivedDataWrapper;
- (id)XPropertiesData;
- (void)setXPropertiesData:(id)a0;
- (id)securityScopedURLWrapperForPendingFileCopy;
- (void)setSecurityScopedURLWrapperForPendingFileCopy:(id)a0;
- (BOOL)shouldSetQuarantineAttributesOnCopiedFile;
- (void)setShouldSetQuarantineAttributesOnCopiedFile:(BOOL)a0;
- (BOOL)validateWithOwner:(id)a0 error:(id *)a1;
- (BOOL)_flagValueWithMask:(unsigned int)a0;
- (void)_setFlagValue:(BOOL)a0 withMask:(unsigned int)a1;
- (id)initWithFilepath:(id)a0;
- (id)duplicateWithNewIdentity;
- (void)assignNewIdentity;
- (void)assignIdentity:(id)a0;
- (BOOL)copyLocalFileToNewSource;
- (void)invalidateLocalFilePropertiesForNewCopiedFile;
- (void)markCopiedFileAsDownloaded;
- (long long)compareFileNames:(id)a0;

@end

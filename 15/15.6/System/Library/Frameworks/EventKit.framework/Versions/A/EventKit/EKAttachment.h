@class NSURL, NSString, NSNumber;

@interface EKAttachment : EKObject

@property (retain, nonatomic) NSURL *URL;
@property (readonly, nonatomic) NSString *localRelativePath;
@property (readonly, nonatomic) NSURL *localURL;
@property (readonly, nonatomic) NSURL *localURLForArchivedData;
@property (nonatomic) char isBinary;
@property (nonatomic) char autoArchived;
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

+ (id)_compressItemAtURLToTemporaryDirectory:(id)a0;
+ (id)_prepareFileAtURLInTemporaryDirectory:(id)a0;
+ (char)canonicalizedEqualityTestValue1:(id)a0 value2:(id)a1 key:(id)a2 object1:(id)a3 object2:(id)a4;
+ (id)createTempDestinationURLWithExtension:(id)a0;
+ (Class)frozenClass;
+ (id)knownIdentityKeysForComparison;
+ (id)knownRelationshipWeakKeys;
+ (id)knownSingleValueKeysForComparison;

- (id)description;
- (id)init;
- (id)initWithUUID:(id)a0;
- (unsigned int)flags;
- (void)setFlags:(unsigned int)a0;
- (void)setUUID:(id)a0;
- (char)save:(id *)a0;
- (id)URLString;
- (id)XPropertiesData;
- (void)assignIdentity:(id)a0;
- (id)URLWrapperForPendingFileCopy;
- (char)_flagValueWithMask:(unsigned int)a0;
- (void)_setFlagValue:(char)a0 withMask:(unsigned int)a1;
- (void)assignNewIdentity;
- (long long)compareFileNames:(id)a0;
- (char)copyLocalFileToNewSource;
- (id)duplicateWithNewIdentity;
- (id)initWithFilepath:(id)a0;
- (void)invalidateLocalFilePropertiesForNewCopiedFile;
- (void)markCopiedFileAsDownloaded;
- (id)securityScopedLocalURLForArchivedDataWrapper;
- (id)securityScopedLocalURLWrapper;
- (void)setLocalRelativePath:(id)a0;
- (void)setShouldSetQuarantineAttributesOnCopiedFile:(char)a0;
- (void)setURLString:(id)a0;
- (void)setURLWrapperForPendingFileCopy:(id)a0;
- (void)setXPropertiesData:(id)a0;
- (char)shouldSetQuarantineAttributesOnCopiedFile;
- (char)validateWithOwner:(id)a0 error:(id *)a1;

@end

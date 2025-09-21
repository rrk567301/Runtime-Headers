@class NSString, WFItemProviderRequestMetadata, WFFileType, NSDate, NSURL, NSData;

@interface WFFileRepresentation : WFRepresentation

@property (retain, nonatomic) NSString *filename;
@property (retain, nonatomic) WFItemProviderRequestMetadata *metadata;
@property (readonly, nonatomic) long long initialRepresentationType;
@property (readonly, nonatomic) NSString *wfName;
@property (readonly, nonatomic) WFFileType *wfType;
@property (readonly, nonatomic) NSDate *creationDate;
@property (readonly, nonatomic) NSDate *modificationDate;
@property (readonly, nonatomic) NSURL *originalURL;
@property (readonly, nonatomic) long long fileSize;
@property (readonly, nonatomic) NSData *data;
@property (readonly, nonatomic) NSURL *fileURL;
@property (readonly, nonatomic) long long representationType;
@property (readonly, nonatomic) char deletesFileOnDeallocation;
@property (readonly, nonatomic) char securityScopedResource;
@property (readonly, nonatomic) char isTemporaryFile;

+ (char)supportsSecureCoding;
+ (id)proposedFilenameForFile:(id)a0 ofType:(id)a1;
+ (void)addDisallowedDirectory:(id)a0;
+ (char)coordinateFileOperation:(unsigned long long)a0 shouldCoordinate:(char)a1 fileURL:(id)a2 destinationURL:(id)a3 accessor:(id /* block */)a4;
+ (id)disallowedDirectoryURLs;
+ (char)fileIsInDisallowedDirectory:(id)a0;
+ (id)fileWithData:(id)a0 ofType:(id)a1 proposedFilename:(id)a2;
+ (id)fileWithData:(id)a0 ofType:(id)a1 proposedFilename:(id)a2 originalURL:(id)a3;
+ (id)fileWithURL:(id)a0 options:(long long)a1;
+ (id)fileWithURL:(id)a0 options:(long long)a1 ofType:(id)a2;
+ (id)fileWithURL:(id)a0 options:(long long)a1 ofType:(id)a2 proposedFilename:(id)a3;
+ (id)fileWithURL:(id)a0 options:(long long)a1 ofType:(id)a2 proposedFilename:(id)a3 originalURL:(id)a4;
+ (char)isAllowedToRepresentFileURL:(id)a0;
+ (id)proposedFilenameForFile:(id)a0 ofType:(id)a1 unsanitizedName:(id *)a2;
+ (char)sandboxAllowsRepresentingFileURL:(id)a0;
+ (id)sanitizedFilename:(id)a0 withExtension:(id)a1;
+ (id)sanitizedFilename:(id)a0 withExtension:(id)a1 unsanitizedName:(id *)a2;
+ (id)typeOfData:(id)a0;
+ (id)typeOfFile:(id)a0;

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)inputStream;
- (char)isEncodable;
- (char)atomicReplaceAcrossVolumesIfNeededWithURLForReplacing:(id)a0 sourceURL:(id)a1 error:(id *)a2;
- (id)copyWithName:(id)a0 addingExtensionIfNecessary:(char)a1 zone:(struct _NSZone { } *)a2;
- (id)copyWithName:(id)a0 zone:(struct _NSZone { } *)a1;
- (id)initWithData:(id)a0 ofType:(id)a1 proposedFilename:(id)a2 originalURL:(id)a3;
- (id)initWithFileURL:(id)a0 options:(long long)a1 ofType:(id)a2 proposedFilename:(id)a3 originalURL:(id)a4;
- (id)mappedData;
- (id)mappedDataWithError:(id *)a0;
- (id)typeForUserEnteredName:(id)a0 addingExtensionIfNecessary:(char)a1;
- (id)updatedFilenameForUserEnteredName:(id)a0 addingExtensionIfNecessary:(char)a1;
- (char)writeToFileURL:(id)a0 copy:(char)a1 overwrite:(char)a2 error:(id *)a3;
- (char)writeToFileURL:(id)a0 overwriting:(char)a1 error:(id *)a2;
- (char)writeToTemporaryFileURL:(id)a0 error:(id *)a1;

@end

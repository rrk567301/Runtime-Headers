@class NSMutableDictionary, NSDictionary, NSURL, NSError, PAMediaConversionServiceResourceURLCollectionAccessProvider;

@interface PAMediaConversionServiceResourceURLCollection : NSObject

@property (readonly) char isBlastDoorAccessRequired;
@property (readonly) NSDictionary *blastDoorMainSourceProperties;
@property (readonly) NSDictionary *blastDoorVideoComplementProperties;
@property (readonly) NSURL *blastDoorSourceURL;
@property (readonly) NSError *blastDoorError;
@property (retain) NSMutableDictionary *urlReferencesByRole;
@property (retain) PAMediaConversionServiceResourceURLCollectionAccessProvider *accessProviderDelegate;
@property (readonly) unsigned long long urlCount;
@property (readonly) char allURLsAreReadable;

+ (id)collectionWithMainResourceURL:(id)a0;
+ (char)getSignatureString:(id *)a0 filenameSummary:(id *)a1 forDictionaryRepresentation:(id)a2;
+ (id)collectionForBookmarkDataDictionaryRepresentation:(id)a0 accessProvider:(id)a1 error:(id *)a2;
+ (id)filenameSummaryStringForDictionaryRepresentation:(id)a0;

- (id)description;
- (unsigned long long)hash;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)resourceURLForRole:(id)a0;
- (void)setResourceURL:(id)a0 forRole:(id)a1;
- (void)setResourceURL:(id)a0 forRole:(id)a1 deleteOnDeallocation:(char)a2;
- (void)enumerateResourceURLReferences:(id /* block */)a0;
- (id)fileSizeSummary;
- (id)bookmarkDataDictionaryRepresentationWithError:(id *)a0;
- (char)containsAllRoles:(id)a0;
- (char)containsAnyRole:(id)a0;
- (char)copyURL:(id)a0 forRole:(id)a1 toDirectory:(id)a2 error:(id *)a3;
- (char)ensureFilesExistWithError:(id *)a0;
- (void)enumerateResourceURLs:(id /* block */)a0;
- (id)filenameExtensionAndPathHashForRole:(id)a0;
- (id)logMessageSummary;
- (id)logMessageSummaryWithFullPath:(char)a0;
- (char)removeExistingEmptyFilesWithError:(id *)a0;
- (void)setShouldDeleteURLOnDeallocation:(char)a0 forRole:(id)a1;
- (id)typeIdentifierForResourceURLWithRole:(id)a0;
- (id)urlForDebugDumpWithDirectoryName:(id)a0 inExistingParentDirectory:(id)a1 error:(id *)a2;

@end

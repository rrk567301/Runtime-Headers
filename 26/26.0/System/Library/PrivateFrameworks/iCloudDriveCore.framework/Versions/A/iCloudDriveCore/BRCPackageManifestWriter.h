@class NSOutputStream, NSString, NSURL, NSError, BRCClientZone, PBMessageStreamWriter;

@interface BRCPackageManifestWriter : NSObject {
    BRCClientZone *_clientZone;
    NSString *_stageID;
    PBMessageStreamWriter *_writer;
    NSOutputStream *_stream;
}

@property (readonly, nonatomic) NSError *error;
@property (readonly, nonatomic) NSURL *url;

- (BOOL)addItem:(id)a0;
- (BOOL)done;
- (void).cxx_destruct;
- (void)_applyDirectoryMetadataWithManifestItem:(id)a0 packageRootFD:(int)a1;
- (void)_applyFileMetadataWithManifestItem:(id)a0 isDocumentModifiedByOtherUser:(BOOL)a1 packageRootFD:(int)a2;
- (void)_applyQuarantineMetadataWithManifestItem:(id)a0 isDocumentModifiedByOtherUser:(BOOL)a1 fd:(int)a2;
- (BOOL)_cloneExcludedFromSyncItemsFromExistingContentsURL:(id)a0 toStageItemURL:(id)a1 error:(id *)a2;
- (unsigned short)_computedFileModeForPackageItem:(id)a0;
- (void)_handleStreamError;
- (BOOL)_packageItem:(id)a0 matchesMode:(unsigned short)a1;
- (BOOL)_stageExistingPackageItem:(id)a0 withLiveFd:(int)a1 stageFd:(int)a2 isDocumentModifiedByOtherUser:(BOOL)a3;
- (BOOL)addLocalItem:(id)a0;
- (id)initWithZone:(id)a0 stageID:(id)a1 url:(id)a2;
- (BOOL)stagePackageWithReader:(id)a0 package:(id)a1 xattrsPackage:(id)a2 stageItemURL:(id)a3 existingContentsURL:(id)a4 recordName:(id)a5 isDocumentModifiedByOtherUser:(BOOL)a6;

@end

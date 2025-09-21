@class CRContext;

@interface NotesShared.ICSystemPaperDocument : NSObject {
    void /* unknown type, empty encoding */ attachment;
}

@property (nonatomic, readonly) CRContext *coherenceContext;

+ (id)assetsDirectoryAt:(id)a0;
+ (void)closeContextForNote:(id)a0;
+ (id)databaseDirectoryAt:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (void)removeStrokesFromStyleInventory;
- (id)archiveBundleForSyncAndReturnError:(id *)a0;
- (char)copyAndArchivePaperBundleTo:(id)a0 error:(id *)a1;
- (id)initWithPaperAttachment:(id)a0;
- (char)restorePaperBundleFrom:(id)a0 error:(id *)a1;
- (id)toFallbackPDFData;
- (void)updateGraphDestinationsUsingInlineAttachmentIdentifierMap:(id)a0 completion:(id /* block */)a1;
- (char)writeNewVersionFromSyncArchive:(id)a0 error:(id *)a1;

@end

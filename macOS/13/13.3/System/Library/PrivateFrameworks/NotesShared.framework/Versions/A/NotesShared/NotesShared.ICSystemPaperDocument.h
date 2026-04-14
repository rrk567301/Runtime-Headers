@interface NotesShared.ICSystemPaperDocument : NSObject {
    void /* unknown type, empty encoding */ attachment;
}

+ (id)assetsDirectoryAt:(id)a0;
+ (void)closeContextForNote:(id)a0;
+ (id)databaseDirectoryAt:(id)a0;

- (id)init;
- (void).cxx_destruct;
- (id)archiveBundleForSyncAndReturnError:(id *)a0;
- (BOOL)copyAndArchivePaperBundleTo:(id)a0 error:(id *)a1;
- (id)initWithPaperAttachment:(id)a0;
- (BOOL)restorePaperBundleFrom:(id)a0 error:(id *)a1;
- (BOOL)writeNewVersionFromSyncArchive:(id)a0 error:(id *)a1;

@end

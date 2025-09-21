@class NSURL, ICAccount;

@interface ICAttachmentPaperBundleModel : ICAttachmentModel

@property (readonly, nonatomic) ICAccount *account;
@property (readonly, nonatomic) NSURL *paperCoherenceContextURL;
@property (readonly, nonatomic) NSURL *paperBundleURL;
@property (readonly, nonatomic) NSURL *paperBundleDatabaseSubdirectoryURL;
@property (readonly, nonatomic) NSURL *paperBundleAssetsSubdirectoryURL;
@property (nonatomic) char paperHasEnhancedCanvas;
@property (nonatomic) char paperHasNewInks2022;
@property (nonatomic) char paperHasNewInks2023;
@property (nonatomic) char paperHasNewInksSpring2024;
@property (nonatomic) char paperHasMath;

+ (long long)baseNotesVersion;
+ (char)canDisplayPaperAtURL:(id)a0;
+ (id)generateFallbackPDFDataForAttachment:(id)a0;
+ (id)paperBundleURLForAttachmentIdentifier:(id)a0 inAccount:(id)a1;

- (void).cxx_destruct;
- (void)removeStrokesFromStyleInventory;
- (id)archivePaperBundleToDiskWithError:(id *)a0;
- (char)hasPreviews;
- (char)providesStandaloneTitleForNote;
- (char)restorePaperBundleFromArchiveURL:(id)a0 error:(id *)a1;
- (char)showThumbnailInNoteList;
- (id)standaloneTitleForNote;
- (void)updateMinimumSupportedVersionIfNeededWithCompletionHandler:(id /* block */)a0;

@end

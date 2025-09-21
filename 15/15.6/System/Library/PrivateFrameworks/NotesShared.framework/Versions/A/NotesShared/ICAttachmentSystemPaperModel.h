@interface ICAttachmentSystemPaperModel : ICAttachmentPaperBundleModel

@property (nonatomic) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } paperContentBoundsHint;
@property (nonatomic) char hasDeepLink;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (id)account;
- (void)addMergeableDataToCloudKitRecord:(id)a0 approach:(long long)a1 mergeableFieldState:(id)a2;
- (id)additionalIndexableTextContentInNote;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (char)canConvertToHTMLForSharing;
- (id)correctedHardlinkURLFileExtensionForExtension:(id)a0;
- (void)fixupMetadataAndMinimumSupportedNotesVersion;
- (id)generateHardLinkURLIfNecessaryForURL:(id)a0;
- (char)isIncludedInGenericAttachmentCount;
- (char)preferLocalPreviewImages;
- (char)previewsSupportMultipleAppearances;
- (id)searchableTextContentInNote;
- (char)shouldShowInContentInfoText;
- (char)shouldSyncPreviewImageToCloud:(id)a0;
- (void)updateAfterLoadWithInlineAttachmentIdentifierMap:(id)a0;

@end

@class PKDrawing;

@interface ICAttachmentInlineDrawingModel : ICAttachmentModel

@property (readonly, nonatomic) PKDrawing *handwritingRecognitionDrawing;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (id)additionalIndexableTextContentInNote;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (char)canConvertToHTMLForSharing;
- (id)correctedHardlinkURLFileExtensionForExtension:(id)a0;
- (id)generateHardLinkURLIfNecessaryForURL:(id)a0;
- (char)hasPreviews;
- (char)isIncludedInGenericAttachmentCount;
- (id)newDrawingFromMergeableData;
- (char)preferLocalPreviewImages;
- (char)previewsSupportMultipleAppearances;
- (char)providesStandaloneTitleForNote;
- (id)searchableTextContentInNote;
- (void)setHandwritingRecognitionDrawing:(id)a0;
- (char)shouldShowInContentInfoText;
- (char)shouldSyncPreviewImageToCloud:(id)a0;
- (char)showThumbnailInNoteList;
- (id)standaloneTitleForNote;

@end

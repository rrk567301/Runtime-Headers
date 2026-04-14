@class PKDrawing;

@interface ICAttachmentInlineDrawingModel : ICAttachmentModel

@property (readonly, nonatomic) PKDrawing *handwritingRecognitionDrawing;

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (BOOL)preferLocalPreviewImages;
- (BOOL)showThumbnailInNoteList;
- (id)newDrawingFromMergeableData;
- (BOOL)providesStandaloneTitleForNote;
- (id)standaloneTitleForNote;
- (BOOL)shouldShowInContentInfoText;
- (BOOL)hasPreviews;
- (BOOL)previewsSupportMultipleAppearances;
- (BOOL)shouldSyncPreviewImageToCloud:(id)a0;
- (id)additionalIndexableTextContentInNote;
- (id)searchableTextContentInNote;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;
- (id)correctedHardlinkURLFileExtensionForExtension:(id)a0;
- (id)generateHardLinkURLIfNecessaryForURL:(id)a0;
- (void)setHandwritingRecognitionDrawing:(id)a0;

@end

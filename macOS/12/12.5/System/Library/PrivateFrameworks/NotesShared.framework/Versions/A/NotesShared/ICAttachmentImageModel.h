@interface ICAttachmentImageModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (id)previewItemTitle;
- (id)saveURL;
- (BOOL)hasThumbnailImage;
- (void)updateFileBasedAttributes;
- (BOOL)showThumbnailInNoteList;
- (BOOL)hasPreviews;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;
- (id)generateHardLinkURLIfNecessaryForURL:(id)a0;
- (BOOL)supportsOCR;
- (BOOL)supportsImageClassification;
- (BOOL)needsFullSizePreview;
- (id)previewImageTypeUTI;
- (BOOL)canMarkup;
- (BOOL)canSaveURL;
- (void)updateAttachmentSize;
- (BOOL)shouldCropImage;
- (void)addLocation;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })previewImageOrientationTransform;
- (BOOL)supportsQuickLook;
- (struct CGSize { double x0; double x1; })sizeByCroppingSize:(struct CGSize { double x0; double x1; })a0;

@end

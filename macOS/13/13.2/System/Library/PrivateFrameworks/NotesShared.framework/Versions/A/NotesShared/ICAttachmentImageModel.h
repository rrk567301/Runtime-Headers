@interface ICAttachmentImageModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (id)previewItemTitle;
- (id)saveURL;
- (BOOL)hasThumbnailImage;
- (double)placeholderHeight;
- (BOOL)hasPreviews;
- (BOOL)showThumbnailInNoteList;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (BOOL)canConvertToHTMLForSharing;
- (id)generateHardLinkURLIfNecessaryForURL:(id)a0;
- (BOOL)needsFullSizePreview;
- (BOOL)supportsOCR;
- (BOOL)supportsImageClassification;
- (id)previewImageTypeUTI;
- (BOOL)canMarkup;
- (BOOL)canSaveURL;
- (void)updateAttachmentSize;
- (BOOL)shouldCropImage;
- (BOOL)shouldUsePlaceholderBoundsIfNecessary;
- (id)placeholderImageSystemName;
- (double)placeholderWidth;
- (void)updateFileBasedAttributes;
- (void)addLocation;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })previewImageOrientationTransform;
- (BOOL)supportsQuickLook;
- (struct CGSize { double x0; double x1; })sizeByCroppingSize:(struct CGSize { double x0; double x1; })a0;

@end

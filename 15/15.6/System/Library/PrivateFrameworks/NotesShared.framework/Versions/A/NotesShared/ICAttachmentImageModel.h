@interface ICAttachmentImageModel : ICAttachmentModel

+ (id)contentInfoTextWithAttachmentCount:(unsigned long long)a0;

- (id)previewItemTitle;
- (id)saveURL;
- (char)hasThumbnailImage;
- (double)placeholderHeight;
- (double)placeholderWidth;
- (char)shouldCropImage;
- (void)addLocation;
- (id)attributesForSharingHTMLWithTagName:(id *)a0 textContent:(id *)a1;
- (char)canConvertToHTMLForSharing;
- (char)canMarkup;
- (char)canSaveURL;
- (id)generateHardLinkURLIfNecessaryForURL:(id)a0;
- (char)hasPreviews;
- (char)needsFullSizePreview;
- (id)placeholderImageSystemName;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })previewImageOrientationTransform;
- (id)previewImageTypeUTI;
- (char)shouldUsePlaceholderBoundsIfNecessary;
- (char)showThumbnailInNoteList;
- (struct CGSize { double x0; double x1; })sizeByCroppingSize:(struct CGSize { double x0; double x1; })a0;
- (char)supportsImageClassification;
- (char)supportsOCR;
- (char)supportsQuickLook;
- (void)updateAttachmentSize;
- (void)updateFileBasedAttributes;

@end

@interface ICDrawingTextAttachment : ICTextAttachment

- (struct { double x0; double x1; double x2; double x3; })attachmentBoundsMargins;
- (BOOL)supportsThumbnailView;
- (double)viewCornerRadius;
- (BOOL)supportsMultipleThumbnailsOnSameLine;
- (id)attachmentFileWrapper;
- (BOOL)requiresSpaceAfterAttachmentForPrinting;
- (id)printableTextAttachment;

@end

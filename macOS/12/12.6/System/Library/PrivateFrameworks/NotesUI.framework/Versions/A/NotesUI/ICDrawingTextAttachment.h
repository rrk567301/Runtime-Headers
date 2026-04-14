@interface ICDrawingTextAttachment : ICTextAttachment

- (struct { double x0; double x1; double x2; double x3; })attachmentBoundsMargins;
- (BOOL)requiresSpaceAfterAttachmentForPrinting;
- (BOOL)supportsMultipleThumbnailsOnSameLine;
- (BOOL)supportsThumbnailView;
- (double)viewCornerRadius;
- (id)attachmentFileWrapper;
- (id)printableTextAttachment;

@end

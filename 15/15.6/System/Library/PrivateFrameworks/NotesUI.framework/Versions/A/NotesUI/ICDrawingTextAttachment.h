@interface ICDrawingTextAttachment : ICTextAttachment

- (struct { double x0; double x1; double x2; double x3; })attachmentBoundsMargins;
- (id)attachmentFileWrapper;
- (id)printableTextAttachment;
- (char)requiresSpaceAfterAttachmentForPrinting;
- (char)supportsMultipleThumbnailsOnSameLine;
- (double)viewCornerRadius;

@end

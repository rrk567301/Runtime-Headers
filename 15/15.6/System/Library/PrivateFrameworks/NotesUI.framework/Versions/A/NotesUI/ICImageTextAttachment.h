@interface ICImageTextAttachment : ICTextAttachment

- (char)requiresSpaceAfterAttachmentForPrinting;
- (id)supportedPresentationSizes;
- (char)supportsMultipleThumbnailsOnSameLine;

@end

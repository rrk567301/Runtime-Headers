@interface ICImageTextAttachment : ICTextAttachment

- (BOOL)supportsThumbnailView;
- (BOOL)supportsMultipleThumbnailsOnSameLine;
- (BOOL)requiresSpaceAfterAttachmentForPrinting;

@end

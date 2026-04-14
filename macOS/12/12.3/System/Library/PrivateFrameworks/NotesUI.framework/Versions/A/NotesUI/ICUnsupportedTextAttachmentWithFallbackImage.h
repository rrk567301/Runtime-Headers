@interface ICUnsupportedTextAttachmentWithFallbackImage : ICImageTextAttachment

- (BOOL)supportsMultipleThumbnailsOnSameLine;
- (BOOL)supportsThumbnailView;
- (id)attachmentAsNSTextAttachment;

@end

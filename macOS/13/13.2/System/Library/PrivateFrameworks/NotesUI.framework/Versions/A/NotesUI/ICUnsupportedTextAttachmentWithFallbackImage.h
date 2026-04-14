@interface ICUnsupportedTextAttachmentWithFallbackImage : ICImageTextAttachment

- (BOOL)supportsThumbnailView;
- (id)attachmentAsNSTextAttachment;
- (BOOL)supportsMultipleThumbnailsOnSameLine;

@end

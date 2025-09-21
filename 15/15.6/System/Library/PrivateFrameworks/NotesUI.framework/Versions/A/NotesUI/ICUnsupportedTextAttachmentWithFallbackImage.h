@interface ICUnsupportedTextAttachmentWithFallbackImage : ICImageTextAttachment

- (id)fileType;
- (id)attachmentAsNSTextAttachment;
- (char)supportsMultipleThumbnailsOnSameLine;

@end

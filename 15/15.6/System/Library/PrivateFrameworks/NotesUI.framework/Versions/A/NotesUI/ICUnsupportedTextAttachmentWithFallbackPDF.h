@interface ICUnsupportedTextAttachmentWithFallbackPDF : ICPDFTextAttachment

- (id)attachmentAsNSTextAttachment;
- (char)supportsMultipleThumbnailsOnSameLine;

@end

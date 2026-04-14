@interface ICTextAttachment : ICBaseTextAttachment

+ (BOOL)textAttachmentIsContent:(id)a0;
+ (Class)textAttachmentClassForAttachment:(id)a0;
+ (id)textAttachmentWithAttachment:(id)a0;
+ (double)defaultAttachmentThumbnailViewHeight;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 glyphPosition:(struct CGPoint { double x0; double x1; })a2 characterIndex:(unsigned long long)a3;
- (id)initWithData:(id)a0 ofType:(id)a1;
- (BOOL)isUnsupported;
- (struct { double x0; double x1; double x2; double x3; })attachmentBoundsMargins;
- (BOOL)requiresSpaceAfterAttachmentForPrinting;
- (BOOL)supportsMultipleThumbnailsOnSameLine;
- (BOOL)supportsThumbnailView;
- (id)attachmentAsNSTextAttachment;
- (id)attachmentFileWrapper;
- (struct CGSize { double x0; double x1; })attachmentSizeForTextContainer:(id)a0;
- (struct CGSize { double x0; double x1; })attachmentSizeForTextContainer:(id)a0 proposedLineFragment:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })attachmentBoundsIncludingMarginsFromAttachmentBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (double)availableWidthForTextContainer:(id)a0;

@end

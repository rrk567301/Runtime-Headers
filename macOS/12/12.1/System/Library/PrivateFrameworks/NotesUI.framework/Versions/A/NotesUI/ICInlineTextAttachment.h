@class ICInlineAttachment;

@interface ICInlineTextAttachment : ICAbstractTextAttachment

@property (retain, nonatomic) ICInlineAttachment *attachment;

+ (Class)textAttachmentClassForAttachment:(id)a0;
+ (id)textAttachmentWithAttachment:(id)a0;

- (id)altText;
- (id)initWithAttachment:(id)a0;
- (id)attachmentInContext:(id)a0;
- (id)attachmentIdentifier;
- (BOOL)isUnsupported;
- (Class)attachmentViewClass;
- (id)inlineAttachmentInContext:(id)a0;
- (id)attachmentUTI;
- (id)printableTextContentForAppearanceType:(unsigned long long)a0 styleAttributes:(id)a1;
- (id)newlyCreatedView;

@end

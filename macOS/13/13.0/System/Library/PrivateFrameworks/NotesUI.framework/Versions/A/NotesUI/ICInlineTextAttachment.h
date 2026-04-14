@class ICInlineAttachment;

@interface ICInlineTextAttachment : ICAbstractTextAttachment

@property (retain, nonatomic) ICInlineAttachment *attachment;

+ (id)textAttachmentWithAttachment:(id)a0;
+ (Class)textAttachmentClassForAttachment:(id)a0;

- (id)altText;
- (id)initWithAttachment:(id)a0;
- (id)attachmentIdentifier;
- (BOOL)isUnsupported;
- (id)attachmentInContext:(id)a0;
- (id)inlineAttachmentInContext:(id)a0;
- (id)attachmentUTI;
- (Class)attachmentViewClass;
- (id)newlyCreatedView;
- (id)printableTextContentForAppearanceType:(unsigned long long)a0 styleAttributes:(id)a1;

@end

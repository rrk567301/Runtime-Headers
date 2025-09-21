@class NSString, NSArray, ICBaseAttachment, NSColor;

@interface ICAbstractTextAttachment : NSTextAttachment <ICTTAttachment>

@property (retain, nonatomic) ICBaseAttachment *attachment;
@property (readonly, copy, nonatomic) NSString *viewIdentifier;
@property (readonly, nonatomic, getter=isUnsupported) char unsupported;
@property (nonatomic) double foregroundAlpha;
@property (copy, nonatomic) NSColor *highlightColor;
@property (readonly, nonatomic) char containsFindableText;
@property (readonly, nonatomic) char supportsMultiplePresentationSizes;
@property (readonly, nonatomic) NSArray *supportedPresentationSizes;
@property (readonly, nonatomic) char supportsMultipleThumbnailsOnSameLine;
@property (readonly, copy, nonatomic) NSString *attachmentIdentifier;
@property (readonly, copy, nonatomic) NSString *attachmentUTI;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textAttachmentWithBaseAttachment:(id)a0;

- (void).cxx_destruct;
- (id)initWithData:(id)a0 ofType:(id)a1;
- (char)usesTextAttachmentView;
- (char)allowsTextAttachmentView;
- (char)isEqualToModelComparable:(id)a0;
- (id)attachmentInContext:(id)a0;
- (id)inlineAttachmentInContext:(id)a0;
- (Class)attachmentViewClassForTextContainer:(id)a0;
- (Class)attachmentViewControllerClass;
- (void)fixAttachmentForAttributedString:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1 forPlainText:(char)a2 forStandardizedText:(char)a3;
- (id)newlyCreatedViewForManualRendering:(char)a0 textContainer:(id)a1;
- (id)newlyCreatedViewForManualRenderingInTextContainer:(id)a0;
- (id)newlyCreatedViewForTextContainer:(id)a0;
- (char)supportsUserConfigurablePresentationSizeForTextContainer:(id)a0;

@end

@class ICPDFEncryptionStateChecker, NSURL;

@interface ICPaperDocumentTextAttachment : ICSystemPaperTextAttachment

@property (class, readonly, nonatomic) char isEnabled;

@property (copy, nonatomic) ICPDFEncryptionStateChecker *encryptionStateChecker;
@property (readonly, nonatomic) char isLegacyMediaType;
@property (readonly, nonatomic) NSURL *pdfURL;
@property (nonatomic) char viewportShouldSnapToAttachmentView;

+ (void)initialize;

- (void).cxx_destruct;
- (id)fileType;
- (id)initWithData:(id)a0 ofType:(id)a1;
- (id)_paperBundleURL;
- (void)attachmentView:(id)a0 didMoveToWindow:(id)a1;
- (id)attachmentAsNSTextAttachment;
- (void)attachmentView:(id)a0 willMoveToWindow:(id)a1;
- (char)canDragWithoutSelecting;
- (short)effectiveAttachmentViewSizeForTextContainer:(id)a0;
- (void)paperDidChange;
- (id)printableTextContentForAppearanceType:(unsigned long long)a0 textContainer:(id)a1;
- (id)supportedPresentationSizes;

@end

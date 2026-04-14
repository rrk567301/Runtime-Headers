@interface ICAttachmentPaperDocumentModel : ICAttachmentPaperBundleModel

@property (nonatomic) unsigned long long paperPageCount;

- (id)additionalIndexableTextContentInNote;
- (BOOL)supportsQuickLook;

@end

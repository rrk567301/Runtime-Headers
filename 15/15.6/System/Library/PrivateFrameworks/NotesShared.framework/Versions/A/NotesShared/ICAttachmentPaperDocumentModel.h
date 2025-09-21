@interface ICAttachmentPaperDocumentModel : ICAttachmentPaperBundleModel

@property (nonatomic) unsigned long long paperPageCount;

+ (long long)baseNotesVersion;

- (id)additionalIndexableTextContentInNote;
- (char)supportsQuickLook;

@end

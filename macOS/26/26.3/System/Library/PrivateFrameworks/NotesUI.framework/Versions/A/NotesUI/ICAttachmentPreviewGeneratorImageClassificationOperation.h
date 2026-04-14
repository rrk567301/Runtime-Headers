@class NSManagedObjectContext, ICAttachmentModel;

@interface ICAttachmentPreviewGeneratorImageClassificationOperation : ICAttachmentPreviewGeneratorOperation

@property (retain) NSManagedObjectContext *managedObjectContext;
@property (retain) ICAttachmentModel *attachmentModel;

- (unsigned long long)type;
- (void)main;
- (void).cxx_destruct;

@end

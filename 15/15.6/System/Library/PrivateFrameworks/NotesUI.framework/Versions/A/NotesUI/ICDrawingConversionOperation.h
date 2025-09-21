@class ICBaseTextAttachment, ICAttachment, NSManagedObjectID;

@interface ICDrawingConversionOperation : NSOperation

@property (retain, nonatomic) ICAttachment *attachment;
@property (readonly, nonatomic) char isAutomatic;
@property (readonly, nonatomic) NSManagedObjectID *attachmentID;
@property (readonly, nonatomic) NSManagedObjectID *finalAttachmentID;
@property (retain, nonatomic) ICBaseTextAttachment *textAttachment;

- (void).cxx_destruct;
- (void)main;
- (id)initWithAttachment:(id)a0 textAttachment:(id)a1 automatic:(char)a2;

@end

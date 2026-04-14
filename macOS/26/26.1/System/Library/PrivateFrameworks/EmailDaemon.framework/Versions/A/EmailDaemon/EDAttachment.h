@class EDMessageAttachmentMetadata, EDAttachmentMetadata;

@interface EDAttachment : NSObject

@property (nonatomic, readonly) EDAttachmentMetadata *attachmentMetadata;
@property (nonatomic, readonly) EDMessageAttachmentMetadata *messageMetadata;

- (void).cxx_destruct;
- (id)init;
- (id)initWithAttachmentMetadata:(id)a0 messageMetadata:(id)a1;

@end

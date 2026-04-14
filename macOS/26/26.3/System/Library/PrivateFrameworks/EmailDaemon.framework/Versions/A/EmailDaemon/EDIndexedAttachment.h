@class EDPersistedMessageID, EDPersistedAttachmentID;

@interface EDIndexedAttachment : NSObject

@property (nonatomic, readonly) EDPersistedMessageID *messageID;
@property (nonatomic, readonly) EDPersistedAttachmentID *attachmentID;
@property (nonatomic, readonly) long long hash;

- (id)init;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;
- (id)initWithMessageID:(id)a0 attachmentID:(id)a1;

@end

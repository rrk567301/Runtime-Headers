@class NSString;

@interface _IMDMetadataItem : NSObject

@property (readonly, nonatomic) struct __MDItem { } *item;
@property (readonly, nonatomic) NSString *filePath;

- (void).cxx_destruct;
- (id)initWithFilePath:(id)a0;
- (void)dealloc;
- (BOOL)_markAsReceivedWithSenderName:(id)a0 senderHandle:(id)a1 recipientNames:(id)a2 recipientHandles:(id)a3;
- (BOOL)_markAsSentWithSenderName:(id)a0 senderHandle:(id)a1 recipientNames:(id)a2 recipientHandles:(id)a3;
- (BOOL)markWithSender:(id)a0 recipients:(id)a1 isIncoming:(BOOL)a2;

@end

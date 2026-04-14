@class NSString;

@interface DAMessageFetchAttachmentRequest : NSObject

@property (copy, nonatomic) NSString *messageID;
@property (copy, nonatomic) NSString *attachmentName;

- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)description;
- (id)initWithAttachmentName:(id)a0 andMessageServerID:(id)a1;

@end

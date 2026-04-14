@class NSString, NSArray;

@interface GraphAPIDeleteMessageAttachmentsRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSArray *childFolderIds;
@property (copy, nonatomic) NSString *attachmentId;

- (id)httpMethod;
- (void).cxx_destruct;
- (id)resource;

@end

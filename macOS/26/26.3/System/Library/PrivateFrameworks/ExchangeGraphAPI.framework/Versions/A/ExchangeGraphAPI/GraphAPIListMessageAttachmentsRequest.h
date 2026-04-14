@class NSString, NSArray;

@interface GraphAPIListMessageAttachmentsRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSArray *childFolderIds;

- (id)resource;
- (void).cxx_destruct;

@end

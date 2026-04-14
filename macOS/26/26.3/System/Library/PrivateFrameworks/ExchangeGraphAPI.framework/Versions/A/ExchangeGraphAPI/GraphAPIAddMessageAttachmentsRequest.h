@class NSString, NSArray, NSDictionary;

@interface GraphAPIAddMessageAttachmentsRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSArray *childFolderIds;
@property (copy, nonatomic) NSDictionary *attachment;

- (id)httpMethod;
- (id)resource;
- (void).cxx_destruct;
- (id)body;

@end

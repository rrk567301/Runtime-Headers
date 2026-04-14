@class NSString, NSArray, NSDictionary;

@interface GraphAPIAddMessageAttachmentsRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *messageId;
@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSArray *childFolderIds;
@property (copy, nonatomic) NSDictionary *attachment;

- (void).cxx_destruct;
- (id)httpMethod;
- (id)resource;
- (id)body;

@end

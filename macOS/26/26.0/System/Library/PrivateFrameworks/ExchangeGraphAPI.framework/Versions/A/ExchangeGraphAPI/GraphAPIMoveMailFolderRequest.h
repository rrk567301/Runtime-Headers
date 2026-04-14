@class NSString;

@interface GraphAPIMoveMailFolderRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSString *destinationId;

- (id)httpMethod;
- (id)body;
- (id)resource;
- (void).cxx_destruct;

@end

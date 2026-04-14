@class NSString;

@interface GraphAPICopyMailFolderRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSString *destinationId;

- (id)httpMethod;
- (id)resource;
- (void).cxx_destruct;
- (id)body;

@end

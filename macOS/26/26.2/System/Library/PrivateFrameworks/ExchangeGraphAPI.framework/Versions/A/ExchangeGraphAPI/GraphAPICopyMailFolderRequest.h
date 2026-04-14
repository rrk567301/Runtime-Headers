@class NSString;

@interface GraphAPICopyMailFolderRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSString *destinationId;

- (id)httpMethod;
- (id)body;
- (void).cxx_destruct;
- (id)resource;

@end

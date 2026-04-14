@class NSString;

@interface GraphAPICopyMailFolderRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSString *destinationId;

- (void).cxx_destruct;
- (id)httpMethod;
- (id)resource;
- (id)body;

@end

@class NSString;

@interface GraphAPIUpdateMailFolderRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSString *displayName;

- (id)httpMethod;
- (id)resource;
- (void).cxx_destruct;
- (id)body;

@end

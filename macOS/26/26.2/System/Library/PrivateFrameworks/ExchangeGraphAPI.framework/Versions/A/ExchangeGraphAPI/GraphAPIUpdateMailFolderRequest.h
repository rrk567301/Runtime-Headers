@class NSString;

@interface GraphAPIUpdateMailFolderRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSString *displayName;

- (id)httpMethod;
- (id)body;
- (void).cxx_destruct;
- (id)resource;

@end

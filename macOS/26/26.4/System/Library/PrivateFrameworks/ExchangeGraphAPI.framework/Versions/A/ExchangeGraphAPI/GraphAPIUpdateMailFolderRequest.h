@class NSString;

@interface GraphAPIUpdateMailFolderRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSString *displayName;

- (void).cxx_destruct;
- (id)httpMethod;
- (id)resource;
- (id)body;

@end

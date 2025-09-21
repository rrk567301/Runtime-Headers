@class NSString;

@interface GraphAPICreateMailChildFolderRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *parentFolderId;
@property (copy, nonatomic) NSString *displayName;

- (id)httpMethod;
- (id)body;
- (id)resource;
- (void).cxx_destruct;

@end

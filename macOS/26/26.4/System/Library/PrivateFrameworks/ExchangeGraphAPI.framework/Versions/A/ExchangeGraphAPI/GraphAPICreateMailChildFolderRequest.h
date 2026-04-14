@class NSString;

@interface GraphAPICreateMailChildFolderRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *parentFolderId;
@property (copy, nonatomic) NSString *displayName;

- (void).cxx_destruct;
- (id)httpMethod;
- (id)resource;
- (id)body;

@end

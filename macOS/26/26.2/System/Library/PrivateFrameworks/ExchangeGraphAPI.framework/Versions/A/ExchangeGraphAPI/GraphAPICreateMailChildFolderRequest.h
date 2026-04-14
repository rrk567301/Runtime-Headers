@class NSString;

@interface GraphAPICreateMailChildFolderRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *parentFolderId;
@property (copy, nonatomic) NSString *displayName;

- (id)httpMethod;
- (id)body;
- (void).cxx_destruct;
- (id)resource;

@end

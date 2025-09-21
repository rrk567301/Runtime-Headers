@class NSString;

@interface GraphAPIGetMessageDeltaRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *folderId;
@property (copy, nonatomic) NSString *deltaToken;
@property (copy, nonatomic) NSString *deltaLink;

- (id)resource;
- (void).cxx_destruct;

@end

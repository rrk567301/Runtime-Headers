@class NSString;

@interface GraphAPIGetMailFolderDeltaRequest : GraphAPIBaseRequest

@property (copy, nonatomic) NSString *deltaToken;
@property (copy, nonatomic) NSString *deltaLink;

- (id)resource;
- (void).cxx_destruct;

@end

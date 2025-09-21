@class NSURL;

@interface ASDExternalManifestRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSURL *manifestURL;
@property (nonatomic) char shouldHideUserPrompts;

- (id)init;
- (void).cxx_destruct;

@end

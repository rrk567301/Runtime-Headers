@class NSURL;

@interface ASDExternalManifestRequestOptions : ASDRequestOptions

@property (readonly, nonatomic) NSURL *manifestURL;
@property (nonatomic) BOOL shouldHideUserPrompts;

- (void).cxx_destruct;
- (id)init;

@end

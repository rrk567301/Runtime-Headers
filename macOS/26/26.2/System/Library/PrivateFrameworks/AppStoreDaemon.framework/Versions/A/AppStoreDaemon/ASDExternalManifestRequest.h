@class ASDExternalManifestRequestOptions;

@interface ASDExternalManifestRequest : ASDEphemeralRequest

@property (readonly, copy, nonatomic) ASDExternalManifestRequestOptions *options;

- (id)initWithOptions:(id)a0;
- (id)init;

@end

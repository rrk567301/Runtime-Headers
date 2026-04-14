@class ASDJobManifest;

@interface ASDInstallManifestRequestOptions : ASDRequestOptions

@property (copy, nonatomic) ASDJobManifest *manifest;

- (void).cxx_destruct;
- (id)init;
- (id)initWithManifest:(id)a0;

@end

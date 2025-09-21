@class OSIPersonalizedManifests;

@interface OSIInstallPersonalizedManifestsElement : OSIInstallElement

@property (retain) OSIPersonalizedManifests *personalizedManifests;

- (id)operationName;
- (void).cxx_destruct;
- (BOOL)runReturningError:(id *)a0;
- (double)estimatedTimeToComplete;
- (id)initWithOptions:(id)a0 personalizedManifests:(id)a1;

@end

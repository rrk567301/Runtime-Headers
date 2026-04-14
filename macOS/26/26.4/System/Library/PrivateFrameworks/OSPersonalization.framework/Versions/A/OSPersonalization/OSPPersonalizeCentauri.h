@class NSURL;

@interface OSPPersonalizeCentauri : OSPOperation

@property (retain) NSURL *outputManifestRoot;

- (void)cleanUp;
- (void)main;
- (void).cxx_destruct;
- (id)description;
- (id)__copyBundleWithError:(id *)a0;
- (int)__personalizeBundle:(id)a0 productionMode:(BOOL)a1 securityMode:(BOOL)a2 ticket:(id *)a3 error:(id *)a4;
- (BOOL)__writeTicket:(id)a0 productionMode:(BOOL)a1 securityMode:(BOOL)a2 error:(id *)a3;
- (BOOL)_personalizeWithProductionMode:(BOOL)a0 securityMode:(BOOL)a1;

@end

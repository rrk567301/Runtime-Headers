@interface BOSConfigureRequestOperation : BOSOperation

- (id)description;
- (void)main;
- (BOOL)_extractBundleAndBrainFromInstallerPackages;
- (BOOL)_loadUpdateBundleAndBrainBundle;
- (BOOL)_validateOptions;
- (id)_extractFirmwareBundleComponent:(id)a0 error:(id *)a1;
- (id)__extractFirmwareBundleComponent:(id)a0 error:(id *)a1;

@end

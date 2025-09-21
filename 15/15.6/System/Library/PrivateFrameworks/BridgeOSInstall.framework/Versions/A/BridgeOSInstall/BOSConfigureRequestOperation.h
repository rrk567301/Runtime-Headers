@interface BOSConfigureRequestOperation : BOSOperation

- (id)description;
- (void)main;
- (char)_loadUpdateBundleAndBrainBundle;
- (id)__extractFirmwareBundleComponent:(id)a0 error:(id *)a1;
- (char)_extractBundleAndBrainFromInstallerPackages;
- (id)_extractFirmwareBundleComponent:(id)a0 error:(id *)a1;
- (char)_validateOptions;

@end

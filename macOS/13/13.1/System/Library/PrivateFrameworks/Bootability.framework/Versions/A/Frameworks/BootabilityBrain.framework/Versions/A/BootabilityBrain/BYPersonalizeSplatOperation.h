@interface BYPersonalizeSplatOperation : BYOperation

- (id)description;
- (void)main;
- (BOOL)required;
- (int)_configureAMAI:(struct __AMAuthInstall { } *)a0 deviceIdentity:(id)a1 uuid:(id)a2;
- (void)_personalizeSplatWithDeviceIdentity:(id)a0;
- (BOOL)_copyBuildManifestToTemporaryDirectory:(id)a0;
- (BOOL)_buildIdentityContainsCryptex1Entries:(struct __AMAuthInstall { } *)a0;

@end

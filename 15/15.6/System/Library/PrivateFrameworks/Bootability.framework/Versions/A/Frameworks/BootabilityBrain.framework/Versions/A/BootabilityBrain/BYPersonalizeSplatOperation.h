@interface BYPersonalizeSplatOperation : BYOperation

- (id)description;
- (void)main;
- (char)required;
- (char)_buildIdentityContainsCryptex1Entries:(struct __AMAuthInstall { } *)a0;
- (int)_configureAMAI:(struct __AMAuthInstall { } *)a0 deviceIdentity:(id)a1 uuid:(id)a2;
- (char)_copyBuildManifestToTemporaryDirectory:(id)a0;
- (void)_personalizeSplatWithDeviceIdentity:(id)a0;

@end

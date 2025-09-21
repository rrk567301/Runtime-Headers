@class SUOSUProductStub;

@interface SUOSUMajorProductStubImpl : SUOSUMajorProduct

@property (retain) SUOSUProductStub *config;

- (void).cxx_destruct;
- (id)title;
- (id)longDescription;
- (id)versionString;
- (id)initWithConfig:(id)a0;
- (char)allowedToUseInstallLater;
- (long long)downloadSize;
- (id)longAttributedDescription;
- (id)productKey;
- (char)isSplat;
- (id)updateIconImage;
- (id)encodedUIBundlePath;
- (char)isMSUUpdate;
- (char)isMajorUpdate;
- (char)isSplatCombo;
- (id)majorOSBuildVersion;
- (id)majorOSDisplayTitle;
- (id)majorOSDisplayVersion;
- (id)majorOSIconImage;
- (id)majorOSMoreInfoLinkString;
- (unsigned long long)postInstallAction;
- (id)shortAttributedDescription;
- (char)splatAppliedRestartNow;

@end

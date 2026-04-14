@class SUOSUProductStub;

@interface SUOSUMajorProductStubImpl : SUOSUMajorProduct

@property (retain) SUOSUProductStub *config;

- (long long)downloadSize;
- (id)longDescription;
- (id)title;
- (id)initWithConfig:(id)a0;
- (id)versionString;
- (void).cxx_destruct;
- (BOOL)allowedToUseInstallLater;
- (id)longAttributedDescription;
- (id)productKey;
- (BOOL)isSplat;
- (id)updateIconImage;
- (id)encodedUIBundlePath;
- (BOOL)isMSUUpdate;
- (BOOL)isMajorUpdate;
- (BOOL)isSplatCombo;
- (id)majorOSBuildVersion;
- (id)majorOSDisplayTitle;
- (id)majorOSDisplayVersion;
- (id)majorOSIconImage;
- (id)majorOSMoreInfoLinkString;
- (unsigned long long)postInstallAction;
- (id)shortAttributedDescription;
- (BOOL)splatAppliedRestartNow;

@end

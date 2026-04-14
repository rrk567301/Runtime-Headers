@class SUOSUProductStub;

@interface SUOSUMajorProductStubImpl : SUOSUMajorProduct

@property (retain) SUOSUProductStub *config;

- (id)longDescription;
- (id)versionString;
- (id)title;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (long long)downloadSize;
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

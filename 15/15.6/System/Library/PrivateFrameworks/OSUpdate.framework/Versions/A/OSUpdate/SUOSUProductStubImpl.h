@class SUOSUProductStub;

@interface SUOSUProductStubImpl : SUOSUProduct

@property (retain) SUOSUProductStub *config;

- (void).cxx_destruct;
- (id)title;
- (id)longDescription;
- (id)versionString;
- (id)initWithConfig:(id)a0;
- (char)isCritical;
- (char)allowedToUseInstallLater;
- (long long)downloadSize;
- (char)isAutoUpdateEligible;
- (id)longAttributedDescription;
- (id)productKey;
- (char)isSplat;
- (id)updateIconImage;
- (id)encodedUIBundlePath;
- (char)isMSUUpdate;
- (char)isMajorUpdate;
- (char)isSplatCombo;
- (unsigned long long)postInstallAction;
- (id)productVersionExtra;
- (id)shortAttributedDescription;
- (char)splatAppliedRestartNow;
- (long long)timeRemainingBeforeCriticalAutoInstallIfApplicable;

@end

@class SUOSUProductStub;

@interface SUOSUProductStubImpl : SUOSUProduct

@property (retain) SUOSUProductStub *config;

- (long long)downloadSize;
- (id)longDescription;
- (id)title;
- (id)initWithConfig:(id)a0;
- (id)versionString;
- (BOOL)isCritical;
- (void).cxx_destruct;
- (BOOL)allowedToUseInstallLater;
- (BOOL)isAutoUpdateEligible;
- (id)longAttributedDescription;
- (id)productKey;
- (BOOL)isSplat;
- (id)updateIconImage;
- (id)encodedUIBundlePath;
- (BOOL)isMSUUpdate;
- (BOOL)isMajorUpdate;
- (BOOL)isSplatCombo;
- (unsigned long long)postInstallAction;
- (id)productVersionExtra;
- (id)shortAttributedDescription;
- (BOOL)splatAppliedRestartNow;
- (long long)timeRemainingBeforeCriticalAutoInstallIfApplicable;

@end

@class SUOSUProductStub;

@interface SUOSUProductStubImpl : SUOSUProduct

@property (retain) SUOSUProductStub *config;

- (id)longDescription;
- (BOOL)isCritical;
- (id)versionString;
- (id)title;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (long long)downloadSize;
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

@class SUOSUProductStub;

@interface SUOSUProductStubImpl : SUOSUProduct

@property (retain) SUOSUProductStub *config;

- (id)initWithConfig:(id)a0;
- (id)longDescription;
- (long long)downloadSize;
- (id)title;
- (void).cxx_destruct;
- (id)versionString;
- (BOOL)isCritical;
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

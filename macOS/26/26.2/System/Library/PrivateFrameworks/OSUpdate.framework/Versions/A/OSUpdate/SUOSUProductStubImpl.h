@class SUOSUProductStub;

@interface SUOSUProductStubImpl : SUOSUProduct

@property (retain) SUOSUProductStub *config;

- (id)title;
- (BOOL)isCritical;
- (long long)downloadSize;
- (id)initWithConfig:(id)a0;
- (void).cxx_destruct;
- (id)longDescription;
- (id)versionString;
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

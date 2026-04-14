@class SUOSUProductStub;

@interface SUOSUProductStubImpl : SUOSUProduct

@property (retain) SUOSUProductStub *config;

- (void).cxx_destruct;
- (id)title;
- (id)longDescription;
- (id)versionString;
- (id)initWithConfig:(id)a0;
- (BOOL)isCritical;
- (long long)downloadSize;
- (BOOL)isAutoUpdateEligible;
- (id)longAttributedDescription;
- (id)productKey;
- (BOOL)isSplat;
- (id)updateIconImage;
- (BOOL)isMSUUpdate;
- (BOOL)isMajorUpdate;
- (long long)timeRemainingBeforeCriticalAutoInstallIfApplicable;

@end

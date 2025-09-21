@class NSString, NSImage, NSAttributedString;

@interface SUOSUProductStub : NSObject

@property (retain) NSString *productKey;
@property (retain) NSString *title;
@property (retain) NSString *versionString;
@property (retain) NSString *productVersionExtra;
@property (retain) NSImage *updateIconImage;
@property (retain) NSString *longDescription;
@property (retain) NSAttributedString *longAttributedDescription;
@property (retain) NSString *shortDescription;
@property (retain) NSAttributedString *shortAttributedDescription;
@property long long downloadSize;
@property (retain) NSString *encodedUIBundlePath;
@property char isSplat;
@property char isSplatCombo;
@property char splatAppliedUpdateNow;
@property char isMSUUpdate;
@property char isMajorProduct;
@property char isCriticalProduct;
@property char isAutoUpdateEligible;
@property char allowedToUseInstallTonight;
@property long long timeRemainingBeforeCriticalAutoUpdate;
@property unsigned long long postInstallAction;
@property (retain) NSString *majorOSDisplayTitle;
@property (retain) NSString *majorOSDisplayVersion;
@property (retain) NSString *majorOSBuildVersion;
@property (retain) NSString *majorOSMoreInfoLinkString;
@property (retain) NSImage *majorOSIconImage;

- (id)init;
- (void).cxx_destruct;
- (id)init:(long long)a0;
- (id)toProduct;
- (void)loadLongSummary;
- (void)loadMajorIcon;
- (void)loadMinorIcon;
- (void)loadShortSummary;
- (id)toMajorProduct;

@end

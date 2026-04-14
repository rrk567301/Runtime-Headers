@class NSString, NSImage, NSAttributedString;

@interface SUOSUProductStub : NSObject

@property (retain) NSString *productKey;
@property (retain) NSString *title;
@property (retain) NSString *versionString;
@property (retain) NSImage *updateIconImage;
@property (retain) NSString *longDescription;
@property (retain) NSAttributedString *longAttributedDescription;
@property long long downloadSize;
@property BOOL isSplat;
@property BOOL isMSUUpdate;
@property BOOL isMajorProduct;
@property BOOL isCriticalProduct;
@property BOOL isAutoUpdateEligible;
@property long long timeRemainingBeforeCriticalAutoUpdate;
@property (retain) NSString *majorOSDisplayTitle;
@property (retain) NSString *majorOSDisplayVersion;
@property (retain) NSString *majorOSBuildVersion;
@property (retain) NSString *majorOSMoreInfoLinkString;
@property (retain) NSImage *majorOSIconImage;

- (id)init;
- (void).cxx_destruct;
- (id)toProduct;
- (id)toMajorProduct;

@end

@class NSArray, NSString, NSURL, NSDate;

@interface ASDPurchaseHistoryApp : NSObject <NSSecureCoding>

@property (class, readonly) char supportsSecureCoding;

@property (copy, nonatomic) NSArray *appCapabilities;
@property (copy) NSString *bundleID;
@property (copy) NSString *circularIconURLString;
@property long long contentRatingFlags;
@property (copy) NSDate *datePurchased;
@property (copy) NSString *developerName;
@property (getter=isFamilyShared) char familyShared;
@property (getter=isFirstParty) char firstParty;
@property long long genreID;
@property (copy) NSString *genreName;
@property char hasMessagesExtension;
@property char hasP3;
@property (getter=isHidden) char hidden;
@property (getter=isHiddenFromSpringboard) char hiddenFromSpringboard;
@property (getter=isCustomBrowserEngineApp) char customBrowserEngineApp;
@property (copy) NSString *iconURLString;
@property char isArcade;
@property char is32BitOnly;
@property char isPreorder;
@property (copy) NSString *longTitle;
@property (copy) NSArray *macAppRequiredCapabilities;
@property unsigned int mediaKind;
@property char isIOSBinaryMacOSAvailable;
@property char isIOSBinaryMacOSCompatible;
@property char currentlyOptedInForMacOSEligibility;
@property char currentlyOptedInForXROSEligibility;
@property char optedInForMacOSEligibility;
@property char optedInForXROSEligibility;
@property char isVerifiedForMacOS;
@property char runsOnIntel;
@property char runsOnAppleSilicon;
@property char requiresRosetta;
@property (copy) NSString *ovalIconURLString;
@property (copy) NSURL *preflightPackageURL;
@property (copy) NSURL *productURL;
@property long long purchaserDSID;
@property (copy) NSString *redownloadParams;
@property (copy) NSArray *requiredCapabilities;
@property long long storeItemID;
@property char supportsIPad;
@property char supportsIPhone;
@property char supportsLayeredImage;
@property char supportsMac;
@property char supportsRealityDevice;
@property (copy) NSString *title;
@property char watchAppDeliveredIniOSApp;
@property char watchAppRunsIndependently;
@property char watchOnly;
@property unsigned int purchaseToken;
@property unsigned long long lockerItemID;
@property (readonly) char hasAnyMacOSCompatibleIOSVersion;

- (id)description;
- (id)init;
- (char)isEqual:(id)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;

@end

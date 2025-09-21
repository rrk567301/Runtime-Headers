@class NSString, NSURL, NSDate;

@interface CWFAssetLocal : NSObject

@property (readonly, nonatomic) NSString *assetType;
@property (readonly, nonatomic) NSString *assetSpecifier;
@property (readonly, nonatomic) NSString *assetVersion;
@property (readonly, nonatomic) NSString *firstSupportedOS;
@property (readonly, nonatomic) NSString *lastSupportedOS;
@property (readonly, nonatomic) NSString *firstSupportedBuild;
@property (readonly, nonatomic) NSString *lastSupportedBuild;
@property (readonly, nonatomic) NSURL *localURL;
@property (readonly, nonatomic) NSString *assetID;
@property (readonly, nonatomic) NSString *assetBuild;
@property (readonly, nonatomic) NSDate *lastTimeCatalogChecked;
@property (readonly, nonatomic) NSDate *catalogPostedDate;

+ (id)assetIDFromLocalURL:(id)a0;
+ (char)compareAssetVersion:(id)a0 withVersion:(id)a1;
+ (char)compareOSRestoreVersion:(id)a0 withVersion:(id)a1;
+ (char)compareOSVersion:(id)a0 withVersion:(id)a1;
+ (char)compareSUCoreRestoreVersion:(id)a0 withVersion:(id)a1;
+ (BOOL)isValidAssetVersion:(id)a0;
+ (BOOL)isValidOSVersion:(id)a0;
+ (BOOL)isValidRestoreOSVersion:(id)a0;
+ (id)restoreOSVersionFromOSVersion:(id)a0;

- (void).cxx_destruct;
- (BOOL)sanityCheckAssetBuildAttribute:(id)a0;
- (id)getCoreWiFiCatalogDataFromMobileAssetFile:(id)a0;
- (id)initWithAssetType:(id)a0 assetSpecifier:(id)a1 assetVersion:(id)a2 attributes:(id)a3 rootCatalogInfo:(id)a4 localURL:(id)a5;
- (BOOL)sanityCheckOSRestoreVersion:(id)a0;
- (BOOL)sanityCheckOSVersion:(id)a0;
- (BOOL)sanityCheckSKUVersion:(id)a0;

@end

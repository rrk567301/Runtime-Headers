@class NSString, NSDictionary, NSURL, NSNumber;

@interface MADServiceVideoAsset : NSObject

@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) NSString *clientBundleID;
@property (readonly, nonatomic) NSString *clientTeamID;
@property (readonly, nonatomic) NSURL *url;
@property (readonly, nonatomic) struct { long long value; int timescale; unsigned int flags; long long epoch; } stillTime;
@property (readonly, nonatomic) struct { struct { long long x0; int x1; unsigned int x2; long long x3; } x0; struct { long long x0; int x1; unsigned int x2; long long x3; } x1; } trimTimeRange;
@property (readonly, nonatomic) NSDictionary *safetyScoresForLabels;
@property (readonly, nonatomic) NSNumber *cachedSensitivity;
@property (readonly, nonatomic) NSNumber *animatedStickerScore;
@property (nonatomic) BOOL userSafetyEligible;
@property (readonly, nonatomic) unsigned long long assetType;
@property (readonly, nonatomic) BOOL isSharedPhotosAsset;
@property (readonly, nonatomic) short videoSensitivityAnalysisVersion;

+ (id)assetWithPhotosAsset:(id)a0 clientBundleID:(id)a1 clientTeamID:(id)a2;
+ (id)assetWithURL:(id)a0 identifier:(id)a1 clientBundleID:(id)a2 clientTeamID:(id)a3;
+ (void)unimplementedExceptionForMethodName:(id)a0;

- (void).cxx_destruct;
- (id)initWithClientBundleID:(id)a0 clientTeamID:(id)a1;
- (void)persistToPhotosWithCompactSCSensitivityAnalysis:(long long)a0 screenTimeDeviceImageSensitivity:(short)a1;
- (id)videoURLWithAllowDownload:(BOOL)a0 progressHandler:(id /* block */)a1 cancelBlock:(id /* block */)a2;

@end

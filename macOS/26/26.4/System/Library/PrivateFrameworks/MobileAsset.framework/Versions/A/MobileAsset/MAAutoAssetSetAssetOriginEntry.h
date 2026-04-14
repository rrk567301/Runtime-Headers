@class NSString, MAAutoAssetSelector;

@interface MAAutoAssetSetAssetOriginEntry : NSObject

@property (retain, nonatomic) MAAutoAssetSelector *fullAssetSelector;
@property (nonatomic) long long assetOriginType;
@property (retain, nonatomic) NSString *assetDownloadedOSBuild;
@property (retain, nonatomic) NSString *assetAvailableOSBuild;

+ (long long)basicOriginType:(long long)a0;
+ (id)nameOfBasicOriginType:(long long)a0;
+ (id)nameOfOriginType:(long long)a0;

- (void).cxx_destruct;
- (id)summary;
- (id)description;
- (id)initWithFullAssetSelector:(id)a0 withAssetOriginType:(long long)a1 withAssetDownloadedOSBuild:(id)a2 withAssetAvailableOSBuild:(id)a3;

@end

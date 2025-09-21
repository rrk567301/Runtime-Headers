@class MLFeatureValue, APOdmlAssetManager;

@interface APOdmlFeatureHandler : NSObject

@property (readonly, nonatomic) APOdmlAssetManager *assetManager;
@property (readonly, nonatomic) char isTwoDimensional;
@property (retain, nonatomic) MLFeatureValue *appUsageVector;
@property (retain, nonatomic) MLFeatureValue *appDownloadVector;
@property (retain, nonatomic) MLFeatureValue *installedAppVector;
@property (retain, nonatomic) MLFeatureValue *userQueryVector;

- (void).cxx_destruct;

@end

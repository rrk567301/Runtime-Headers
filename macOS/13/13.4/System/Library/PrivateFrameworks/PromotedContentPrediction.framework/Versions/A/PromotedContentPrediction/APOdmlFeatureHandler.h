@class MLFeatureValue, APOdmlAssetManager;

@interface APOdmlFeatureHandler : NSObject

@property (readonly, nonatomic) APOdmlAssetManager *assetManager;
@property (readonly, nonatomic) BOOL isTwoDimensional;
@property (retain, nonatomic) MLFeatureValue *appUsageVector;
@property (retain, nonatomic) MLFeatureValue *appDownloadVector;
@property (retain, nonatomic) MLFeatureValue *installedAppVector;

- (void).cxx_destruct;

@end

@class MLArrayBatchProvider, MLModel, MLFeatureValue, APOdmlAssetManager;

@interface APOdmlPredictor : NSObject

@property (readonly, nonatomic) MLModel *predictionModel;
@property (readonly, nonatomic) APOdmlAssetManager *assetManager;
@property (readonly, nonatomic) BOOL isTwoDimensional;
@property (readonly, nonatomic) MLArrayBatchProvider *batchInput;
@property (retain, nonatomic) MLFeatureValue *appUsageVector;
@property (retain, nonatomic) MLFeatureValue *appDownloadVector;
@property (retain, nonatomic) MLFeatureValue *installedAppVector;

- (void).cxx_destruct;

@end

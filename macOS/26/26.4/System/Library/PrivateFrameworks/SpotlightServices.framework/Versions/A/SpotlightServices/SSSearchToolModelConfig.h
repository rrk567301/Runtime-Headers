@class NSArray, MLModel;

@interface SSSearchToolModelConfig : NSObject

@property (retain, nonatomic) NSArray *featureNames;
@property float threshold;
@property float bucketThreshold;
@property float bucketThresholdPerfectScore;
@property float calibrationParamA;
@property float calibrationParamB;
@property (retain, nonatomic) MLModel *model;

- (void).cxx_destruct;
- (id)init;

@end

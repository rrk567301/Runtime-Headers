@class NSArray, MLModel;

@interface ModelConfig : NSObject

@property (retain, nonatomic) NSArray *featureNames;
@property float threshold;
@property (retain, nonatomic) MLModel *model;

- (void).cxx_destruct;
- (id)init;

@end

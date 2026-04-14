@class NSArray, MLModel;

@interface ModelConfig : NSObject

@property (retain, nonatomic) NSArray *featureNames;
@property float threshold;
@property (retain, nonatomic) MLModel *model;

- (id)init;
- (void).cxx_destruct;

@end

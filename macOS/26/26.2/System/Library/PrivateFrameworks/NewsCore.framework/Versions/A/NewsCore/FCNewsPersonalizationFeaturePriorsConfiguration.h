@class FCNewsPersonalizationFeaturePrior;

@interface FCNewsPersonalizationFeaturePriorsConfiguration : NSObject

@property (retain, nonatomic) FCNewsPersonalizationFeaturePrior *baselineFeaturePrior;
@property (retain, nonatomic) FCNewsPersonalizationFeaturePrior *generalFeaturePrior;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)a0;

@end

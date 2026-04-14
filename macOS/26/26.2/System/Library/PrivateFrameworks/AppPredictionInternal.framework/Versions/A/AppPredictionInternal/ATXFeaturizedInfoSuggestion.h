@class ATXInformationFeatureSet, ATXInfoSuggestion;

@interface ATXFeaturizedInfoSuggestion : NSObject

@property (readonly, nonatomic) ATXInfoSuggestion *suggestion;
@property (readonly, nonatomic) ATXInformationFeatureSet *featureSet;

- (double)scoreWithFeatureWeights:(id)a0;
- (void).cxx_destruct;
- (id)initWithSuggestion:(id)a0 featureSet:(id)a1;
- (id)init;

@end

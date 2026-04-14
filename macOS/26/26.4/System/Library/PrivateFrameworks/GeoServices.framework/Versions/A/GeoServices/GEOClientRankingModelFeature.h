@class GEOClientRankingModelFeatureIdentifier, GEOClientRankingModelFeatureFunction;

@interface GEOClientRankingModelFeature : NSObject

@property (readonly, nonatomic) GEOClientRankingModelFeatureIdentifier *featureIdentifier;
@property (readonly, nonatomic) GEOClientRankingModelFeatureFunction *function;

- (void).cxx_destruct;
- (id)init;
- (id)initWithFeatureIdentifier:(id)a0 function:(id)a1;
- (id)initWithGEOPDClientRankingFeatureMetadata:(id)a0;

@end

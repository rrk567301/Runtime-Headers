@interface SiriGlobalReranker.FeatureWeightBasedRankerModel : MLModel {
    void /* unknown type, empty encoding */ featureWeights;
}

- (id)init;
- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 error:(id *)a1;

@end

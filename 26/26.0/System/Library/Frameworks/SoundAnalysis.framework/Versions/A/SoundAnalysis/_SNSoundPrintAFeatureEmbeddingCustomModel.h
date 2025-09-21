@interface _SNSoundPrintAFeatureEmbeddingCustomModel : _SNSoundPrintFeatureEmbeddingCustomModel <MLCustomModel> {
    void /* unknown type, empty encoding */ inputFeatureName;
    void /* unknown type, empty encoding */ outputFeatureName;
    void /* unknown type, empty encoding */ outputShape;
}

- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (void).cxx_destruct;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end

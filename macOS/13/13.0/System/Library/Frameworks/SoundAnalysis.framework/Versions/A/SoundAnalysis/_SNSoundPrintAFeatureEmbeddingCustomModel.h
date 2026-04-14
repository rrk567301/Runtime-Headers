@class NSString, NSArray;

@interface _SNSoundPrintAFeatureEmbeddingCustomModel : _SNSoundPrintFeatureEmbeddingCustomModel <MLCustomModel> {
    NSString *_inputFeatureName;
    NSString *_outputFeatureName;
    NSArray *_outputShape;
}

- (void).cxx_destruct;
- (id)predictionFromFeatures:(id)a0 options:(id)a1 error:(id *)a2;
- (id)initWithModelDescription:(id)a0 parameterDictionary:(id)a1 error:(id *)a2;

@end

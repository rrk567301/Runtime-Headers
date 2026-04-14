@class NSDictionary;

@interface PHAPrivateFederatedLearningTransformersDecoder : NSObject

@property (readonly, nonatomic) NSDictionary *transformerNameToClass;

- (id)init;
- (void).cxx_destruct;
- (id)_generateErrorWithErrorCode:(long long)a0 errorMessage:(id)a1;
- (id)instanceForTransformerConfig:(id)a0 error:(id *)a1;
- (id)instancesForTransformerConfigList:(id)a0 error:(id *)a1;
- (id)transformersForFeatureExtractorsFromDictionary:(id)a0 error:(id *)a1;

@end

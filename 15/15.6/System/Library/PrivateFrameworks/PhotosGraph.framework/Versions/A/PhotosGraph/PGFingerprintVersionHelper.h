@interface PGFingerprintVersionHelper : NSObject

+ (char)_generateError:(id *)a0 errorCode:(long long)a1 errorMessage:(id)a2 underlyingError:(id)a3;
+ (id)featureExtractorForFingerprintVersion:(long long)a0 withGraph:(id)a1 withTransformers:(id)a2 error:(id *)a3;
+ (id)fetchOptionPropertySetForFingerprintVersion:(long long)a0;
+ (long long)fingerprintVersionForName:(id)a0;
+ (char)isAssetFingerprintVersion:(long long)a0;
+ (char)isMemoryFingerprintVersion:(long long)a0;
+ (char)isMomentFingerprintVersion:(long long)a0;
+ (void)resetPreCalculatedFeatures;
+ (id)_featureExtractors:(id)a0 withTransformers:(id)a1 parentFeatureExtractorName:(id)a2;
+ (char)isMemoryNodeFingerprintVersion:(long long)a0;
+ (char)isMomentNodeFingerprintVersion:(long long)a0;
+ (id)_assetPrintFeatureExtractorForAssetPrintType:(long long)a0 transformers:(id)a1 error:(id *)a2;
+ (id)_clipprintFeatureExtractorInstance;
+ (id)_featureExtractor:(id)a0 withTransformers:(id)a1;
+ (id)_featureExtractor:(id)a0 withTransformers:(id)a1 parentFeatureExtractorName:(id)a2;
+ (id)_featureExtractors:(id)a0 withTransformers:(id)a1;
+ (id)_multiModalFeatureExtractorForMutliModalType:(long long)a0 assetFeatureExtractor:(id)a1 personaVectorFeatureExtractor:(id)a2 graph:(id)a3 transformers:(id)a4 error:(id *)a5;
+ (id)_personaVectorFeatureExtractorForPersonaVectorType:(long long)a0 fetchOptionPropertySet:(id)a1 graph:(id)a2 transformers:(id)a3 error:(id *)a4;
+ (id)_sceneprintFeatureExtractorInstance;
+ (id)nameForFingerprintVersion:(long long)a0;

@end

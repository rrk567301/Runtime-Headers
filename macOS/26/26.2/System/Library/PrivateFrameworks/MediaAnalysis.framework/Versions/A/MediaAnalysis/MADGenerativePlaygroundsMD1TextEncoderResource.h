@interface MADGenerativePlaygroundsMD1TextEncoderResource : MADTextEncoderResource

- (long long)revision;
- (unsigned long long)version;
- (id)additionalLayerNames;
- (BOOL)supportsAgeTypePromptAdjustment;
- (long long)tokenEmbeddingType;
- (id)tokensForAgeType_:(unsigned short)a0;

@end

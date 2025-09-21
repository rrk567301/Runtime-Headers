@interface SNLPFeatureStoreUtilities : NSObject

+ (char)insertToFeatureStoreWithNLv4SpanResponse:(id)a0 interactionIdentifier:(id)a1;
+ (char)_insertToFeatureStoreWithJSONString:(id)a0 interactionIdentifier:(id)a1 streamIdentifier:(id)a2;
+ (char)_insertToFeatureStoreWithProtobufObject:(id)a0 interactionIdentifier:(id)a1 streamIdentifier:(id)a2;
+ (id)_jsonStringFromProtobufObject:(id)a0;
+ (char)insertToFeatureStoreWithITFMAssertVersion:(id)a0 interactionIdentifier:(id)a1 itfmModelType:(unsigned long long)a2;
+ (char)insertToFeatureStoreWithITFMContextResponse:(id)a0 interactionIdentifier:(id)a1 itfmModelType:(unsigned long long)a2;
+ (char)insertToFeatureStoreWithITFMExecutedHandcraftedRules:(id)a0 interactionIdentifier:(id)a1 itfmModelType:(unsigned long long)a2;
+ (char)insertToFeatureStoreWithITFMSpanResponse:(id)a0 interactionIdentifier:(id)a1 itfmModelType:(unsigned long long)a2;
+ (char)insertToFeatureStoreWithNLv4AssertVersion:(id)a0 interactionIdentifier:(id)a1;
+ (char)insertToFeatureStoreWithNLv4ContextResponse:(id)a0 interactionIdentifier:(id)a1;
+ (char)insertToFeatureStoreWithNLv4ExecutedHandcraftedRules:(id)a0 interactionIdentifier:(id)a1;
+ (char)insertToFeatureStoreWithSSUEncodingResult:(id)a0 interactionIdentifier:(id)a1;
+ (unsigned long long)itfmModelTypeForSNLPComponent:(const int *)a0;

@end

@class SGQuickResponsesTransformerInstance;
@protocol PMLMultiLabelClassifierProtocol;

@interface SGQuickResponsesModel : NSObject {
    id<PMLMultiLabelClassifierProtocol> _model;
    SGQuickResponsesTransformerInstance *_transformer;
}

+ (id)transformerInstanceForLanguage:(id)a0 mode:(unsigned long long)a1;
+ (id)labelOf:(id)a0 inLanguage:(id)a1;
+ (BOOL)shouldSampleForLabel:(id)a0 inLanguage:(id)a1 isDynamicLabel:(BOOL)a2;
+ (id)modelForLanguage:(id)a0 mode:(unsigned long long)a1 chunkPath:(id)a2 plistPath:(id)a3;
+ (void)_addModelAssetUpdateHandler;
+ (id)configForLanguage:(id)a0 mode:(unsigned long long)a1 plistPath:(id)a2;
+ (id)transformerInstanceForLanguage:(id)a0 mode:(unsigned long long)a1 plistPath:(id)a2;
+ (id)featuresOf:(id)a0 withFeaturizer:(id)a1 source:(id)a2;
+ (id)labelOf:(id)a0 withLabeler:(id)a1;
+ (id)_transformerCacheKeyForLanguage:(id)a0 mode:(unsigned long long)a1 plistPath:(id)a2;
+ (id)_sharedInvalidKeysCache;
+ (id)_sharedTransformerCache;
+ (id)newTransformerInstanceForLanguage:(id)a0 mode:(unsigned long long)a1 plistPath:(id)a2;
+ (id)featuresOf:(id)a0 inLanguage:(id)a1 andMode:(unsigned long long)a2;
+ (void)setGlobalTransformerForTesting:(id)a0;

- (void).cxx_destruct;
- (id)config;
- (id)predict:(id)a0;
- (void)setTransformer:(id)a0;
- (id)featuresOf:(id)a0;
- (BOOL)shouldSampleForLabel:(id)a0 isDynamicLabel:(BOOL)a1;
- (id)initWithEntity:(id)a0 type:(id)a1 mode:(unsigned long long)a2 language:(id)a3 class:(Class)a4 modelPath:(id)a5 plistPath:(id)a6;
- (id)labelOf:(id)a0;

@end

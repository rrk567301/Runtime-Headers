@class NSArray, NSDictionary, NSError, NSLocale, NSObject;
@protocol OS_dispatch_queue;

@interface DDMLTaggerModel : NSObject {
    struct MontrealNeuralNetwork { } *_taggerModel;
    NSDictionary *_tokenLabelMap;
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly) NSLocale *embeddingLocale;
@property (readonly) NSError *error;
@property (readonly) NSArray *supportedTypes;
@property (readonly) BOOL isValid;

+ (id)_buildTokenToLabelMap:(id)a0 supportedTypes:(id *)a1;
+ (id)currentTaggerModel;
+ (void)setCurrentTaggerModel:(id)a0;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithEmbeddingLocale:(id)a0 modelDictionary:(id)a1 baseURL:(id)a2;
- (void)processTokens:(id)a0 withEmbeddingData:(id)a1;
- (id)tokenTypeForValue:(long long)a0;

@end

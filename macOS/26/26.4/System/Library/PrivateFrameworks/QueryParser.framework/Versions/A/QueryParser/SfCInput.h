@class MLMultiArray, NSSet;

@interface SfCInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *embedding;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithEmbedding:(id)a0;

@end

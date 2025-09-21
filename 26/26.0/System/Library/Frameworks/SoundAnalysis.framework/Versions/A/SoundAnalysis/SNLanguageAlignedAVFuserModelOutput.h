@class MLMultiArray, NSSet;

@interface SNLanguageAlignedAVFuserModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *fused_embedding;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithFused_embedding:(id)a0;

@end

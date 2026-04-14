@class MLMultiArray, NSSet;

@interface SfCOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *logits;
@property (retain, nonatomic) MLMultiArray *probs;
@property (retain, nonatomic) MLMultiArray *preds;
@property (retain, nonatomic) MLMultiArray *thresholded_preds;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithLogits:(id)a0 probs:(id)a1 preds:(id)a2 thresholded_preds:(id)a3;

@end

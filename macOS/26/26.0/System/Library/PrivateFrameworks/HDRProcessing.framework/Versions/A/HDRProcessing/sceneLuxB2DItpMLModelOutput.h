@class MLMultiArray, NSSet;

@interface sceneLuxB2DItpMLModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *anchor_points;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithAnchor_points:(id)a0;

@end

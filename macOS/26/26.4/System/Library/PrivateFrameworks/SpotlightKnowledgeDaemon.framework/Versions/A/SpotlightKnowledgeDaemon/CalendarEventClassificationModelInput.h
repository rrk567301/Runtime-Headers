@class MLMultiArray, NSSet;

@interface CalendarEventClassificationModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *emb;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithEmb:(id)a0;

@end

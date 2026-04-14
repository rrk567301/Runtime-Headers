@class MLMultiArray, NSSet;

@interface CalendarEventClassificationModelInput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *emb;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithEmb:(id)a0;

@end

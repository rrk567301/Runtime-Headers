@class MLMultiArray, NSSet;

@interface CalendarEventClassificationModelOutput : NSObject <MLFeatureProvider>

@property (retain, nonatomic) MLMultiArray *y;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithY:(id)a0;

@end

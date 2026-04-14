@class NSSet;

@interface inactivityDurationModelOutput : NSObject <MLFeatureProvider>

@property (nonatomic) double predicted_duration;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (id)initWithPredicted_duration:(double)a0;

@end

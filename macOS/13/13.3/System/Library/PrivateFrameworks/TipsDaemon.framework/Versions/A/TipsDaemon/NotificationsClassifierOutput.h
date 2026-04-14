@class NSDictionary, NSSet;

@interface NotificationsClassifierOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long predictedValue;
@property (retain, nonatomic) NSDictionary *classProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithPredictedValue:(long long)a0 classProbability:(id)a1;

@end

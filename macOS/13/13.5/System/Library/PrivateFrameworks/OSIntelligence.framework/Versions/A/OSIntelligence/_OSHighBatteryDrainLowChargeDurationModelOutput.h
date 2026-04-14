@class NSDictionary, NSSet;

@interface _OSHighBatteryDrainLowChargeDurationModelOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long label;
@property (retain, nonatomic) NSDictionary *classProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithLabel:(long long)a0 classProbability:(id)a1;

@end

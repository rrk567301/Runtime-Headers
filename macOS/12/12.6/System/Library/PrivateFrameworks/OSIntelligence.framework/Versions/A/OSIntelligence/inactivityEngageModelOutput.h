@class NSDictionary, NSSet;

@interface inactivityEngageModelOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long is_long;
@property (retain, nonatomic) NSDictionary *classProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithIs_long:(long long)a0 classProbability:(id)a1;

@end

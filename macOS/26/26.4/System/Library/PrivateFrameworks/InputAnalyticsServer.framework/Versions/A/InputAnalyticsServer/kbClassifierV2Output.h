@class NSString, NSDictionary, NSSet;

@interface kbClassifierV2Output : NSObject <MLFeatureProvider>

@property (retain, nonatomic) NSString *target;
@property (retain, nonatomic) NSDictionary *targetProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (id)featureValueForName:(id)a0;
- (void).cxx_destruct;
- (id)initWithTarget:(id)a0 targetProbability:(id)a1;

@end

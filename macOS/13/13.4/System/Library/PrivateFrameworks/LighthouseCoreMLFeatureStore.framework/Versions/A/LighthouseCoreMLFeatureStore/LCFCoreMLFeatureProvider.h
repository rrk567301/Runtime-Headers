@class NSDictionary, NSSet;

@interface LCFCoreMLFeatureProvider : NSObject <MLFeatureProvider>

@property (readonly, nonatomic) NSDictionary *featureValues;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)init:(id)a0;
- (id)featureValueForName:(id)a0;

@end

@class NSDictionary, NSSet;

@interface searchToolL2_MobileSMSOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long label;
@property (retain, nonatomic) NSDictionary *prob;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithLabel:(long long)a0 prob:(id)a1;

@end

@class NSDictionary, NSSet;

@interface EDImportantMLModelOutput : NSObject <MLFeatureProvider>

@property (nonatomic) long long important;
@property (retain, nonatomic) NSDictionary *importantProbability;
@property (readonly, nonatomic) NSSet *featureNames;

- (void).cxx_destruct;
- (id)featureValueForName:(id)a0;
- (id)initWithImportant:(long long)a0 importantProbability:(id)a1;

@end

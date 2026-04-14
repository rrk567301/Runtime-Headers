@class NSString;

@interface UAFExperimentalAssetsConfiguration : NSObject

@property (copy, nonatomic) NSString *trialProject;
@property (copy, nonatomic) NSString *trialNamespace;
@property (copy, nonatomic) NSString *trialFactor;

+ (BOOL)isValid:(id)a0 error:(id *)a1;

- (id)initWithDictionary:(id)a0;
- (void).cxx_destruct;

@end

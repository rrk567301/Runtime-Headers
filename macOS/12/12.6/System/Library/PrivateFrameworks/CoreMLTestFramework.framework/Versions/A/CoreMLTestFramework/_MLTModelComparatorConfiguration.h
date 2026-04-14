@class NSArray, NSString;

@interface _MLTModelComparatorConfiguration : NSObject

@property (nonatomic) unsigned int seed;
@property (nonatomic) unsigned long long monteCarloCount;
@property (retain, nonatomic) NSArray *imageInputs;
@property (retain, nonatomic) NSString *modelAPath;
@property (retain, nonatomic) NSString *modelBPath;
@property long long modelAComputeUnit;
@property long long modelBComputeUnit;

- (id)init;
- (void).cxx_destruct;

@end

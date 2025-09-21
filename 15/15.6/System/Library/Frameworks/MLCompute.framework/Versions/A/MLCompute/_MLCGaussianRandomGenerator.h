@interface _MLCGaussianRandomGenerator : NSObject

@property (readonly, nonatomic) double mean;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) char seeded;
@property (readonly, nonatomic) unsigned long long seedValue;

+ (id)zeroMeanGaussianRandomGenerator;
+ (id)zeroMeanGaussianRandomGeneratorWithSeed:(unsigned long long)a0;

- (id)initWithMean:(double)a0 scale:(double)a1 seeded:(char)a2 seedValue:(unsigned long long)a3;
- (double)sample;

@end

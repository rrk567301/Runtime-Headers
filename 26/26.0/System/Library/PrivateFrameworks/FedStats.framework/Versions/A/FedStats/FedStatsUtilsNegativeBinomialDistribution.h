@class FedStatsUtilsGammaDistribution, NSString;

@interface FedStatsUtilsNegativeBinomialDistribution : NSObject <FedStatsUtilsDiscreteDistribution>

@property (nonatomic) double successCount;
@property (nonatomic) double successProbability;
@property (copy, nonatomic) FedStatsUtilsGammaDistribution *gamma;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)distributionWithSuccessCount:(double)a0 successProbability:(double)a1;

- (unsigned long long)sample;
- (void).cxx_destruct;
- (double)mean;
- (double)variance;
- (id)initWithSuccessCount:(double)a0 successProbability:(double)a1;
- (unsigned long long)sampleWithUnitNumberGenerator:(id)a0;
- (double)varianceOfSecondMoment;

@end

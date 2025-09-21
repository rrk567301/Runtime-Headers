@class ADConfidenceLevelRanges, ADJasperPointCloudFilterParameters, ADAggregationParameters;

@interface ADMetricDepthPipelineParameters : ADPipelineParameters

@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilter;
@property (retain, nonatomic) ADAggregationParameters *aggregationParameters;
@property (nonatomic) unsigned long long confidenceUnits;
@property (nonatomic) float confidenceBucketingLowThreshold;
@property (nonatomic) float confidenceBucketingHighThreshold;
@property (retain, nonatomic) ADConfidenceLevelRanges *confidenceLevelRanges;
@property (nonatomic) float pearlJasperCoFilteringMaxAllowedDisagreement;
@property (nonatomic) float pearlJasperCoFilteringMaxPearlDepth;
@property (nonatomic) unsigned int numCenterBands;
@property (nonatomic) unsigned int maxCenterResolution;
@property (nonatomic) unsigned int numRaysBands;
@property (nonatomic) unsigned int maxRaysResolution;
@property (nonatomic) unsigned int numJasperBands;
@property (nonatomic) float maxJasperDepth;

+ (id)defaults;

- (id)init;
- (void).cxx_destruct;

@end

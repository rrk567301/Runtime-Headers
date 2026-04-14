@class ADLKTConfidenceParameters;

@interface ADLKTExecutorParameters : ADExecutorParameters

@property (retain, nonatomic) ADLKTConfidenceParameters *confidenceParameters;
@property (nonatomic) unsigned long long confidenceUnits;
@property (nonatomic) BOOL enableStatistics;

- (void).cxx_destruct;
- (id)init;

@end

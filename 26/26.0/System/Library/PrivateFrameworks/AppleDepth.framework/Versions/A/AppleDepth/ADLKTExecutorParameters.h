@class ADLKTConfidenceParameters;

@interface ADLKTExecutorParameters : ADExecutorParameters

@property (retain, nonatomic) ADLKTConfidenceParameters *confidenceParameters;
@property (nonatomic) unsigned long long confidenceUnits;
@property (nonatomic) BOOL enableStatistics;

- (id)init;
- (void).cxx_destruct;

@end

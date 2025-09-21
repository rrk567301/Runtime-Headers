@class ADJasperPointCloudFilterParameters;

@interface ADDensifiedLiDARFocusAssistPipelineParameters : ADPipelineParameters

@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilter;
@property (nonatomic) unsigned long long confidenceUnits;

- (id)init;
- (void).cxx_destruct;
- (id)initForDevice:(id)a0;

@end

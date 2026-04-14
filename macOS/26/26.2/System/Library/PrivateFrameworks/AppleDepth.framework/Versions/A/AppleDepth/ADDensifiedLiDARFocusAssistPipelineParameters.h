@class ADJasperPointCloudFilterParameters;

@interface ADDensifiedLiDARFocusAssistPipelineParameters : ADPipelineParameters

@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilter;
@property (nonatomic) unsigned long long confidenceUnits;

- (void).cxx_destruct;
- (id)init;
- (id)initForDevice:(id)a0;

@end

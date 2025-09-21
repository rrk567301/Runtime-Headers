@class ADLogManager, ADJasperPointCloudFilterParameters, ADAggregationParameters;

@interface ADJasperPearlInFieldCalibrationPipelineParameters : NSObject

@property (retain, nonatomic) ADJasperPointCloudFilterParameters *pointCloudFilterParameters;
@property (retain, nonatomic) ADAggregationParameters *pointCloudAggregationParameters;
@property (nonatomic) long long stepsToExecute;
@property (nonatomic) BOOL isReportTelemetry;
@property (nonatomic) BOOL skipISF;
@property (retain, nonatomic) ADLogManager *logger;

- (id)init;
- (void).cxx_destruct;

@end

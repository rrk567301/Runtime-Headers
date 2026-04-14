@class NSMutableDictionary;
@protocol TRILatencyMetricTelemetryValidating;

@interface TRIDownloadLatencyTaskResultTelemetryBuilder : NSObject

@property (readonly, nonatomic) id<TRILatencyMetricTelemetryValidating> validator;
@property (readonly, nonatomic) NSMutableDictionary *telemetryForDeployment;

- (void)_updateBuiltTelemetryWithDeployment:(id)a0 rolloutFields:(id)a1 downloadStatus:(int)a2;
- (void)_handleActivationTask:(id)a0 runResult:(id)a1;
- (id)builtTelemetry;
- (void)_handleFetchTask:(id)a0 runResult:(id)a1;
- (void)updateWithTask:(id)a0 runResult:(id)a1;
- (void).cxx_destruct;
- (id)initWithTelemetryValidator:(id)a0;

@end

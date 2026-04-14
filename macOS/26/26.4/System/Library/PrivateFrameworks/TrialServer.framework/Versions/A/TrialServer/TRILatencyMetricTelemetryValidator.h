@class TRIRolloutDatabase, NSSet;

@interface TRILatencyMetricTelemetryValidator : NSObject <TRILatencyMetricTelemetryValidating>

@property (readonly, nonatomic) TRIRolloutDatabase *rolloutDb;
@property (readonly, nonatomic) NSSet *namespacesAllowedForLogging;

- (id)initWithRolloutDatabase:(id)a0 paths:(id)a1;
- (BOOL)_isRecordContainingAllowedLoggingNamespace:(id)a0;
- (void).cxx_destruct;
- (id)createRolloutFieldForDeployment:(id)a0 factorPackSetId:(id)a1 record:(id)a2;
- (id)validateAndReturnTelemetryForDeployment:(id)a0 factorPackSetId:(id)a1;

@end

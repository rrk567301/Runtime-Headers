@class NSMutableArray;

@interface ADPearlColorInFieldCalibrationTelemetryData : NSObject {
    unsigned int _telemetryVersion;
}

@property (readonly) unsigned long long lastExecutionTime;
@property (readonly) unsigned long long maxBackendRunTime;
@property (readonly) unsigned long long minBackendRunTime;
@property (readonly) unsigned long long timeSincePrevRun;
@property (readonly) unsigned long long totalBackendTime;
@property (readonly) unsigned long long frontEndTime;
@property (readonly) unsigned long long totalNumRuns;
@property (readonly) unsigned int largeRotationStatusBits;
@property unsigned long long lastToleranceDetectedTime;
@property (retain) NSMutableArray *firedEventTimestampsArray;

- (void)reset;
- (void).cxx_destruct;
- (id)initWithDictionaryRepresentation:(id)a0;
- (id)init;
- (id)persistenceData;
- (void)increaseRunTimesByOne;
- (void)initEventTimestampsArray;
- (void)reportBackendRunTime:(unsigned long long)a0;
- (void)reportFrontendRunTime:(unsigned long long)a0;
- (void)updateLastExecutionTime:(unsigned long long)a0;

@end

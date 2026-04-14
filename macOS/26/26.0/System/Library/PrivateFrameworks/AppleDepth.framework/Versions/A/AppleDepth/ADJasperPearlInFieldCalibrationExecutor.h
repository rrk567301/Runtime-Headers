@class NSData, ADStreamSyncMatch, ADJasperPointCloud, ADJasperPearlInFieldCalibrationPipeline, ADJasperPearlInFieldCalibrationExecutorParameters, ADStreamSync, NSObject, ADPointCloudAggregator, ADCameraCalibration;

@interface ADJasperPearlInFieldCalibrationExecutor : ADExecutor {
    BOOL _isPrepared;
    ADStreamSyncMatch *_lastSyncMatch;
    NSObject *_lastStreamSyncMatchLock;
    ADJasperPearlInFieldCalibrationPipeline *_pipeline;
    ADStreamSync *_streamSync;
    ADPointCloudAggregator *_pcAggregator;
    ADJasperPointCloud *_aggregatedPointCloud;
    struct __CVBuffer { } *_processedJasper;
}

@property (retain, nonatomic) ADJasperPearlInFieldCalibrationExecutorParameters *executorParameters;
@property (retain, nonatomic) NSData *pceCalib;
@property (retain, nonatomic) ADCameraCalibration *pearlInfraredCameraCalibration;

- (void)dealloc;
- (long long)prepare;
- (void).cxx_destruct;
- (long long)executeWithInterSessionData:(id)a0 outResult:(id)a1;
- (long long)executeWithInterSessionData:(id)a0 result:(id *)a1;
- (long long)executeWithJasperPearlInterSessionData:(id)a0 result:(id)a1;
- (id)extractIRSensorCalibFromLastSyncMatch;
- (struct { void /* unknown type, empty encoding */ x0[4]; })extractJasperToPearlCalibFromLastSyncMatch;
- (id)extractPearlInputsFromLastSyncMatch;
- (struct { void /* unknown type, empty encoding */ x0[4]; })extractPearlPrevPoseFromLastSyncMatch;
- (id)initWithParameters:(id)a0 pceCalib:(id)a1;
- (id)initWithPceCalib:(id)a0;
- (void)logJPCInputs:(id)a0;
- (void)logJasperAggPC:(id)a0 timestamp:(double)a1;
- (void)logPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a0 logMessagePrefix:(id)a1;
- (long long)numberOfExecutionSteps;
- (id)overrideCVCalIntrinsicsWithPCECalibIntrinsics:(id)a0 temperature:(float)a1;
- (void)printOutResults:(id)a0;
- (long long)pushJasperPointCloud:(id)a0 timestamp:(double)a1 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 jasperToPearlOperationalTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;
- (long long)pushJasperPointCloud:(id)a0 timestamp:(double)a1 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 jasperToPearlTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3;
- (long long)pushPearlDepth:(struct __CVBuffer { } *)a0 pearlDx:(struct __CVBuffer { } *)a1 pearlDy:(struct __CVBuffer { } *)a2 pearlScore:(struct __CVBuffer { } *)a3 timestamp:(double)a4 metadata:(id)a5 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a6 prevPose:(struct { void /* unknown type, empty encoding */ x0[4]; })a7;
- (long long)pushPearlDepth:(struct __CVBuffer { } *)a0 pearlDx:(struct __CVBuffer { } *)a1 pearlDy:(struct __CVBuffer { } *)a2 pearlScore:(struct __CVBuffer { } *)a3 timestamp:(double)a4 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a5 pearlSensorCalibration:(id)a6;
- (long long)pushPearlDepth:(struct __CVBuffer { } *)a0 timestamp:(double)a1 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a2 temperature:(float)a3 irSensorOperationalCalibration:(id)a4;
- (BOOL)shouldExecuteWithInterSessionDataRun:(long long *)a0;

@end

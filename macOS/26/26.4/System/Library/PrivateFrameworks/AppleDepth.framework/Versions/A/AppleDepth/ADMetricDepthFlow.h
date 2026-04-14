@class ADFlowFrameOutputPool, NSString, ADStreamSync, ADMetricDepthExecutor;

@interface ADMetricDepthFlow : ADFlow <ADFlowColorConsumer, ADFlowSecondaryColorConsumer, ADFlowPointCloudConsumer, ADFlowPearlConsumer> {
    ADStreamSync *_streamSync;
    ADFlowFrameOutputPool *_frameOutputPool;
}

@property (readonly, retain, nonatomic) ADMetricDepthExecutor *executor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)processIfMatch:(id)a0;
- (id)initWithExecutor:(id)a0;
- (id)initWithExecutor:(id)a0 calculateConfidenceMap:(BOOL)a1 calculateConfidenceLevels:(BOOL)a2;
- (void)pushColor:(struct __CVBuffer { } *)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 calibration:(id)a2 metadata:(id)a3 timestamp:(double)a4;
- (void)pushPearlDepth:(struct __CVBuffer { } *)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 depthCalibration:(id)a2 irToDepthTransform:(struct { void /* unknown type, empty encoding */ x0[4]; })a3 timestamp:(double)a4;
- (void)pushPointCloud:(id)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 calibration:(id)a2 timestamp:(double)a3;
- (void)pushSecondaryColor:(struct __CVBuffer { } *)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 calibration:(id)a2 timestamp:(double)a3;

@end

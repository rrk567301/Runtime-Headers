@class ADVisualDepthExecutorParameters, ADVisualDepthMeshInput, ADVisualDepthBuffer, ADVisualDepthKeyframeInput, ADCameraCalibration, ADVisualDepthPipeline;
@protocol MTLCommandQueue, MTLDevice, MTLSharedEventSPI;

@interface ADVisualDepthExecutor : ADExecutor {
    ADVisualDepthBuffer *_lastReceivedPrimaryColor;
    ADVisualDepthBuffer *_lastReceivedSecondaryColor;
    double _lastReceivedPrimaryColorTimestamp;
    struct { void /* unknown type, empty encoding */ columns[4]; } _lastReceivedPrimaryColorPose;
    ADVisualDepthMeshInput *_meshInput;
    ADVisualDepthKeyframeInput *_keyframeInput;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _vdColorInputCrop;
    BOOL _requiredVDInit;
    struct CGSize { double width; double height; } _visualDepthResolution;
    id<MTLDevice> _mtlDevice;
    id<MTLCommandQueue> _mtlCommandQueue;
    id<MTLSharedEventSPI> _completionEvent;
    struct __CVBuffer { } *_vdSqrtInfoPrimaryMeshInput;
    struct __CVBuffer { } *_vdSqrtInfoSecondaryMeshInput;
    struct __CVBuffer { } *_vdPrimaryMeshIntermediate;
    struct __CVBuffer { } *_vdSecondaryMeshIntermediate;
    struct __CVBuffer { } *_vdPrimaryInput;
    struct __CVBuffer { } *_vdPrimaryItm1;
    struct __CVBuffer { } *_vdPrimaryItm2;
    struct __CVBuffer { } *_vdSecondaryInput;
    struct __CVBuffer { } *_vdSecondaryItm1;
    struct __CVBuffer { } *_vdSecondaryItm2;
    struct __CVBuffer { } *_vdPrimaryDepthOutput;
    struct __CVBuffer { } *_vdPrimaryConfOutput;
    struct __CVBuffer { } *_vdPrimaryOcclusionOutput;
    struct __CVBuffer { } *_vdSecondaryDepthOutput;
    struct __CVBuffer { } *_vdSecondaryConfOutput;
    struct __CVBuffer { } *_vdSecondaryOcclusionOutput;
}

@property (retain, nonatomic) ADVisualDepthExecutorParameters *executorParameters;
@property (retain, nonatomic) ADCameraCalibration *primaryColorCameraCalibration;
@property (retain, nonatomic) ADCameraCalibration *secondaryColorCameraCalibration;
@property (retain, nonatomic) ADCameraCalibration *primaryDisparityCalibration;
@property (retain, nonatomic) ADCameraCalibration *secondaryDisparityCalibration;
@property (retain, nonatomic) ADCameraCalibration *primaryTargetCameraCalibration;
@property (retain, nonatomic) ADCameraCalibration *secondaryTargetCameraCalibration;
@property (readonly, retain, nonatomic) ADVisualDepthPipeline *pipeline;

- (id)execute;
- (void)dealloc;
- (void).cxx_destruct;
- (void)checkProjectionChanged:(id)a0 newCalib:(id)a1;
- (void)deallocateVisualDepthBuffers;
- (id)executeForTimestamp:(double)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1;
- (long long)executeForTimestamp:(double)a0 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a1 output:(id)a2;
- (long long)executeWithOutput:(id)a0;
- (id)getIntermediates;
- (id)initWithOutputDimensions:(struct CGSize { double x0; double x1; })a0;
- (id)initWithWorkingSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isReadyForExecution;
- (long long)numberOfExecutionSteps;
- (long long)prepareForInputRoi:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (long long)pushKeyframes:(id)a0;
- (long long)pushMesh:(id)a0;
- (long long)pushPrimaryColorImage:(struct __CVBuffer { } *)a0 timestamp:(double)a1 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (long long)pushSecondaryColorImage:(struct __CVBuffer { } *)a0 timestamp:(double)a1 pose:(struct { void /* unknown type, empty encoding */ x0[4]; })a2;
- (void)updatePixelBufferAllocationForImageDescriptor:(id)a0 pixelBuffer:(struct __CVBuffer **)a1;

@end

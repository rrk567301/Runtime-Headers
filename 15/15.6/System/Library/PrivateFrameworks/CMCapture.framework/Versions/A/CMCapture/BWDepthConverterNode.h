@class NSString, NSDictionary, NSObject, BWStillImageNodeConfiguration;
@protocol OS_dispatch_queue, DepthProcessor;

@interface BWDepthConverterNode : BWNode {
    NSDictionary *_sensorIDDictionary;
    NSDictionary *_cameraInfoByPortType;
    char _forceCPath;
    struct { int width; int height; } _inputDepthDimensions;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    unsigned int _outputFormat;
    struct { int width; int height; } _outputDimensions;
    char _backPressureDrivenPipelining;
    struct { void /* unknown type, empty encoding */ columns[4]; } _identityExtrinsicMatrix;
    int _depthAccuracy;
    char _depthLensDistortionCorrectionPolynomialsAvailable;
    struct { float forwardOrders[8]; float inverseOrders[8]; } _depthLensDistortionCorrectionBasePolynomial;
    struct { float forwardOrders[8]; float inverseOrders[8]; } _depthLensDistortionCorrectionDynamicPolynomial;
    float _depthRelativePixelSizeInMicrons;
    struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } _inputCropRect;
    struct opaqueCMFormatDescription { } *_unfilteredDepthFormatDescription;
    struct OpaqueVTPixelTransferSession { } *_unfilteredDepthTransferSession;
    char _depthIsAlwaysHighQuality;
    char _depthOriginatesFromNeuralNetwork;
    struct __CVBuffer { } *_fixedPointScaledIntermediateBuffer;
    struct __CVBuffer { } *_fixedPointRotatedIntermediateBuffer;
    struct __CVBuffer { } *_filteringInputBuffer;
    struct __CVBuffer { } *_streamingFilteringScaledDepthInputBuffer;
    struct __CVBuffer { } *_streamingFilteringScaledDepthOutputBuffer;
    struct __CVBuffer { } *_filteringScaledYUVBuffer;
    struct __CVBuffer { } *_filteringOutputBuffer;
    char _conversionAfterFilteringRequired;
    char _depthFromInfrared;
    NSString *_depthProcessorClassName;
    struct CMPhotoScaleAndRotateSession { } *_scaler;
    id<DepthProcessor> _depthProcessor;
    int _depthProcessorVersion;
    int _depthBufferOriginalExifOrientation;
    int _depthBufferFinalExifOrientation;
    NSObject<OS_dispatch_queue> *_depthProcessorWorkerQueue;
    BWStillImageNodeConfiguration *_stillImageNodeConfiguration;
}

@property (nonatomic) char streamingGDRFilteringEnabled;
@property (nonatomic) char stillGDRFilteringSupportEnabled;
@property (nonatomic) char streamingSMPFilteringEnabled;
@property (nonatomic) unsigned int outputFormat;
@property (nonatomic) struct { int x0; int x1; } outputDimensions;
@property (nonatomic) int baseRotationDegrees;
@property (nonatomic) int rotationDegrees;
@property (nonatomic) char mirroringEnabled;
@property (nonatomic) int horizontalSensorBinningFactor;
@property (nonatomic) int verticalSensorBinningFactor;
@property (nonatomic) char providesUnfilteredDepthAsAttachedMedia;
@property (nonatomic) char skipSmartStyleBuffer;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (id)initWithStillImageNodeConfiguration:(id)a0 cameraInfoByPortType:(id)a1 sensorIDDictionary:(id)a2 rgbPersonSegmentationEnabled:(char)a3 depthIsAlwaysHighQuality:(char)a4 depthOriginatesFromNeuralNetwork:(char)a5 backPressureDrivenPipelining:(char)a6;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;

@end

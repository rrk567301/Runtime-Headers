@class BWPixelBufferPool, NSDictionary, NSMutableDictionary, BWStillImageNodeConfiguration;

@interface BWStillImageScalerNode : BWNode {
    BWStillImageNodeConfiguration *_nodeConfiguration;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    int _poolBaseCapacity;
    BWPixelBufferPool *_pool;
    struct OpaqueVTPixelTransferSession { } *_scalingSession;
    BOOL _blackFillingRequired;
    BOOL _enforcesZoomingForPortraitCaptures;
    NSDictionary *_mainImageDownscalingFactorByAttachedMediaKey;
    NSDictionary *_outputSizeByAttachedMediaKey;
    NSMutableDictionary *_pixelBufferPoolByAttachedMediaKey;
    struct OpaqueVTPixelTransferSession { } *_attachedMediaScalingSession;
    BOOL _backPressureDrivenPipelining;
    struct { int width; int height; } _resizedOutputDimensions;
    BOOL _preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
}

@property (nonatomic) struct { int x0; int x1; } resizedOutputDimensions;

+ (void)initialize;

- (void)setMainImageDownscalingFactorByAttachedMediaKey:(id)a0;
- (id)nodeType;
- (id)nodeSubType;
- (void)setBackPressureDrivenPipelining:(BOOL)a0;
- (BOOL)backPressureDrivenPipelining;
- (void)setPreferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer:(BOOL)a0;
- (BOOL)enforcesZoomingForPortraitCaptures;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (BOOL)blackFillingRequired;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)mainImageDownscalingFactorByAttachedMediaKey;
- (BOOL)preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setBlackFillingRequired:(BOOL)a0;
- (id)initWithBasePoolCapacity:(int)a0 nodeConfiguration:(id)a1;
- (id)outputSizeByAttachedMediaKey;
- (void)dealloc;
- (void)setOutputSizeByAttachedMediaKey:(id)a0;
- (void)setEnforcesZoomingForPortraitCaptures:(BOOL)a0;

@end

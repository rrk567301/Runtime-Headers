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

- (id)nodeSubType;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)setOutputSizeByAttachedMediaKey:(id)a0;
- (BOOL)blackFillingRequired;
- (void)setMainImageDownscalingFactorByAttachedMediaKey:(id)a0;
- (void)setBlackFillingRequired:(BOOL)a0;
- (id)outputSizeByAttachedMediaKey;
- (id)mainImageDownscalingFactorByAttachedMediaKey;
- (BOOL)backPressureDrivenPipelining;
- (void)setBackPressureDrivenPipelining:(BOOL)a0;
- (BOOL)enforcesZoomingForPortraitCaptures;
- (BOOL)preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
- (id)initWithBasePoolCapacity:(int)a0 nodeConfiguration:(id)a1;
- (void)setPreferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer:(BOOL)a0;
- (void)setEnforcesZoomingForPortraitCaptures:(BOOL)a0;
- (void)dealloc;

@end

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

- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setBackPressureDrivenPipelining:(BOOL)a0;
- (id)nodeType;
- (void)setOutputSizeByAttachedMediaKey:(id)a0;
- (void)dealloc;
- (id)outputSizeByAttachedMediaKey;
- (void)setBlackFillingRequired:(BOOL)a0;
- (id)initWithBasePoolCapacity:(int)a0 nodeConfiguration:(id)a1;
- (BOOL)preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)mainImageDownscalingFactorByAttachedMediaKey;
- (BOOL)blackFillingRequired;
- (BOOL)enforcesZoomingForPortraitCaptures;
- (void)setEnforcesZoomingForPortraitCaptures:(BOOL)a0;
- (void)setMainImageDownscalingFactorByAttachedMediaKey:(id)a0;
- (BOOL)backPressureDrivenPipelining;
- (void)setPreferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer:(BOOL)a0;

@end

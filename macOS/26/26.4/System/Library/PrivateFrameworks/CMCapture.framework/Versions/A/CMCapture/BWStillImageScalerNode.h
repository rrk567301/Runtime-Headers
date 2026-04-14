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

- (void)setEnforcesZoomingForPortraitCaptures:(BOOL)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)setPreferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer:(BOOL)a0;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)mainImageDownscalingFactorByAttachedMediaKey;
- (void)setOutputSizeByAttachedMediaKey:(id)a0;
- (id)nodeSubType;
- (id)initWithBasePoolCapacity:(int)a0 nodeConfiguration:(id)a1;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setBackPressureDrivenPipelining:(BOOL)a0;
- (void)setMainImageDownscalingFactorByAttachedMediaKey:(id)a0;
- (id)nodeType;
- (id)outputSizeByAttachedMediaKey;
- (BOOL)backPressureDrivenPipelining;
- (BOOL)preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
- (void)setBlackFillingRequired:(BOOL)a0;
- (BOOL)blackFillingRequired;
- (void)dealloc;
- (BOOL)enforcesZoomingForPortraitCaptures;

@end

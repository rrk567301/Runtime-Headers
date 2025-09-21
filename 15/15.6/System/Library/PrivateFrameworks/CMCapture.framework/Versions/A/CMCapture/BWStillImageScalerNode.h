@class BWPixelBufferPool, NSDictionary, NSMutableDictionary, BWStillImageNodeConfiguration;

@interface BWStillImageScalerNode : BWNode {
    BWStillImageNodeConfiguration *_nodeConfiguration;
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    int _poolBaseCapacity;
    BWPixelBufferPool *_pool;
    struct OpaqueVTPixelTransferSession { } *_scalingSession;
    char _blackFillingRequired;
    char _enforcesZoomingForPortraitCaptures;
    NSDictionary *_mainImageDownscalingFactorByAttachedMediaKey;
    NSDictionary *_outputSizeByAttachedMediaKey;
    NSMutableDictionary *_pixelBufferPoolByAttachedMediaKey;
    struct OpaqueVTPixelTransferSession { } *_attachedMediaScalingSession;
    char _backPressureDrivenPipelining;
    struct { int width; int height; } _resizedOutputDimensions;
    char _preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
}

@property (nonatomic) struct { int x0; int x1; } resizedOutputDimensions;

+ (void)initialize;

- (void)dealloc;
- (id)nodeType;
- (char)backPressureDrivenPipelining;
- (char)blackFillingRequired;
- (void)didReachEndOfDataForInput:(id)a0;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (char)enforcesZoomingForPortraitCaptures;
- (id)initWithBasePoolCapacity:(int)a0 nodeConfiguration:(id)a1;
- (id)mainImageDownscalingFactorByAttachedMediaKey;
- (id)nodeSubType;
- (id)outputSizeByAttachedMediaKey;
- (char)preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setBackPressureDrivenPipelining:(char)a0;
- (void)setBlackFillingRequired:(char)a0;
- (void)setEnforcesZoomingForPortraitCaptures:(char)a0;
- (void)setMainImageDownscalingFactorByAttachedMediaKey:(id)a0;
- (void)setOutputSizeByAttachedMediaKey:(id)a0;
- (void)setPreferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer:(char)a0;

@end

@class NSDictionary, NSMutableDictionary;

@interface BWMatteMediaScalerNode : BWNode {
    struct opaqueCMFormatDescription { } *_outputFormatDescription;
    int _poolBaseCapacity;
    NSDictionary *_mainImageDownscalingFactorByAttachedMediaKey;
    NSDictionary *_outputSizeByAttachedMediaKey;
    NSMutableDictionary *_pixelBufferPoolByAttachedMediaKey;
    struct OpaqueVTPixelTransferSession { } *_attachedMediaScalingSession;
    BOOL _backPressureDrivenPipelining;
    BOOL _preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
}

+ (void)initialize;

- (id)nodeSubType;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)setOutputSizeByAttachedMediaKey:(id)a0;
- (void)setMainImageDownscalingFactorByAttachedMediaKey:(id)a0;
- (id)outputSizeByAttachedMediaKey;
- (id)mainImageDownscalingFactorByAttachedMediaKey;
- (BOOL)backPressureDrivenPipelining;
- (void)setBackPressureDrivenPipelining:(BOOL)a0;
- (BOOL)preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
- (void)setPreferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer:(BOOL)a0;
- (void)dealloc;
- (id)initWithBasePoolCapacity:(int)a0;

@end

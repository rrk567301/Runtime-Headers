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

- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (id)nodeSubType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)setBackPressureDrivenPipelining:(BOOL)a0;
- (id)nodeType;
- (void)setOutputSizeByAttachedMediaKey:(id)a0;
- (void)dealloc;
- (id)outputSizeByAttachedMediaKey;
- (BOOL)preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (id)mainImageDownscalingFactorByAttachedMediaKey;
- (void)setMainImageDownscalingFactorByAttachedMediaKey:(id)a0;
- (BOOL)backPressureDrivenPipelining;
- (void)setPreferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer:(BOOL)a0;
- (id)initWithBasePoolCapacity:(int)a0;

@end

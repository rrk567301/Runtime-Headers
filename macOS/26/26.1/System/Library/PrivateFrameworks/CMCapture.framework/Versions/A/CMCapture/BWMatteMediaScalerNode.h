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

- (id)nodeType;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (BOOL)backPressureDrivenPipelining;
- (id)nodeSubType;
- (void)didSelectFormat:(id)a0 forInput:(id)a1;
- (void)didReachEndOfDataForConfigurationID:(id)a0 input:(id)a1;
- (void)setPreferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer:(BOOL)a0;
- (void)setBackPressureDrivenPipelining:(BOOL)a0;
- (id)outputSizeByAttachedMediaKey;
- (void)dealloc;
- (BOOL)preferMainImageDownscalingFactorByAttachedMediaKeyFromSampleBuffer;
- (void)setOutputSizeByAttachedMediaKey:(id)a0;
- (void)setMainImageDownscalingFactorByAttachedMediaKey:(id)a0;
- (id)mainImageDownscalingFactorByAttachedMediaKey;
- (id)initWithBasePoolCapacity:(int)a0;

@end

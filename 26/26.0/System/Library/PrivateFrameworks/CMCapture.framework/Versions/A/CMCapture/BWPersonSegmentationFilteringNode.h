@class FigSemanticStyleFilteringV1;
@protocol MTLCommandQueue;

@interface BWPersonSegmentationFilteringNode : BWNode {
    int _gpuPriority;
    BOOL _frameRateUpsamplingEnabled;
    BOOL _alignsMaskWithPrimaryCaptureRect;
    BOOL _inferencePreviouslyAttached;
    unsigned int _inputOrientationRelativeToSensor;
    FigSemanticStyleFilteringV1 *_segmentationMaskFilter;
    struct opaqueCMSampleBuffer { } *_cachedFilteredMaskSampleBuffer;
    struct opaqueCMFormatDescription { } *_filteredMaskFormatDescription;
    id<MTLCommandQueue> _commandQueue;
}

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)didReachEndOfDataForInput:(id)a0;
- (id)nodeSubType;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (id)nodeType;
- (void)dealloc;
- (BOOL)alignsMaskWithPrimaryCaptureRect;
- (id)initWithGPUPriority:(int)a0 frameRateUpsamplingEnabled:(BOOL)a1 metalCommandQueue:(id)a2;
- (unsigned int)inputOrientationRelativeToSensor;
- (void)setAlignsMaskWithPrimaryCaptureRect:(BOOL)a0;
- (void)setInputOrientationRelativeToSensor:(unsigned int)a0;

@end

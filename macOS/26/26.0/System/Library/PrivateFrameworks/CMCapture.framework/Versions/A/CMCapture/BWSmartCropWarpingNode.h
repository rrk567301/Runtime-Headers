@class NSString;
@protocol RTSCProcessor, BWSmartCropHomographyProvider;

@interface BWSmartCropWarpingNode : BWNode <BWDynamicAspectRatioChangeSource> {
    id<BWSmartCropHomographyProvider> _homographyProvider;
    id<RTSCProcessor> _rtscProcessor;
    struct { int width; int height; } _formatDimensions;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _bufferServicingLock;
}

@property int activeAspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;

- (void)didSelectFormat:(id)a0 forInput:(id)a1 forAttachedMediaKey:(id)a2;
- (void)prepareForCurrentConfigurationToBecomeLive;
- (void)renderSampleBuffer:(struct opaqueCMSampleBuffer { } *)a0 forInput:(id)a1;
- (void)dealloc;
- (int)_initRTSCProcessorWithOutputDimensions:(struct { int x0; int x1; })a0;
- (int)_updateDetectedObjectsInfo:(id)a0;
- (void)_updateOutputRequirements;

@end

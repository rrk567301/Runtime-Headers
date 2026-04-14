@class PTMetalContext, PTEffectResources, PTEffectRenderer, PTEffectDescriptor, PTHumanDetections;

@interface PTEffect : NSObject {
    PTEffectRenderer *_delegate;
    PTMetalContext *_metalContext;
    BOOL _hasExternalCommandQueue;
    int _frameId;
    struct OpaqueVTPixelTransferSession { } *_pixelTransferSession;
    PTEffectResources *_resources;
    PTEffectDescriptor *_effectDescriptor;
    BOOL _rebuildEffect;
    long long _debugType;
    PTHumanDetections *_humanDetections;
    double _lastFrameTime;
    double _lastDetectionUpdate;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _delegateLock;
    _Atomic BOOL _reset;
}

@property long long effectQuality;

+ (int)prewarmWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 effectType:(unsigned long long)a2 sharedResources:(id)a3;
+ (void)_createQueuesIfNotProvidedOnDescriptor:(id)a0 orCopyFromPreviousDescriptor:(id)a1;
+ (void)disableAsynchronousWork;
+ (struct PTEffectPixelBufferDescriptor { struct CGSize { double x0; double x1; } x0; unsigned int x1; })personSegmentationMatteFormatForColorSize:(struct CGSize { double x0; double x1; })a0;
+ (int)prewarmForCameraCaptured;

- (void)setDebug:(long long)a0;
- (id)initWithDescriptor:(id)a0;
- (void)reset;
- (void)dealloc;
- (void)resetIfNeeded;
- (void).cxx_destruct;
- (int)render:(id)a0;
- (int)setEffectType:(unsigned long long)a0;
- (id)activeReactions;
- (BOOL)isRenderRequiredForRequest:(id)a0;
- (int)reconfigure:(id)a0;
- (id)reconfigureWithNewSize:(id)a0;
- (int)_setEffectType:(unsigned long long)a0;
- (int)waitForInitialization;
- (void)_setEffectQuality:(long long)a0;
- (id)initWithDescriptor:(id)a0 sharedResources:(id)a1;
- (id)initWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 availableEffectTypes:(unsigned long long)a2 activeEffectType:(unsigned long long)a3 effectQuality:(long long)a4;
- (id)initWithFormat:(struct opaqueCMFormatDescription { } *)a0 metalCommandQueue:(id)a1 availableEffectTypes:(unsigned long long)a2 activeEffectType:(unsigned long long)a3 prewarmOnly:(BOOL)a4 effectQuality:(long long)a5;
- (void)keepOldDelegateAlive:(id)a0;
- (int)reconfigure:(id)a0 isInitialized:(BOOL)a1;
- (void)removeAllActiveReactions;
- (int)renderReaction:(id)a0 effectRenderRequest:(id)a1;
- (int)updateEffectDelegate:(BOOL)a0;
- (void)updateHumanDetections:(id)a0;
- (BOOL)validPixelBuffer:(struct __CVBuffer { } *)a0;
- (int)validateRenderRequest:(id)a0 reactionOnly:(BOOL)a1;

@end

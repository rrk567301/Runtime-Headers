@class MTLRenderPassDescriptor, NSString, CADisplayLink, NSDate;
@protocol MTLDevice, MTLTexture, MTLCommandQueue, MTLRenderPipelineState;

@interface SUICEdgeLightMaskMetalLayer : CAMetalLayer <CAAnimationDelegate> {
    id<MTLDevice> _device;
    NSDate *_burstStartDate;
    CADisplayLink *_displayLink;
    id<MTLCommandQueue> _commandQueue;
    id<MTLTexture> _noiseTexture;
    id<MTLRenderPipelineState> _renderPipeline;
    MTLRenderPassDescriptor *_renderPassDesc;
    SUICEdgeLightMaskMetalLayer *_baseLayer;
    id /* block */ _offCompletion;
    id /* block */ _onCompletion;
    struct { void /* unknown type, empty encoding */ noiseScale; void /* unknown type, empty encoding */ offset; void /* unknown type, empty encoding */ noiseOffset; } _vertUniforms;
    struct { void /* unknown type, empty encoding */ burstCenter; void /* unknown type, blank encoding */ falloffScale; void /* unknown type, blank encoding */ time; void /* unknown type, blank encoding */ noiseRotation; } _fragUniforms;
    struct { void /* unknown type, empty encoding */ resolution; float yxRatio; float screenRadius; float falloffCoefficient; void /* unknown type, blank encoding */ flameScale; void /* unknown type, blank encoding */ burstOpacity; } _layout;
    struct { struct { unsigned long long physicsRate; int maxPhysicsIterationsPerFrame; float physicsTickDelta; float framerateEnergyModifier; float micPowerLevel; float chipRandomOffset[33]; float chipRotation; BOOL drawingVeryLastFrame; BOOL reduceMotion; } common; struct { float value; float curVelocity; float maxAcceleration; float springAmount; } flameSpring; struct { float value; float curVelocity; float maxAcceleration; float springAmount; } onSpring; struct { float value; float curVelocity; float maxAcceleration; float springAmount; } volumeSpring; struct { float value; float curVelocity; float maxAcceleration; float springAmount; } glowSpring; unsigned long long zoning; BOOL isBuddy; struct { float value; float curVelocity; float maxAcceleration; float springAmount; } energySpring; struct { float value; float curVelocity; float maxAcceleration; float springAmount; } lightnessSpring; float flameDrawnSize; void /* unknown type, empty encoding */ lights[11]; } _physics;
    unsigned long long _burstAnimationType;
    void /* unknown type, empty encoding */ _buttonCenter;
    float _volumeLinearPowerLevel;
    float _minPowerLevel;
    float _customFlameScale;
    BOOL _animating;
    BOOL _burstModeHasBeenSet;
    BOOL _shouldBurst;
    BOOL _fullBorder;
    unsigned long long _firstFrameSignpost;
    BOOL _firstFrame;
    int _maxPhysicsIterationsBeforePerformanceOptimization;
    long long _framesPerSecondBeforePerformanceOptimization;
}

@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)prewarm;
+ (BOOL)currentIdiomDefaultsToFullBorder;

- (id)init;
- (void).cxx_destruct;
- (void)stopVolumeInput;
- (void)_invalidate;
- (void)animationDidStop:(id)a0 finished:(BOOL)a1;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setScreen:(id)a0;
- (void)updateVolumeInputdB:(float)a0;
- (id)initWithCommandQueue:(id)a0;
- (void)animateOffWithCompletion:(id /* block */)a0;
- (void)animateOn;
- (id)initWithFullBorder:(BOOL)a0;
- (void)setInputAveragePowerLevel:(float)a0 withPeakPowerLevel:(float)a1;
- (void)setMinimumPowerLevel:(float)a0;
- (void)_loadMetalState;
- (void)_commonInitWithCommandQueue:(id)a0 fullBorder:(BOOL)a1;
- (void)_drawFrame:(id)a0;
- (id)_getCommandQueue;
- (id)_getNoiseTexture;
- (void)_loadMetalPipelines;
- (void)_startScaleOutAnimation;
- (void)_updateForUIIdiom;
- (void)_updateMetalRatios:(struct CGSize { double x0; double x1; })a0;
- (void)animateOnWithCompletion:(id /* block */)a0;
- (void)endReducedFramerateForPerformance;
- (id)initWithBaseEdgeLightLayer:(id)a0;
- (void)setBurstOpacity:(float)a0;
- (void)setBurstStartPosition:(unsigned long long)a0;
- (void)setBurstStartPositionCustom:(struct CGPoint { double x0; double x1; })a0;
- (void)setFlameScale:(float)a0;
- (void)startReducedFramerateForPerformance;

@end

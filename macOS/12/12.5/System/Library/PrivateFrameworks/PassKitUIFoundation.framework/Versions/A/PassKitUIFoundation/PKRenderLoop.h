@protocol PKRenderLoopDelegate;

@interface PKRenderLoop : NSObject {
    struct __CVDisplayLink { } *_displayLink;
    BOOL _effectivePaused;
    BOOL _background;
    BOOL _delegateObservesForcingPause;
    BOOL _lastForcingPauseNotification;
}

@property (readonly, nonatomic) unsigned int displayID;
@property (readonly, nonatomic, getter=isInvalidated) BOOL invalidated;
@property (readonly, nonatomic, getter=isDrawing) BOOL drawing;
@property (nonatomic) BOOL inApplicationContext;
@property (readonly, nonatomic) long long preferredFramesPerSecond;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (readonly, nonatomic, getter=isForcingPause) BOOL forcingPause;
@property (weak, nonatomic) id<PKRenderLoopDelegate> delegate;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)_drawAtTime:(double)a0;
- (void)_updateApplicationState;
- (void)_updateEffectivePausedState;
- (void)_willDraw;
- (void)_didDraw;
- (BOOL)attachToDisplay:(unsigned int)a0;

@end

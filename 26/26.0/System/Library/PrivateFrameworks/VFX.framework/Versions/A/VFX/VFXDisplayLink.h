@class CAMetalDisplayLink;

@interface VFXDisplayLink : NSObject <CAMetalDisplayLinkDelegate> {
    CAMetalDisplayLink *_caMetalDisplayLink;
    _Atomic double _lastDisplayLinkTime;
    id /* block */ _block;
    BOOL _lowLatency;
    double _lastFrameTime;
}

@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) float preferredFrameRate;
@property (nonatomic, getter=isLowLatency) BOOL lowLatency;

- (void)setNeedsDisplay;
- (void)dealloc;
- (void)invalidate;
- (id)init;
- (void)metalDisplayLink:(id)a0 needsUpdate:(id)a1;
- (BOOL)setPaused:(BOOL)a0 nextFrameTimeHint:(double)a1 lastUpdate:(double)a2;
- (id)initWithLayer:(id)a0 runLoop:(id)a1 block:(id /* block */)a2;

@end

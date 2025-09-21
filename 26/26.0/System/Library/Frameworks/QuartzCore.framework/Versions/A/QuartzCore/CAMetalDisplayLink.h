@protocol CAMetalDisplayLinkDelegate;

@interface CAMetalDisplayLink : NSObject {
    void *_impl;
}

@property (weak, nonatomic) id<CAMetalDisplayLinkDelegate> delegate;
@property (nonatomic) float preferredFrameLatency;
@property (nonatomic) struct CAFrameRateRange { float x0; float x1; float x2; } preferredFrameRateRange;
@property (nonatomic, getter=isPaused) BOOL paused;

- (void)dealloc;
- (void)invalidate;
- (void)removeFromRunLoop:(id)a0 forMode:(id)a1;
- (void)addToRunLoop:(id)a0 forMode:(id)a1;
- (void).cxx_destruct;
- (id)_initWithMetalLinkItem:(void *)a0;
- (id)initWithMetalLayer:(id)a0;

@end

@class CADisplayLink;

@interface PKDisplayLinkObserver : NSObject {
    CADisplayLink *_displayLink;
    id /* block */ _handler;
}

- (id)initWithHandler:(id /* block */)a0;
- (BOOL)stop;
- (void).cxx_destruct;
- (void)dealloc;
- (void)_displayLinkHandler:(id)a0;
- (BOOL)startWithPreferredFramesPerSecond:(struct CAFrameRateRange { float x0; float x1; float x2; })a0 addToRunLoop:(id)a1 forMode:(id)a2;

@end

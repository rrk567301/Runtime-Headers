@class NSView, SUICEdgeLightMaskMetalLayer;

@interface SiriUIEdgeLightWindow : NSWindow {
    NSView *_edgeLightView;
    SUICEdgeLightMaskMetalLayer *_edgeLightLayer;
    id /* block */ _offCompletion;
}

@property (nonatomic) long long mode;

- (id)init;
- (void).cxx_destruct;
- (char)acceptsFirstResponder;
- (char)acceptsMouseMovedEvents;
- (char)ignoresMouseEvents;
- (void)setPowerLevel:(float)a0;
- (void)_stopAndCleanup;
- (void)animateToOffWithCompletion:(id /* block */)a0;

@end

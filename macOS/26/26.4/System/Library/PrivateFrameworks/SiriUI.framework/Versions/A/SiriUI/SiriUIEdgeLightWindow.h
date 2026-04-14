@class NSView, SUICEdgeLightMaskMetalLayer;

@interface SiriUIEdgeLightWindow : NSWindow {
    NSView *_edgeLightView;
    SUICEdgeLightMaskMetalLayer *_edgeLightLayer;
    id /* block */ _offCompletion;
}

@property (nonatomic) long long mode;

- (BOOL)acceptsFirstResponder;
- (void).cxx_destruct;
- (id)init;
- (BOOL)acceptsMouseMovedEvents;
- (BOOL)ignoresMouseEvents;
- (void)setPowerLevel:(float)a0;
- (void)_stopAndCleanup;
- (void)animateToOffWithCompletion:(id /* block */)a0;

@end

@interface SetupAssistantSupportUI.HelloView : NSView <CAMetalDisplayLinkDelegate> {
    void /* unknown type, empty encoding */ displayLink;
    void /* unknown type, empty encoding */ isPaused;
}

- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)viewDidMoveToWindow;
- (id)makeBackingLayer;
- (void)setFrameSize:(struct CGSize { double x0; double x1; })a0;
- (void)metalDisplayLink:(id)a0 needsUpdate:(id)a1;

@end

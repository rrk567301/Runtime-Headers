@interface SSFrameBufferAVConferenceRenderView : SSFrameBufferRenderView

@property struct CGImage { } *touchImageRef;
@property struct CGImage { } *forceTouchImageRef;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)drawLayer:(id)a0 inContext:(struct CGContext { } *)a1;
- (void)dealloc;
- (BOOL)wantsUpdateLayer;

@end

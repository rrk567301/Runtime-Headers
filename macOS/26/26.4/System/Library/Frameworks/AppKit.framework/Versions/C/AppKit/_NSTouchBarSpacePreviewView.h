@class CALayer, NSView;

@interface _NSTouchBarSpacePreviewView : NSView {
    CALayer *_dotsLayer;
    NSView *_backgroundView;
}

- (void)updateLayer;
- (void)layout;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (BOOL)wantsUpdateLayer;

@end

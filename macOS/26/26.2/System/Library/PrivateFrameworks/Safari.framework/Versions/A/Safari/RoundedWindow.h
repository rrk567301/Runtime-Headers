@class NSView, NSImage;

@interface RoundedWindow : NSWindow {
    NSView *_backdropView;
    NSImage *_cornerMaskImage;
}

@property (class, readonly, nonatomic) double defaultCornerRadius;
@property (class, readonly, nonatomic) BOOL shouldUseGlassBackdropView;

@property (nonatomic) double cornerRadius;

- (void).cxx_destruct;
- (id)_cornerMask;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(BOOL)a3;
- (id)_createBackdropViewWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateMaskImage;

@end

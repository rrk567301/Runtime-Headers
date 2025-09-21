@class NSImage, NSVisualEffectView;

@interface RoundedWindow : NSWindow {
    NSVisualEffectView *_backdropView;
    NSImage *_cornerMaskImage;
}

@property (class, readonly, nonatomic) double defaultCornerRadius;

@property (nonatomic) double cornerRadius;

- (void).cxx_destruct;
- (id)_cornerMask;
- (id)initWithContentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 styleMask:(unsigned long long)a1 backing:(unsigned long long)a2 defer:(char)a3;
- (void)_updateMaskImage;

@end

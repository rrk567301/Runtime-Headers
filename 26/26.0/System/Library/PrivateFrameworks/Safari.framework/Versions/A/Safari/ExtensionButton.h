@class NSImage;

@interface ExtensionButton : BadgedButton {
    NSImage *_originalImage;
    NSImage *_colorImage;
    NSImage *_grayscaleImage;
}

@property (nonatomic) BOOL showsImageInGrayscale;

- (void)viewWillMoveToWindow:(id)a0;
- (BOOL)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (int)_vibrancyBlendMode;
- (void)_windowChangedKeyState;
- (void)_updateShadow;

@end

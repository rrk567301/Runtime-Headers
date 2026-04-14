@class NSView, NSImage, CALayer, NSFont, NSGlassView;

@interface VKImageAnalysisButton : NSButton <VKCGlassContentViewDelegate>

@property (retain, nonatomic) NSView *imageLayerContainer;
@property (retain, nonatomic) CALayer *lightImageLayer;
@property (retain, nonatomic) CALayer *darkImageLayer;
@property (retain, nonatomic) NSView *visualEffectView;
@property (retain, nonatomic) NSGlassView *glassView;
@property (nonatomic) long long currentAdaptiveGlassAppearanceType;
@property (retain, nonatomic) NSView *selectedBackgroundView;
@property (retain, nonatomic) NSImage *_image;
@property (nonatomic, getter=isSelected) BOOL selected;
@property (readonly, nonatomic) double backgroundDiameter;
@property (retain, nonatomic) NSFont *customFont;

- (id)accessibilityTitle;
- (void)layout;
- (void)commonInit;
- (void)setBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToWindow;
- (void)setHidden:(BOOL)a0;
- (void).cxx_destruct;
- (void)updateLayer;
- (void)mouseDown:(id)a0;
- (BOOL)isFlipped;
- (struct CGSize { double x0; double x1; })intrinsicContentSize;
- (void)resetCursorRects;
- (BOOL)wantsLayer;
- (void)updateCornerRadius;
- (void)glassContentView:(id)a0 didChangeEffectiveAppearanceToType:(long long)a1;
- (void)updateGlyphColor;
- (void)updateSavedLayerContentsFromImage:(id)a0;
- (void)updateSelectedState;

@end

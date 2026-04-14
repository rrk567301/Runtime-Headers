@class UnifiedTabBarVisualEffectView, NSAppearance;

@interface UnifiedFieldBezelView : NSTextField {
    UnifiedTabBarVisualEffectView *_backingMaterial;
}

@property (class, readonly, nonatomic) long long clearBezelMaterial;

@property (nonatomic) unsigned long long browsingMode;
@property (retain, nonatomic) NSAppearance *titlebarAppearance;
@property (nonatomic) long long backingMaterial;

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)allowsVibrancy;
- (void)viewDidChangeEffectiveAppearance;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_finishInitialization;
- (void)_updateAppearance;
- (void)_updateBackingMaterial;
- (void)_setLayerBorderWidthIfNeeded:(double)a0;
- (BOOL)_usesDarkAppearance;

@end

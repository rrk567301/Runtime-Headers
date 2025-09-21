@interface AMSUICommonVisualEffectView : NSVisualEffectView

@property char wallpaperTint;

- (id)init;
- (void)viewDidChangeEffectiveAppearance;
- (void)_updateMaterial;

@end

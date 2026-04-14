@interface AMSUICommonVisualEffectView : NSVisualEffectView

@property BOOL wallpaperTint;

- (void)viewDidChangeEffectiveAppearance;
- (id)init;
- (void)_updateMaterial;

@end

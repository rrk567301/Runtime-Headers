@class NSImageView, NSVisualEffectView;

@interface StartPageViewItemVisualEffect : NSObject {
    NSVisualEffectView *_iconEffectView;
    NSVisualEffectView *_paletteEffectView;
    NSImageView *_paletteBackground;
    BOOL _hasBackgroundImage;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_backgroundChanged;
- (void)_appearanceChanged:(id)a0;
- (void)_updatePaletteBackground;
- (void)updateIconBackground;
- (BOOL)_backgroundImageExists;
- (void)_updatePaletteBackgroundWithAppearance:(id)a0;
- (void)createPaletteBackground:(id)a0;
- (void)updateIconBackground:(id)a0 hasBackgroundImage:(BOOL)a1;
- (void)updatePaletteBackground:(id)a0 hasBackgroundImage:(BOOL)a1;
- (void)setItemSelected:(BOOL)a0;

@end

@class NSString, NSImageView, NSVisualEffectView;
@protocol StartPageBackgroundImageIdentifierProvider;

@interface StartPageViewItemVisualEffect : NSObject {
    NSVisualEffectView *_iconEffectView;
    NSVisualEffectView *_paletteEffectView;
    NSImageView *_paletteBackground;
    char _hasBackgroundImage;
    NSString *_profileIdentifier;
}

@property (weak, nonatomic) id<StartPageBackgroundImageIdentifierProvider> backgroundImageIdentifierProvider;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_appearanceChanged:(id)a0;
- (void)_backgroundChanged;
- (char)_backgroundImageExists;
- (void)_updatePaletteBackground;
- (void)_updatePaletteBackgroundWithAppearance:(id)a0;
- (void)createPaletteBackground:(id)a0;
- (id)initWithBackgroundImageIdentifierProvider:(id)a0 profileIdentifier:(id)a1;
- (void)removePaletteBackground;
- (void)setItemSelected:(char)a0;
- (void)updateIconBackground;
- (void)updateIconBackground:(id)a0 hasBackgroundImage:(char)a1;
- (void)updatePaletteBackground:(id)a0 hasBackgroundImage:(char)a1;

@end

@class NSString, NSImage, BadgeView, WarningBadgeView;
@protocol BadgedButtonDelegate;

@interface BadgedButton : ButtonPlus {
    BadgeView *_badgeView;
    NSImage *_originalImage;
    char _showsWarningBadge;
    char _showsNewExtensionBadge;
    WarningBadgeView *_warningBadgeView;
}

@property (weak) id<BadgedButtonDelegate> delegate;
@property (nonatomic) struct CGSize { double width; double height; } badgeOutset;
@property (copy, nonatomic) NSString *badgeText;
@property (retain, nonatomic) NSImage *grayscaleImage;
@property (nonatomic) char showsImageInGrayscale;

+ (void)initialize;

- (void)dealloc;
- (void).cxx_destruct;
- (void)setImage:(id)a0;
- (void)setTitle:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (int)_vibrancyBlendMode;
- (void)_windowChangedKeyState;
- (id)accessibilityLabel;
- (id)accessibilityRoleDescription;
- (char)allowsVibrancy;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)isAccessibilityElement;
- (id)menuForEvent:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)viewDidMoveToSuperview;
- (void)viewWillMoveToWindow:(id)a0;
- (void)_updateMaxWidth;
- (void)_updateAccessibilityLabel;
- (void)_updateBadge;
- (void)_updateBadge:(id)a0 showing:(char)a1;
- (void)_updateShadow;
- (void)setShowsNewBadge:(char)a0;
- (void)setShowsWarningBadge:(char)a0;

@end

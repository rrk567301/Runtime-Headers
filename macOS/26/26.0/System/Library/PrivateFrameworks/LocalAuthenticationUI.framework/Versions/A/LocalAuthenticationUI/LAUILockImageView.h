@class NSImageView, CAShapeLayer, NSImage, NSLayoutConstraint;

@interface LAUILockImageView : NSView {
    NSImageView *_badgeImageView;
    NSLayoutConstraint *_badgeImageViewTopConstraint;
    NSLayoutConstraint *_badgeImageViewRightConstraint;
    NSLayoutConstraint *_badgeImageViewBottomConstraint;
    CAShapeLayer *_badgeMask;
    NSImageView *_badgeBackgroundImageView;
    CAShapeLayer *_badgeBackgroundLayer;
    NSImage *_customLockImage;
    struct CGPoint { double x; double y; } _badgeOffset;
    BOOL _isActive;
    NSImageView *_lockImageView;
    long long _style;
}

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)layout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)_setupView;
- (id)_imageForLayer:(struct { char x0[100]; char x1[100]; int x2; int x3; })a0;
- (void)setCustomLockImage:(id)a0 badgeOffset:(struct CGPoint { double x0; double x1; })a1;
- (void)_configureBadgeBackground;
- (void)_handleAppearanceChange:(id)a0;
- (void)_removeBadgeBackground;
- (void)_resizeBadgeBackground;
- (void)_resizeBadgeMask;
- (void)_resizeLayers;
- (void)_setStyle:(long long)a0 active:(BOOL)a1 forced:(BOOL)a2;
- (id)_tintColor:(int)a0;
- (void)_updateLockIconInsets;
- (void)setStyle:(long long)a0 active:(BOOL)a1;

@end

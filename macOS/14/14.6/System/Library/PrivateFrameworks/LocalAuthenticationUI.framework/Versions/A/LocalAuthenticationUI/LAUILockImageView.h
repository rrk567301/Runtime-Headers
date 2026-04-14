@class NSImageView;

@interface LAUILockImageView : NSView {
    NSImageView *_lockImageView;
    NSImageView *_badgeImageView;
}

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)_imageNamed:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_setupView;
- (id)_tintColor:(int)a0;
- (void)setStyle:(long long)a0 active:(BOOL)a1;

@end

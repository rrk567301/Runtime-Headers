@class NSString, BadgeView, WarningBadgeView;
@protocol BadgedButtonDelegate;

@interface BadgedButton : ButtonPlus {
    BadgeView *_badgeView;
    WarningBadgeView *_warningBadgeView;
    BOOL _showsWarningBadge;
    BOOL _showsNewExtensionBadge;
}

@property (weak) id<BadgedButtonDelegate> delegate;
@property (copy, nonatomic) NSString *badgeText;

+ (void)initialize;

- (id)accessibilityLabel;
- (void)_updateBadge;
- (BOOL)isAccessibilityElement;
- (void)setTitle:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)menuForEvent:(id)a0;
- (void)dealloc;
- (void).cxx_destruct;
- (void)viewDidMoveToSuperview;
- (id)accessibilityRoleDescription;
- (void)_updateAccessibilityLabel;
- (void)setShowsNewBadge:(BOOL)a0;
- (void)setShowsWarningBadge:(BOOL)a0;

@end

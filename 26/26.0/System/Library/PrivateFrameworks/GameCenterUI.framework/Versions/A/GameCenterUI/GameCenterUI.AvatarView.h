@class NSImage, _TtC12GameCenterUI11ArtworkView, NSImageView;

@interface GameCenterUI.AvatarView : GameCenterUI.BaseView

@property (nonatomic, readonly) _TtC12GameCenterUI11ArtworkView *artworkView;
@property (nonatomic, readonly) NSImageView *arcadeBadgeView;
@property (nonatomic, readonly) NSImageView *messagesBadgeView;
@property (nonatomic, retain) NSImage *image;
@property (nonatomic, retain) NSImage *avatarImage;
@property (nonatomic) BOOL isArcadeSubscriber;
@property (nonatomic) BOOL showMessagesBadge;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)showWithImage:(id)a0 isAnimationPermitted:(BOOL)a1;
- (void).cxx_destruct;
- (void)addBorderWithBorderWidth:(double)a0 color:(id)a1;
- (void)setImageWithImage:(id)a0 animated:(BOOL)a1;
- (void)showWithAvatarImage:(id)a0 isAnimationPermitted:(BOOL)a1;

@end

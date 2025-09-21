@class NSImageView, NSArray, _TtC12GameCenterUI22ActivityFeedSharedView, _TtC12GameCenterUI8BaseView;

@interface GameCenterUI.ActivityFeedArtworkView : GameCenterUI.BaseView {
    void /* function */ artworkViews;
}

@property (nonatomic, readonly) _TtC12GameCenterUI8BaseView *contentBackgroundView;
@property (nonatomic, readonly) _TtC12GameCenterUI22ActivityFeedSharedView *sharedView;
@property (nonatomic, readonly) NSArray *artworkViews;
@property (nonatomic, readonly) NSImageView *artworkContainer;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (void)prepareForReuse;
- (void).cxx_destruct;

@end

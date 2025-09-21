@interface MusicUI.TopSearchLockupComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ isHovered;
    void /* unknown type, empty encoding */ trackContentDescriptor;
    void /* unknown type, empty encoding */ menuPresenter;
    void /* unknown type, empty encoding */ artworkShape;
    void /* unknown type, empty encoding */ automaticReloadTriggers;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ subheadlineLabel;
    void /* unknown type, empty encoding */ headlineLabel;
    void /* unknown type, empty encoding */ gradientFadeView;
    void /* unknown type, empty encoding */ trackArtworkView;
    void /* unknown type, empty encoding */ symbolArtworkView;
    void /* unknown type, empty encoding */ badgeView;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ favoriteBadge;
}

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewWillLayout;

@end

@interface MusicUI.HorizontalPosterLockupComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ automaticReloadTriggers;
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ headlineLabel;
    void /* unknown type, empty encoding */ headingLabel;
    void /* unknown type, empty encoding */ subheadingLabel;
    void /* unknown type, empty encoding */ accessoryCalendarButton;
    void /* unknown type, empty encoding */ overlayView;
    void /* unknown type, empty encoding */ overlayConfiguration;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ chinView;
}

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (id)accessibilityRole;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)viewWillLayout;

@end

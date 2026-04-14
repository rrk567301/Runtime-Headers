@interface MusicUI_Mac.BubbleLockupComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ menuPresenter;
    void /* unknown type, empty encoding */ automaticReloadTriggers;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ headlineLabel;
    void /* unknown type, empty encoding */ favoriteBadge;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)viewWillLayout;

@end

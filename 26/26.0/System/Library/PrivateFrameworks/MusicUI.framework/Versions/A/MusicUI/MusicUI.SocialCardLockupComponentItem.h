@interface MusicUI.SocialCardLockupComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ findMoreButton;
    void /* unknown type, empty encoding */ socialRelationshipButtonController;
    void /* unknown type, empty encoding */ closeButton;
    void /* unknown type, empty encoding */ hideCloseButton;
    void /* unknown type, empty encoding */ automaticReloadTriggers;
    void /* unknown type, empty encoding */ artworkCachingContext;
    void /* unknown type, empty encoding */ artworkView;
}

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewWillLayout;

@end

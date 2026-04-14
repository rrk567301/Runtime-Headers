@interface MusicUI.SocialOnboardingWelcomePageComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_notNowButton;
}

- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewWillLayout;
- (void)onNotNowButtonClicked:(id)a0;

@end

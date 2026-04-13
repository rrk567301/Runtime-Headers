@interface MusicUI.SocialProfileDetailHeaderLockupComponentItem : NSCollectionViewItem {
    void /* unknown type, empty encoding */ artworkView;
    void /* unknown type, empty encoding */ objectGraph;
    void /* unknown type, empty encoding */ titleLabel;
    void /* unknown type, empty encoding */ subtitleLabel;
    void /* unknown type, empty encoding */ socialRelationshipButtonController;
    void /* unknown type, empty encoding */ onUserProfileDidChangeEventSubscription;
    void /* unknown type, empty encoding */ isUserSocialProfile;
    void /* unknown type, empty encoding */ contextMenuButton;
    void /* unknown type, empty encoding */ menuPresenter;
}

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)viewWillLayout;

@end

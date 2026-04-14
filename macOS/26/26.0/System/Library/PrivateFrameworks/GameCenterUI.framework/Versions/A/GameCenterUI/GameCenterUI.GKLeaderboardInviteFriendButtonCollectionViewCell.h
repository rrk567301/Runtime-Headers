@interface GameCenterUI.GKLeaderboardInviteFriendButtonCollectionViewCell : NSCollectionViewItem {
    void /* unknown type, empty encoding */ $__lazy_storage_$_button;
    void /* function */ clickHandler;
    void /* unknown type, empty encoding */ separator;
}

@property (nonatomic, copy) id /* block */ clickHandler;

+ (struct CGSize { double x0; double x1; })sizeWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

- (void)viewDidLoad;
- (void)loadView;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLayout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)handleButtonClick;

@end

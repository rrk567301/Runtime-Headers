@class _TtC12GameCenterUI21SmallFriendLockupView;

@interface GameCenterUI.GKLeaderboardFriendSuggestionCollectionViewCell : NSCollectionViewItem {
    void /* function */ tapHandler;
}

@property (class, nonatomic, readonly) double horizontalPadding;

@property (nonatomic, readonly) _TtC12GameCenterUI21SmallFriendLockupView *friendSuggesationLockupView;
@property (nonatomic, copy) id /* block */ tapHandler;

+ (struct CGSize { double x0; double x1; })sizeWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

- (void)viewDidLayout;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)viewDidLoad;
- (void)loadView;
- (void)applyWithSuggestedFriend:(id)a0 previouslyInvited:(BOOL)a1;

@end

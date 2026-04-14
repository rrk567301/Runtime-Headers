@interface GameCenterUI.GKDashboardFriendSuggestionCollectionViewCell : NSUICollectionViewCell {
    void /* unknown type, empty encoding */ friendSuggestionLockupView;
    void /* function */ tapHandler;
}

@property (class, nonatomic, readonly) double horizontalPadding;

@property (nonatomic) BOOL displayBackground;
@property (nonatomic) BOOL wantsAdditionalHorizontalPadding;
@property (nonatomic, copy) id /* block */ tapHandler;

+ (struct CGSize { double x0; double x1; })sizeWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void).cxx_destruct;
- (void)applyWithSuggestedFriend:(id)a0 previouslyInvited:(BOOL)a1;

@end

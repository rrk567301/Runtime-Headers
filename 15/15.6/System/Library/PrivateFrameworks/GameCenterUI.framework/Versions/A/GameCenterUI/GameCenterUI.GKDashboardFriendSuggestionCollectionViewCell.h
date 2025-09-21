@interface GameCenterUI.GKDashboardFriendSuggestionCollectionViewCell : NSUICollectionViewCell {
    void /* unknown type, empty encoding */ friendSuggestionLockupView;
    void /* unknown type, empty encoding */ tapHandler;
}

@property (class, nonatomic, readonly) double horizontalPadding;

@property (nonatomic) void /* unknown type, empty encoding */ displayBackground;
@property (nonatomic) void /* unknown type, empty encoding */ wantsAdditionalHorizontalPadding;
@property (nonatomic, copy) id /* block */ tapHandler;

+ (struct CGSize { double x0; double x1; })sizeWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)prepareForReuse;
- (void)layout;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)applyWithSuggestedFriend:(id)a0 previouslyInvited:(char)a1;

@end

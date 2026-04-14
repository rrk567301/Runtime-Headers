@interface GameCenterUI.GKDashboardInviteFriendButtonCollectionViewCell : NSUICollectionViewCell {
    void /* unknown type, empty encoding */ $__lazy_storage_$_button;
    void /* function */ clickHandler;
    void /* unknown type, empty encoding */ separator;
}

@property (nonatomic, copy) id /* block */ clickHandler;

+ (struct CGSize { double x0; double x1; })sizeWithFitting:(struct CGSize { double x0; double x1; })a0 in:(id)a1;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)layout;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)handleButtonClick;

@end

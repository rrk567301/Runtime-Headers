@class ASCLockupView;

@interface GameCenterUI.AppStoreLockupView : GameCenterUI.BaseView

@property (nonatomic, readonly) ASCLockupView *appStoreLockup;

- (void)layout;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareForReuse;
- (id)hitTest:(struct CGPoint { double x0; double x1; })a0;

@end

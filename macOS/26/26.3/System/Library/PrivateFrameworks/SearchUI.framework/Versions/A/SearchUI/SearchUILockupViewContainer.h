@class ASCLockupView;

@interface SearchUILockupViewContainer : NUIContainerBoxView

@property (retain, nonatomic) ASCLockupView *lockupView;

- (void)viewDidChangeEffectiveAppearance;
- (void)tlk_updateForAppearance:(id)a0;
- (void)viewDidMoveToWindow;
- (void).cxx_destruct;
- (id)initWithLockupView:(id)a0;

@end

@class ASCLockupView;

@interface SearchUILockupViewContainer : NUIContainerBoxView

@property (retain, nonatomic) ASCLockupView *lockupView;

- (void)tlk_updateForAppearance:(id)a0;
- (void).cxx_destruct;
- (void)viewDidChangeEffectiveAppearance;
- (void)viewDidMoveToWindow;
- (id)initWithLockupView:(id)a0;

@end

@class NSVisualEffectView, NSViewController;

@interface ASTransitionViewController : NSViewController

@property (retain, nonatomic) NSViewController *currentViewController;
@property (readonly, nonatomic) NSVisualEffectView *effectView;

- (void).cxx_destruct;
- (id)initWithViewController:(id)a0;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillLayout;
- (void)transitionToViewController:(id)a0;

@end

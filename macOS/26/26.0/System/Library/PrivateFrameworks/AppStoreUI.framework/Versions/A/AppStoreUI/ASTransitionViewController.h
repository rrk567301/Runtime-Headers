@class NSVisualEffectView, NSViewController;

@interface ASTransitionViewController : NSViewController

@property (retain, nonatomic) NSViewController *currentViewController;
@property (readonly, nonatomic) NSVisualEffectView *effectView;

- (void)viewDidLoad;
- (void)loadView;
- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)viewWillLayout;
- (void)transitionToViewController:(id)a0;

@end

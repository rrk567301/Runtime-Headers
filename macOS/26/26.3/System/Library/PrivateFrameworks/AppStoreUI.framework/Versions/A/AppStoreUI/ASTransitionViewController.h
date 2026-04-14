@class NSVisualEffectView, NSViewController;

@interface ASTransitionViewController : NSViewController

@property (retain, nonatomic) NSViewController *currentViewController;
@property (readonly, nonatomic) NSVisualEffectView *effectView;

- (id)initWithViewController:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewWillLayout;
- (void)transitionToViewController:(id)a0;

@end

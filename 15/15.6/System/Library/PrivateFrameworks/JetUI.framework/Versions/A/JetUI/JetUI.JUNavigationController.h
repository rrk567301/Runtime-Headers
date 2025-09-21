@class NSString;

@interface JetUI.JUNavigationController : JetUI.JetTraitsViewController <NSUserInterfaceValidations> {
    void /* unknown type, empty encoding */ stack;
    void /* unknown type, empty encoding */ isOurAppearanceTransitioning;
    void /* unknown type, empty encoding */ navigationBarIfLoaded;
    void /* unknown type, empty encoding */ containerView;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ isNavigationBarHidden;
    void /* unknown type, empty encoding */ isGoBackActionEnabled;
}

@property (nonatomic, copy) NSString *title;

- (void)dealloc;
- (id)init;
- (char)respondsToSelector:(SEL)a0;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void)scrollWheel:(id)a0;
- (char)validateUserInterfaceItem:(id)a0;
- (void)viewDidLoad;
- (void)viewWillLayout;
- (char)wantsScrollEventsForSwipeTrackingOnAxis:(long long)a0;
- (void)goBack:(id)a0;
- (void)_ju_endAppearanceTransitionForwarding:(char)a0;
- (void)_ju_beginAppearanceTransition:(char)a0 forwarding:(char)a1;
- (void)navigationBarSizeDidChange:(id)a0;

@end

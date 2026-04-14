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

- (void)goBack:(id)a0;
- (id)init;
- (BOOL)validateUserInterfaceItem:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)viewDidLoad;
- (void)loadView;
- (BOOL)respondsToSelector:(SEL)a0;
- (void)scrollWheel:(id)a0;
- (void)viewWillLayout;
- (BOOL)wantsScrollEventsForSwipeTrackingOnAxis:(long long)a0;
- (void)_ju_endAppearanceTransitionForwarding:(BOOL)a0;
- (void)_ju_beginAppearanceTransition:(BOOL)a0 forwarding:(BOOL)a1;
- (void)navigationBarSizeDidChange:(id)a0;

@end

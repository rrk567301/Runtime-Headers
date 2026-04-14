@class NSViewController;

@interface PUXViewController : NSViewController

@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } targetFrame;
@property (readonly, nonatomic) NSViewController *childViewController;

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewWillLayoutSubviews;
- (void)_setChildViewController;
- (id)initWithChildViewController:(id)a0 targetFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;

@end

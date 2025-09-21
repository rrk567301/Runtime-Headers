@class NSObject;
@protocol OS_dispatch_source;

@interface OFNSViewController : NSViewController {
    NSObject<OS_dispatch_source> *_memoryStatusSource;
    unsigned long long _memoryStatus;
}

@property (nonatomic) char isEditing;

+ (Class)viewClass;

- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)willMoveToParentViewController:(id)a0;
- (void)commonInit;
- (void)didMoveToParentViewController:(id)a0;
- (void)loadView;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)viewDidLayout;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewWillLayout;
- (void)viewWillAppear:(char)a0;
- (void)viewDidAppear:(char)a0;
- (void)viewDidDisappear:(char)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillDisappear:(char)a0;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)setEditing:(char)a0 animated:(char)a1;
- (void)viewUpdateLayer;
- (id)preferredFirstResponder;
- (void)addChildViewControllerInstantly:(id)a0;
- (void)removeFromParentViewControllerInstantly;
- (void)addChildViewControllerInstantly:(id)a0 toView:(id)a1;

@end

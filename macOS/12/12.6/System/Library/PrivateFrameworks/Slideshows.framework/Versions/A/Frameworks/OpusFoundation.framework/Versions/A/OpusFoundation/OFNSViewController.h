@class NSObject;
@protocol OS_dispatch_source;

@interface OFNSViewController : NSViewController {
    NSObject<OS_dispatch_source> *_memoryStatusSource;
    unsigned long long _memoryStatus;
}

@property (nonatomic) BOOL isEditing;

+ (Class)viewClass;

- (void)dealloc;
- (id)init;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidLayout;
- (void)loadView;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewWillLayout;
- (void)viewDidLoad;
- (void)willMoveToParentViewController:(id)a0;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (void)viewDidAppear;
- (void)viewDidDisappear;
- (void)commonInit;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewWillLayoutSubviews;
- (void)viewDidLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)preferredFirstResponder;
- (void)viewUpdateLayer;
- (void)removeFromParentViewControllerInstantly;
- (void)addChildViewControllerInstantly:(id)a0;
- (void)addChildViewControllerInstantly:(id)a0 toView:(id)a1;

@end

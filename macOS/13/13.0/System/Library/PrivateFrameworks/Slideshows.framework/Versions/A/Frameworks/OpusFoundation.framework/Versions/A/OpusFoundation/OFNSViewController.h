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
- (void)viewWillLayout;
- (void)willMoveToParentViewController:(id)a0;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewDidLoad;
- (void)viewWillAppear;
- (void)viewDidAppear;
- (void)viewWillDisappear;
- (void)viewDidDisappear;
- (void)commonInit;
- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidLayoutSubviews;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (id)preferredFirstResponder;
- (void)viewUpdateLayer;
- (void)addChildViewControllerInstantly:(id)a0;
- (void)removeFromParentViewControllerInstantly;
- (void)addChildViewControllerInstantly:(id)a0 toView:(id)a1;

@end

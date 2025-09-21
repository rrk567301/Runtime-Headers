@class NSObject;
@protocol OS_dispatch_source;

@interface OFNSViewController : NSViewController {
    NSObject<OS_dispatch_source> *_memoryStatusSource;
    unsigned long long _memoryStatus;
}

@property (nonatomic) BOOL isEditing;

+ (Class)viewClass;

- (void)viewWillAppear:(BOOL)a0;
- (void)viewWillDisappear;
- (void)viewDidAppear:(BOOL)a0;
- (void)viewDidLoad;
- (void)didMoveToParentViewController:(id)a0;
- (void)loadView;
- (void)commonInit;
- (void)dealloc;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewDidDisappear:(BOOL)a0;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)didReceiveMemoryWarning;
- (void)viewWillLayoutSubviews;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear;
- (void)viewDidLayoutSubviews;
- (id)init;
- (void)viewDidLayout;
- (void)willMoveToParentViewController:(id)a0;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewWillLayout;
- (void)viewUpdateLayer;
- (id)preferredFirstResponder;
- (void)addChildViewControllerInstantly:(id)a0;
- (void)removeFromParentViewControllerInstantly;
- (void)addChildViewControllerInstantly:(id)a0 toView:(id)a1;

@end

@class NSObject;
@protocol OS_dispatch_source;

@interface OFNSViewController : NSViewController {
    NSObject<OS_dispatch_source> *_memoryStatusSource;
    unsigned long long _memoryStatus;
}

@property (nonatomic) BOOL isEditing;

+ (Class)viewClass;

- (void)willMoveToParentViewController:(id)a0;
- (void)viewWillLayoutSubviews;
- (void)didReceiveMemoryWarning;
- (void)setEditing:(BOOL)a0 animated:(BOOL)a1;
- (void)viewDidDisappear:(BOOL)a0;
- (void)viewDidAppear;
- (void)viewWillDisappear:(BOOL)a0;
- (void)viewWillAppear:(BOOL)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)viewDidAppear:(BOOL)a0;
- (void)loadView;
- (void)commonInit;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewDidLayout;
- (id)init;
- (void)viewWillDisappear;
- (void)dealloc;
- (void)didMoveToParentViewController:(id)a0;
- (void)viewDidDisappear;
- (void)viewWillAppear;
- (void)viewWillLayout;
- (void)viewUpdateLayer;
- (id)preferredFirstResponder;
- (void)addChildViewControllerInstantly:(id)a0;
- (void)removeFromParentViewControllerInstantly;
- (void)addChildViewControllerInstantly:(id)a0 toView:(id)a1;

@end

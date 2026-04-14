@class NSURL, STBlockingViewController;

@interface DigitalHealthOverlayViewController : TabDialogViewController

@property (readonly, nonatomic) NSURL *currentURL;
@property (readonly, nonatomic) STBlockingViewController *associatedBlockingViewController;

- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)initWithDialogConfiguration:(id)a0 slot:(struct { int x0; unsigned long long x1; })a1;

@end

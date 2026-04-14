@class NSViewController, NSTextField;

@interface AMSUISpyglassViewController : NSViewController

@property (retain) NSTextField *noAccountLabel;
@property (retain) NSViewController *wrapperController;
@property (getter=isVisible) BOOL visible;

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (void).cxx_destruct;
- (void)viewWillLayout;
- (void)createViewWithAccounts:(id)a0;

@end

@class NSView, NSViewController;

@interface BrowserWindowContentViewController : NSViewController

@property (readonly, nonatomic) NSView *mainContentView;
@property (readonly, nonatomic) NSView *splitViewClipView;
@property (retain, nonatomic) NSViewController *splitViewController;
@property (retain, nonatomic) NSViewController *lockedBrowsingViewController;

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (void)_installLockedBrowsingViewIfNeeded;
- (void)_installSplitViewIfNeeded;

@end

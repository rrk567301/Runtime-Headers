@class FRViewNavigationController, NSURL;

@interface FRContentViewController : NSViewController

@property (weak, nonatomic) FRViewNavigationController *navigationController;
@property (readonly, nonatomic) NSURL *activeURL;
@property (nonatomic) double topContentInset;

- (void).cxx_destruct;
- (void)reload;
- (void)goBack;
- (void)goForward;
- (BOOL)canGoBack;
- (BOOL)canGoForward;
- (void)searchForString:(id)a0;
- (void)clearHistory;
- (BOOL)canLoadURL:(id)a0;
- (BOOL)loadURL:(id)a0 referrer:(id)a1;
- (BOOL)canSearchForString;
- (id)navigationTabs;
- (BOOL)isTabEnabled:(id)a0;
- (unsigned long long)badgeCountForTab:(id)a0;

@end

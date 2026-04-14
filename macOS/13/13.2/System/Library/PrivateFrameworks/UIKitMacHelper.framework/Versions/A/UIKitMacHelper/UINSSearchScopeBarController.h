@class UISearchBar, NSSegmentedControl;

@interface UINSSearchScopeBarController : NSTitlebarAccessoryViewController {
    UISearchBar *_uiSearchBar;
    NSSegmentedControl *_scopeControl;
}

- (void).cxx_destruct;
- (void)loadView;
- (void)viewDidLoad;
- (void)viewDidAppear;
- (id)_hostWindow;
- (void)_scopeSelectionChanged:(id)a0;
- (id)initWithUISearchBar:(id)a0;
- (void)showScopeBar;
- (void)hideScopeBar;
- (void)_updateScopeBar;
- (BOOL)_shouldShowScopeBar;

@end

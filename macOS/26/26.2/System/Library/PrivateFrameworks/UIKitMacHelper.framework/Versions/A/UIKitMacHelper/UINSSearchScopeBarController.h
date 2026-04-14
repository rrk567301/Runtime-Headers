@class UISearchBar, NSSegmentedControl;

@interface UINSSearchScopeBarController : NSTitlebarAccessoryViewController {
    UISearchBar *_uiSearchBar;
    NSSegmentedControl *_scopeControl;
}

- (void)loadView;
- (void)viewDidAppear;
- (void).cxx_destruct;
- (void)viewDidLoad;
- (id)_hostWindow;
- (void)_updateScopeBar;
- (void)_scopeSelectionChanged:(id)a0;
- (BOOL)_shouldShowScopeBar;
- (void)hideScopeBar;
- (id)initWithUISearchBar:(id)a0;
- (void)showScopeBar;

@end

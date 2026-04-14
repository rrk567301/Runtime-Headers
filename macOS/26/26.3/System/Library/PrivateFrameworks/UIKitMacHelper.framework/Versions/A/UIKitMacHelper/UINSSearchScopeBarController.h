@class UISearchBar, NSSegmentedControl;

@interface UINSSearchScopeBarController : NSTitlebarAccessoryViewController {
    UISearchBar *_uiSearchBar;
    NSSegmentedControl *_scopeControl;
}

- (void).cxx_destruct;
- (void)viewDidLoad;
- (void)loadView;
- (void)viewDidAppear;
- (id)_hostWindow;
- (void)_updateScopeBar;
- (void)_scopeSelectionChanged:(id)a0;
- (BOOL)_shouldShowScopeBar;
- (void)hideScopeBar;
- (id)initWithUISearchBar:(id)a0;
- (void)showScopeBar;

@end

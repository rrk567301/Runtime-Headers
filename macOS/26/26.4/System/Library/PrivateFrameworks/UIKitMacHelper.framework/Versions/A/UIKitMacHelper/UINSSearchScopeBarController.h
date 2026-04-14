@class UISearchBar, NSSegmentedControl;

@interface UINSSearchScopeBarController : NSTitlebarAccessoryViewController {
    UISearchBar *_uiSearchBar;
    NSSegmentedControl *_scopeControl;
}

- (void)viewDidAppear;
- (void)loadView;
- (void)viewDidLoad;
- (void).cxx_destruct;
- (id)_hostWindow;
- (void)_updateScopeBar;
- (void)_scopeSelectionChanged:(id)a0;
- (BOOL)_shouldShowScopeBar;
- (void)hideScopeBar;
- (id)initWithUISearchBar:(id)a0;
- (void)showScopeBar;

@end

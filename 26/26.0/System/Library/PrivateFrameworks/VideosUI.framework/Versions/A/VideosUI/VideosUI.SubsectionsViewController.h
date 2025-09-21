@interface VideosUI.SubsectionsViewController : VideosUI.BaseSidebarViewController <AMPFilterableViewModelProvider> {
    void /* unknown type, empty encoding */ dataModel;
    void /* unknown type, empty encoding */ selectedItem;
    void /* unknown type, empty encoding */ isEmptyState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_detailsContainerViewController;
    void /* unknown type, empty encoding */ dividerView;
    void /* unknown type, empty encoding */ emptyStateView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_filterableForwarder;
}

- (void)dealloc;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void).cxx_destruct;
- (id)supplementalTargetForAction:(SEL)a0 sender:(id)a1;
- (id)getFilterableViewModelOrProvider;
- (void)vui_viewDidLoad;
- (void)updateLibraryDataIfNeeded:(id)a0;
- (void)vui_didMoveToParentViewController:(id)a0;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_willMoveToParentViewController:(id)a0;

@end

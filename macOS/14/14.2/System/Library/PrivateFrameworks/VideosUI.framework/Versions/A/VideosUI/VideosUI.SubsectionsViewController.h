@interface VideosUI.SubsectionsViewController : VideosUI.BaseSidebarViewController <AMPFilterableViewModelProvider> {
    void /* unknown type, empty encoding */ dataModel;
    void /* unknown type, empty encoding */ selectedItem;
    void /* unknown type, empty encoding */ isEmptyState;
    void /* unknown type, empty encoding */ $__lazy_storage_$_detailsContainerViewController;
    void /* unknown type, empty encoding */ dividerView;
    void /* unknown type, empty encoding */ emptyStateView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_filterableForwarder;
}

- (id)supplementalTargetForAction:(SEL)a0 sender:(id)a1;
- (id)getFilterableViewModelOrProvider;
- (void)updateLibraryDataIfNeeded:(id)a0;
- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)initWithCoder:(id)a0;
- (void)vui_viewDidLoad;
- (void)vui_didMoveToParentViewController:(id)a0;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewWillAppear:(BOOL)a0;
- (void)vui_willMoveToParentViewController:(id)a0;

@end

@interface VideosUI.LibraryFamilyMembersViewController : VideosUI.VUIViewController <VUINSNavigationBarDelegate> {
    void /* unknown type, empty encoding */ stackViewController;
    void /* unknown type, empty encoding */ templateViewModel;
    void /* unknown type, empty encoding */ isEmptyState;
    void /* unknown type, empty encoding */ emptyStateView;
}

- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)vui_viewDidLoad;
- (BOOL)navigationBar:(id)a0 shouldHideTitleViewForItem:(id)a1;
- (void)vui_didMoveToParentViewController:(id)a0;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_willMoveToParentViewController:(id)a0;

@end

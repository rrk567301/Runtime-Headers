@interface VideosUI.SearchStackViewController : VideosUI.StackViewController <VUINSNavigationBarDelegate> {
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ validResultCategoryId;
    void /* unknown type, empty encoding */ isShowingHints;
    void /* unknown type, empty encoding */ $__lazy_storage_$_portraitFullScreenSizeClass;
    void /* unknown type, empty encoding */ $__lazy_storage_$_prototypeCellDictionary;
}

- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)vui_viewDidLoad;
- (void)navigationBar:(id)a0 didUpdateShowingLargeTitle:(BOOL)a1 largeTitleHeight:(double)a2;
- (BOOL)navigationBar:(id)a0 shouldHideTitleViewForItem:(id)a1;
- (void)vuiCollectionView:(id)a0 didSelectItemAt:(id)a1;
- (BOOL)vuiCollectionView:(id)a0 shouldHoverItemAt:(id)a1;
- (void)vui_didMoveToParentViewController:(id)a0;
- (void)vui_viewDidLayoutSubviews;

@end

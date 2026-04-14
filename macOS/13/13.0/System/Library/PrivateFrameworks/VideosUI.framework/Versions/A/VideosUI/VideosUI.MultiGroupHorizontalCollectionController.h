@interface VideosUI.MultiGroupHorizontalCollectionController : VUIBaseViewController <VideosUI.VUICollectionViewDelegate, VideosUI.VUIScrollViewDelegate, VUIShelfViewLayoutDelegate, VideosUI.ChevronIndicatorHost, VideosUI.CollectionChevronIndicatorViewDelegate, VideosUI.VUICollectionViewHoverDelegate, NSScrollViewDelegate> {
    void /* unknown type, empty encoding */ viewImpressioner;
    void /* unknown type, empty encoding */ leadingIndicator;
    void /* unknown type, empty encoding */ trailingIndicator;
    void /* unknown type, empty encoding */ $__lazy_storage_$_sectionHeaderMap;
    void /* unknown type, empty encoding */ cachedCellMetrics;
    void /* unknown type, empty encoding */ $__lazy_storage_$_cachedHeaderViews;
    void /* unknown type, empty encoding */ internalCollectionViewModel;
    void /* unknown type, empty encoding */ $__lazy_storage_$_shelfViewLayout;
    void /* unknown type, empty encoding */ $__lazy_storage_$_groupCollectionContainerView;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ lastViewWidth;
    void /* unknown type, empty encoding */ lastFocusedIndexPath;
    void /* unknown type, empty encoding */ supplementaryKindToReuseIdentifierMap;
    void /* unknown type, empty encoding */ datasourceLoaded;
}

- (void)scrollViewBeganMomentum:(id)a0 withVelocity:(struct CGPoint { double x0; double x1; })a1 targetContentOffset:(struct CGPoint { double x0; double x1; } *)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 referenceSizeForHeaderInSection:(long long)a2;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 selectionMarginsForItemAtIndexPath:(id)a2;
- (double)vuiCollectionViewHoverDelayDuration:(id)a0 at:(id)a1;
- (void)vuiCollectionView:(id)a0 didSelectItemAt:(id)a1;
- (void)vuiScrollViewDidEndScrollingAnimation:(id)a0;
- (void)vuiScrollViewDidScroll:(id)a0;
- (BOOL)vuiCollectionView:(id)a0 shouldHoverItemAt:(id)a1;
- (void)vuiCollectionView:(id)a0 willDisplay:(id)a1 for:(id)a2;
- (void)vuiCollectionView:(id)a0 didEndDisplaying:(id)a1 for:(id)a2;
- (void)vuiCollectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 at:(id)a3;
- (id)chevronIndicatorOf:(long long)a0 kind:(id)a1;
- (void)scrollPageFrom:(id)a0 for:(long long)a1;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)vui_loadView;
- (void)vui_viewDidLayoutSubviews;
- (void)vui_viewDidLoad;
- (void)vui_viewDidAppear:(BOOL)a0;

@end

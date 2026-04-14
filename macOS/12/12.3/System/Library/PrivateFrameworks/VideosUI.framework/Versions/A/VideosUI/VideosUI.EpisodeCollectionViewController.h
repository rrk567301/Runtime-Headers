@interface VideosUI.EpisodeCollectionViewController : VideosUI.VUIViewController <VideosUI.VUICollectionViewDelegate, VideosUI.VUIScrollViewDelegate, VideosUI.VUICollectionViewHoverDelegate, VideosUI.VUICollectionViewContextMenuDelegate, VideosUI.ChevronIndicatorHost, VideosUI.CollectionChevronIndicatorViewDelegate> {
    void /* unknown type, empty encoding */ viewImpressioner;
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ dataSource;
    void /* unknown type, empty encoding */ currentSnapshot;
    void /* unknown type, empty encoding */ cachedPrototypeCell;
    void /* unknown type, empty encoding */ cachedPrototypeCellMetrics;
    void /* unknown type, empty encoding */ cachedPrototypeLastWidth;
    void /* unknown type, empty encoding */ contextMenuInteractor;
    void /* unknown type, empty encoding */ leadingIndicator;
    void /* unknown type, empty encoding */ trailingIndicator;
}

- (BOOL)vuiCollectionView:(id)a0 shouldHoverItemAt:(id)a1;
- (void)vuiCollectionView:(id)a0 didSelectItemAt:(id)a1;
- (void)vuiScrollViewDidEndScrollingAnimation:(id)a0;
- (void)vuiScrollViewDidScroll:(id)a0;
- (void)vuiShowContextMenu:(id)a0 event:(id)a1 at:(id)a2;
- (void)vuiCollectionView:(id)a0 willDisplay:(id)a1 for:(id)a2;
- (void)vuiCollectionView:(id)a0 didEndDisplaying:(id)a1 for:(id)a2;
- (void)vuiCollectionView:(id)a0 willDisplaySupplementaryView:(id)a1 forElementKind:(id)a2 at:(id)a3;
- (void)vuiCollectionView:(id)a0 didSelectItemByVOAt:(id)a1;
- (id)chevronIndicatorOf:(long long)a0 kind:(id)a1;
- (void)scrollPageFrom:(id)a0 for:(long long)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)vui_loadView;
- (void)vui_viewDidLayoutSubviews;

@end

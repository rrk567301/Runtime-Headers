@interface Safari.BookmarksSidebarTableCarouselView : NSTableCellView <NSCollectionViewDelegate> {
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ $__lazy_storage_$_dataSource;
    void /* unknown type, empty encoding */ metadataProvider;
    void /* unknown type, empty encoding */ scrollView;
}

@property (class, nonatomic, readonly) double estimatedCarouselHeight;

@property (nonatomic, weak) void /* function */ delegate;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (void)viewWillMoveToSuperview:(id)a0;
- (BOOL)wantsForwardedScrollEventsForAxis:(long long)a0;
- (void)willDisplay;

@end

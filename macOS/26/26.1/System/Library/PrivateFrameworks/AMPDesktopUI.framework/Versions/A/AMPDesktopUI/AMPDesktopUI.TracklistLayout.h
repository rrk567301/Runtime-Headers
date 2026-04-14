@interface AMPDesktopUI.TracklistLayout : NSCollectionViewLayout {
    void /* unknown type, empty encoding */ viewModel;
    void /* unknown type, empty encoding */ kSmallArtworkSize;
    void /* unknown type, empty encoding */ kLargeArtworkSize;
    void /* unknown type, empty encoding */ kLargeBreakpoint;
    void /* unknown type, empty encoding */ kAlbumHeaderHeight;
    void /* unknown type, empty encoding */ kAlbumTrackSpacing;
    void /* unknown type, empty encoding */ kMiddleGutterWidth;
    void /* unknown type, empty encoding */ kInterAlbumSpacing;
    void /* unknown type, empty encoding */ kTopMargin;
    void /* unknown type, empty encoding */ kOuterMargin;
    void /* unknown type, empty encoding */ artSizeForAlbumHeights;
    void /* unknown type, empty encoding */ albumHeights;
    void /* unknown type, empty encoding */ albumHeaderCachedHeight;
    void /* unknown type, empty encoding */ artHeightCache;
}

@property (nonatomic, readonly) struct CGSize { double x0; double x1; } collectionViewContentSize;

- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)initWithCoder:(id)a0;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void).cxx_destruct;
- (void)prepareLayout;
- (id)layoutAttributesForSupplementaryViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)init;

@end

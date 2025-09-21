@interface GameCenterUI.GKMultiplayerViewControllerLayout : NSUICollectionViewFlowLayout {
    void /* unknown type, empty encoding */ cellInfo;
    void /* unknown type, empty encoding */ didPerformInitialContentInsetScroll;
    void /* unknown type, empty encoding */ type;
}

@property (nonatomic, readonly) long long cellLayoutMode;

+ (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })minimumContentInsetIn:(id)a0;

- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)prepareLayout;
- (id)init;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (BOOL)shouldUpdateVisibleCellLayoutAttributes;

@end

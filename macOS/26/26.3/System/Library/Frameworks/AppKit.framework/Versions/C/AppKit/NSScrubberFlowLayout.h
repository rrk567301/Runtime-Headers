@interface NSScrubberFlowLayout : NSScrubberLayout {
    id _support;
    double _itemSpacing;
    struct CGSize { double width; double height; } _itemSize;
}

@property double itemSpacing;
@property struct CGSize { double x0; double x1; } itemSize;

- (void)invalidateLayout;
- (id)init;
- (void)prepareLayout;
- (id)initWithCoder:(id)a0;
- (void)dealloc;
- (void)encodeWithCoder:(id)a0;
- (id)layoutAttributesForItemAtIndex:(long long)a0;
- (id)layoutAttributesForItemsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayoutForItemsAtIndexes:(id)a0;
- (struct CGSize { double x0; double x1; })scrubberContentSize;

@end

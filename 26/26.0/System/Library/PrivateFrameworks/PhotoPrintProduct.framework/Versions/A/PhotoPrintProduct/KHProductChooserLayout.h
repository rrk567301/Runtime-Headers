@interface KHProductChooserLayout : UXCollectionViewFlowLayout {
    struct CGSize { double width; double height; } _previousSize;
}

- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)init;
- (id)invalidationContextForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

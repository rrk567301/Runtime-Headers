@class IMChatTranscriptLayoutEngine;

@interface SOTranscriptCollectionViewLayout : NSCollectionViewLayout {
    IMChatTranscriptLayoutEngine *_layoutEngine;
}

- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayout;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)a0;
- (void)prepareLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)a0;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (void).cxx_destruct;
- (id)initWithLayoutEngine:(id)a0;

@end

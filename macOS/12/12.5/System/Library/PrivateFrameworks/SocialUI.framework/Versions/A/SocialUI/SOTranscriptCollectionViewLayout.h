@class IMChatTranscriptLayoutEngine;

@interface SOTranscriptCollectionViewLayout : NSCollectionViewLayout {
    IMChatTranscriptLayoutEngine *_layoutEngine;
}

- (void).cxx_destruct;
- (void)invalidateLayout;
- (void)prepareLayout;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)a0;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)a0;
- (id)initWithLayoutEngine:(id)a0;

@end

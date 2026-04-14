@class IMChatTranscriptLayoutEngine;

@interface SOTranscriptCollectionViewLayout : NSCollectionViewLayout {
    IMChatTranscriptLayoutEngine *_layoutEngine;
}

- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayout;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (void)prepareLayout;
- (void).cxx_destruct;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)a0;
- (id)initWithLayoutEngine:(id)a0;

@end

@class IMChatTranscriptLayoutEngine;

@interface SOTranscriptCollectionViewLayout : NSCollectionViewLayout {
    IMChatTranscriptLayoutEngine *_layoutEngine;
}

- (id)layoutAttributesForElementsInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (id)indexPathsToDeleteForDecorationViewOfKind:(id)a0;
- (BOOL)shouldInvalidateLayoutForBoundsChange:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)invalidateLayout;
- (void).cxx_destruct;
- (id)layoutAttributesForDecorationViewOfKind:(id)a0 atIndexPath:(id)a1;
- (id)layoutAttributesForItemAtIndexPath:(id)a0;
- (struct CGSize { double x0; double x1; })collectionViewContentSize;
- (id)indexPathsToInsertForDecorationViewOfKind:(id)a0;
- (void)prepareLayout;
- (id)initWithLayoutEngine:(id)a0;

@end

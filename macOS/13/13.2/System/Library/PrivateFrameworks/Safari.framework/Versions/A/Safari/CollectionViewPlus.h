@protocol CollectionViewPlusDelegate;

@interface CollectionViewPlus : NSCollectionView

@property (nonatomic) BOOL hasEnclosingScrollView;
@property (weak) id<CollectionViewPlusDelegate> delegate;

- (void)keyDown:(id)a0;
- (void)draggingSession:(id)a0 movedToPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)enclosingScrollView;
- (id)makeItemWithIdentifier:(id)a0 forIndexPath:(id)a1;
- (void)_setOpensDropInsertionGaps:(BOOL)a0;
- (BOOL)isScreenPointWithinBounds:(struct CGPoint { double x0; double x1; })a0;
- (id)makeItemWithIdentifier:(id)a0 forIndexPath:(id)a1 forCollectionView:(id)a2;
- (void)updateChildrenAccessibilityAttributes;

@end

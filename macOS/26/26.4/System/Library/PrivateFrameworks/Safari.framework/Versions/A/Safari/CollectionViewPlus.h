@class NSMenu;
@protocol CollectionViewPlusDelegate;

@interface CollectionViewPlus : NSCollectionView {
    NSMenu *_menu;
}

@property (nonatomic) BOOL hasEnclosingScrollView;
@property (weak) id<CollectionViewPlusDelegate> delegate;

- (id)menu;
- (id)enclosingScrollView;
- (void)setMenu:(id)a0;
- (void)keyDown:(id)a0;
- (void).cxx_destruct;
- (void)_setOpensDropInsertionGaps:(BOOL)a0;
- (void)draggingSession:(id)a0 movedToPoint:(struct CGPoint { double x0; double x1; })a1;
- (id)makeItemWithIdentifier:(id)a0 forIndexPath:(id)a1;
- (void)invalidateContextMenu;
- (BOOL)isScreenPointWithinBounds:(struct CGPoint { double x0; double x1; })a0;
- (id)makeItemWithIdentifier:(id)a0 forIndexPath:(id)a1 forCollectionView:(id)a2;
- (void)updateChildrenAccessibilityAttributes;

@end

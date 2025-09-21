@protocol ICMImageGalleryCollectionViewMenuViewDelegate;

@interface ICMImageGalleryCollectionView : NSCollectionView

@property (weak, nonatomic) id<ICMImageGalleryCollectionViewMenuViewDelegate> menuDelegate;

- (id)accessibilityLabel;
- (void)keyDown:(id)a0;
- (id)menuForEvent:(id)a0;
- (void).cxx_destruct;
- (BOOL)acceptsFirstResponder;
- (id)accessibilityEnabledAttribute;
- (void)accessibilitySelectItemsAtIndexPaths:(id)a0;
- (id)indexPathForItemClosestToPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)applyPermutationsFromArray:(id)a0 toArray:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)selectNextItemIfPossible;
- (BOOL)selectPreviousItemIfPossible;

@end

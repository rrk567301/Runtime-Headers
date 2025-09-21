@class AKGridViewController;

@interface AKGridView : NSCollectionView

@property (weak) AKGridViewController *gridViewController;
@property char itemsAllowDrag;
@property char itemsShowSelection;

- (void).cxx_destruct;
- (void)keyDown:(id)a0;
- (void)mouseEntered:(id)a0;
- (void)mouseExited:(id)a0;
- (id)newItemForRepresentedObject:(id)a0;
- (void)selectAll:(id)a0;
- (void)updateTrackingAreas;
- (char)validateUserInterfaceItem:(id)a0;
- (void)viewWillMoveToSuperview:(id)a0;
- (void)removeAllTrackingAreas;
- (struct CGPoint { double x0; double x1; })mousePositionInView;

@end

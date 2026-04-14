@class NSIndexPath;

@interface AMPCollectionView : NSCollectionView

@property (retain, nonatomic) NSIndexPath *mouseDownTargetPath;
@property (nonatomic) BOOL processingMouseUp;
@property (nonatomic) BOOL canAutomaticallyConfigureScrollbars;

- (void)mouseUp:(id)a0;
- (id)menuForEvent:(id)a0;
- (void)moveDown:(id)a0;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (void)moveUp:(id)a0;
- (BOOL)_autoConfigureScrollers;
- (void)moveLeft:(id)a0;
- (void)moveRight:(id)a0;
- (void)registerClass:(Class)a0 forItemWithIdentifier:(id)a1;
- (id)pathToFirstItem;
- (id)pathToLastItem;
- (void)setSelectionIfValidTo:(id)a0;

@end

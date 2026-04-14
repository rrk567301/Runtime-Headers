@class NSOutlineView, NSTreeController;

@interface SMViewController : NSViewController

@property (readonly) id owner;
@property (retain) NSTreeController *collectionController;
@property (retain) NSOutlineView *collectionView;

- (void).cxx_destruct;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)installViewInSuperview:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1 andOwner:(id)a2;

@end

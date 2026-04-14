@class AKController, NSArray, NSArrayController, NSString, NSLayoutConstraint;

@interface AKGridViewController : NSViewController <NSCollectionViewDelegate>

@property (retain) NSLayoutConstraint *widthConstraint;
@property (retain) NSLayoutConstraint *heightConstraint;
@property (weak) AKController *controller;
@property (copy) id /* block */ actionBlock;
@property (copy) id /* block */ potentialActionBlock;
@property (retain) NSArrayController *itemArrayController;
@property (retain, nonatomic) NSArray *items;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (void)menuWillOpen:(id)a0;
- (void)menuDidClose:(id)a0;
- (void)awakeFromNib;
- (BOOL)setSelectionIndexes:(id)a0;
- (id)selectionIndexes;
- (id)selectedObjects;
- (id)gridView;
- (void)viewWillAppear;
- (void)viewWillDisappear;
- (id)collectionView:(id)a0 pasteboardWriterForItemAtIndex:(unsigned long long)a1;
- (void)collectionView:(id)a0 draggingSession:(id)a1 endedAtPoint:(struct CGPoint { double x0; double x1; })a2 dragOperation:(unsigned long long)a3;
- (void)performActionWithSender:(id)a0;
- (void)menuDidOpen:(id)a0;
- (id)initWithDefaultNib;
- (void)performActionOnSelection;
- (void)performActionOnPotentialSelection;

@end

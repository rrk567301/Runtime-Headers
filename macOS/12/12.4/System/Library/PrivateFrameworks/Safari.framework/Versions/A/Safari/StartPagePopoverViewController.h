@class NSView, NSString, NSScrollView, CollectionViewPlus, NSArray, NSStackView, NSLayoutConstraint, NSPopover, NSCollectionView, NSIndexPath;
@protocol StartPagePopoverDelegate;

@interface StartPagePopoverViewController : NSViewController <NSCollectionViewDataSource, CollectionViewPlusDelegate, NSFilePromiseProviderDelegate, NSPopoverDelegate> {
    NSStackView *_containerView;
    NSScrollView *_scrollView;
    NSCollectionView *_collectionView;
    NSLayoutConstraint *_heightConstraint;
    NSView *_backgroundView;
    NSView *_customizationSyncToggleView;
    CollectionViewPlus *_togglesView;
    NSArray *_togglesData;
    NSIndexPath *_draggingIndexPath;
    NSIndexPath *_initialDraggingIndexPath;
}

@property (retain, nonatomic) NSPopover *popover;
@property (weak, nonatomic) id<StartPagePopoverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)loadView;
- (void)viewWillAppear;
- (void)_reloadData;
- (void)popoverDidClose:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canDragItemsAtIndexPaths:(id)a1 withEvent:(id)a2;
- (unsigned long long)collectionView:(id)a0 validateDrop:(id)a1 proposedIndexPath:(id *)a2 dropOperation:(long long *)a3;
- (BOOL)collectionView:(id)a0 acceptDrop:(id)a1 indexPath:(id)a2 dropOperation:(long long)a3;
- (id)collectionView:(id)a0 pasteboardWriterForItemAtIndexPath:(id)a1;
- (void)collectionView:(id)a0 draggingSession:(id)a1 willBeginAtPoint:(struct CGPoint { double x0; double x1; })a2 forItemsAtIndexPaths:(id)a3;
- (void)collectionView:(id)a0 draggingSession:(id)a1 endedAtPoint:(struct CGPoint { double x0; double x1; })a2 dragOperation:(unsigned long long)a3;
- (id)collectionView:(id)a0 shouldSelectItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemsAtIndexPaths:(id)a1;
- (struct NSEdgeInsets { double x0; double x1; double x2; double x3; })collectionView:(id)a0 layout:(id)a1 insetForSectionAtIndex:(long long)a2;
- (void)filePromiseProvider:(id)a0 writePromiseToURL:(id)a1 completionHandler:(id /* block */)a2;
- (id)filePromiseProvider:(id)a0 fileNameForType:(id)a1;
- (void)_updateBackgroundColor;
- (void)collectionViewPlus:(id)a0 draggingSession:(id)a1 movedToPoint:(struct CGPoint { double x0; double x1; })a2;
- (void)collectionViewPlus:(id)a0 keyDown:(id)a1;
- (void)_sortTogglesDataWithOrderOfSections:(id)a0;
- (void)_loadToggleData;
- (void)_createTogglesCollectionView;
- (void)_createCollectionView;
- (void)_createCustomizationSyncToggleView;
- (id)_createStackViewWithSubviews:(id)a0;
- (double)_collectionViewHeight;
- (void)_configureFirstItem;
- (void)_updateCollectionViewVisibility;
- (void)_updateSectionOrdering;
- (void)_updateStartPageToggleWithUserDefaults;
- (id)makeToggleRow:(id)a0 rowIndex:(long long)a1;
- (double)_calculatedItemWidth;
- (void)_toggleCustomizationSyncSwitch:(id)a0;
- (void)_presentCustomizationSyncPrompt:(id)a0;
- (void)_configureFirstItem:(id)a0;
- (id)makeToggleRow:(id)a0;
- (void)showPopoverWithPositioningView:(id)a0 backgroundView:(id)a1 delegate:(id)a2;

@end

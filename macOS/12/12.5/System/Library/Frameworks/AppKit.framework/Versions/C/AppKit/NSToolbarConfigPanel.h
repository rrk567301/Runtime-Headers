@class NSTextField, NSString, NSScrollView, _NSToolbarImageRepView, NSToolbarSnapshotWindow, NSBox, NSPopUpButton, NSToolbar, NSButton, NSCollectionView, NSSegmentedControl;

@interface NSToolbarConfigPanel : NSPanel <NSCollectionViewDataSource, NSTouchBarCustomizationPaletteLayoutDelegate, NSCollectionViewDelegateFlowLayout, NSCollectionViewDelegate> {
    NSToolbar *_editedToolbar;
    double _widthOfWidgets;
    double _individualItemsMaxHeight;
    NSToolbar *_individualItemsToolbar;
    NSTextField *_individualItemsText;
    NSCollectionView *_individualItemsCollectionView;
    NSScrollView *_individualItemsScrollView;
    NSTextField *_defaultItemsText;
    _NSToolbarImageRepView *_defaultToolbarImageRep;
    NSTextField *_displayModeLabel;
    NSPopUpButton *_displayModePopUp;
    long long _desiredSheetWidth;
    NSButton *_useSmallIconsCheckBox;
    NSSegmentedControl *_displayModeSegmentedControl;
    NSToolbarSnapshotWindow *_snapshotWindow;
    NSBox *_defaultItemsContainer;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_nibName;
+ (id)toolbarConfigPanelForToolbar:(id)a0 withWidth:(long long)a1;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (void)_loadData;
- (void)cancel:(id)a0;
- (id)makeTouchBar;
- (void)ok:(id)a0;
- (BOOL)_addCursorRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 cursor:(id)a1 forView:(id)a2;
- (void)_finishInitialization;
- (BOOL)preventsApplicationTerminationWhenModal;
- (unsigned long long)sheetBehavior;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canDragItemsAtIndexPaths:(id)a1 withEvent:(id)a2;
- (BOOL)collectionView:(id)a0 writeItemsAtIndexPaths:(id)a1 toPasteboard:(id)a2;
- (id)collectionView:(id)a0 draggingImageForItemsAtIndexPaths:(id)a1 withEvent:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (void)collectionView:(id)a0 draggingSession:(id)a1 endedAtPoint:(struct CGPoint { double x0; double x1; })a2 dragOperation:(unsigned long long)a3;
- (void)_setDefaultToolbarItemSetFromMenuItem:(id)a0;
- (id)editedToolbar;
- (id)_createOffscreenDefaultImageRepSetWindow;
- (int)_setBackingStoreResolution:(double)a0;
- (void)_loadDefaultSetImageRep;
- (void)_setUpTextField:(id)a0;
- (void)_loadIndividualItemsCollectionView;
- (double)_spaceNeededForPaletteLabelsOfItem:(id)a0 preferredWidth:(double)a1;
- (void)_touchBarDisplayModeChanged:(id)a0;
- (void)_updateTouchBarWithToolbarDisplayMode:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 minSizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 maxSizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;

@end

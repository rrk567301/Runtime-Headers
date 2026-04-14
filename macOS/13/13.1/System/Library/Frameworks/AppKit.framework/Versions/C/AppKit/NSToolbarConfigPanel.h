@class NSTextField, NSString, NSScrollView, NSSegmentedControl, NSToolbarSnapshotWindow, NSPopUpButton, NSToolbar, NSLayoutConstraint, NSToolbarImageRepView, NSCollectionView, NSButton;

@interface NSToolbarConfigPanel : NSPanel <NSCollectionViewDataSource, NSTouchBarCustomizationPaletteLayoutDelegate, NSCollectionViewDelegateFlowLayout, NSCollectionViewDelegate> {
    NSToolbar *_editedToolbar;
    double _widthOfWidgets;
    double _individualItemsMaxHeight;
    NSToolbar *_individualItemsToolbar;
    NSTextField *_individualItemsText;
    NSCollectionView *_individualItemsCollectionView;
    NSScrollView *_individualItemsScrollView;
    NSToolbar *_defaultItemsToolbar;
    NSTextField *_defaultItemsText;
    NSToolbarImageRepView *_defaultToolbarImageRep;
    NSTextField *_displayModeLabel;
    NSPopUpButton *_displayModePopUp;
    NSButton *_useSmallIconsCheckBox;
    NSSegmentedControl *_displayModeSegmentedControl;
    NSToolbarSnapshotWindow *_snapshotWindow;
    BOOL _waitingForToolbarsToLoad;
    BOOL _defaultSetImageRepLoaded;
    NSLayoutConstraint *_individualItemsScrollViewHeightConstraint;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)_nibName;
+ (id)toolbarConfigPanelForToolbar:(id)a0;

- (void)dealloc;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (void)cancel:(id)a0;
- (id)makeTouchBar;
- (void)ok:(id)a0;
- (void)setFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 display:(BOOL)a1;
- (BOOL)preventsApplicationTerminationWhenModal;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (BOOL)collectionView:(id)a0 canDragItemsAtIndexPaths:(id)a1 withEvent:(id)a2;
- (id)collectionView:(id)a0 draggingImageForItemsAtIndexPaths:(id)a1 withEvent:(id)a2 offset:(struct CGPoint { double x0; double x1; } *)a3;
- (id)collectionView:(id)a0 pasteboardWriterForItemAtIndex:(unsigned long long)a1;
- (void)collectionView:(id)a0 draggingSession:(id)a1 endedAtPoint:(struct CGPoint { double x0; double x1; })a2 dragOperation:(unsigned long long)a3;
- (void)_loadingToolbarsTimedOut;
- (int)_setBackingStoreResolution:(double)a0;
- (void)_touchBarDisplayModeChanged:(id)a0;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 minSizeForItemAtIndexPath:(id)a2;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 maxSizeForItemAtIndexPath:(id)a2;
- (void)loadData;
- (void)_configureContentViewsAndInformEditedToolbar;
- (void)prepareIndividualItemsToolbar;
- (void)prepareDefaultSetToolbar;
- (void)beginObservingLoadingToolbars;
- (void)endObservingLoadingToolbarsIfNecessary;
- (void)_setupAllowedDisplayModes;
- (id)editedToolbar;
- (id)_createOffscreenDefaultImageRepSetWindowWithDefaultToolbar;
- (void)_loadDefaultSetImageRep;
- (void)_setDefaultToolbarItemSetFromMenuItem:(id)a0;
- (void)_loadIndividualItemsCollectionView;
- (void)_setupCollectionViewConstraints;
- (double)_spaceNeededForPaletteLabelsOfItem:(id)a0 preferredWidth:(double)a1;
- (unsigned long long)sheetBehavior;
- (void)windowDidChangeEffectiveAppearance;
- (void)_updateTouchBarWithToolbarDisplayMode:(unsigned long long)a0;

@end

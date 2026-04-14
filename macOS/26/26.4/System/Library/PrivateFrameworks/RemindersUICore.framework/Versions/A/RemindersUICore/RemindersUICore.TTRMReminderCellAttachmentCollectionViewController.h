@interface RemindersUICore.TTRMReminderCellAttachmentCollectionViewController : NSViewController <QLPreviewPanelDelegate, QLPreviewPanelDataSource, NSMenuItemValidation, NSCollectionViewDelegateFlowLayout, NSCollectionViewDataSource> {
    void /* unknown type, empty encoding */ presenter;
    void /* unknown type, empty encoding */ scrollView;
    void /* unknown type, empty encoding */ collectionView;
    void /* unknown type, empty encoding */ linkItemSize;
    void /* unknown type, empty encoding */ hidesClippedItems;
    void /* unknown type, empty encoding */ linkItemSizeClass;
    void /* unknown type, empty encoding */ dynamicTypeSizeObserver;
    void /* unknown type, empty encoding */ imageSizeCancellable;
    void /* unknown type, empty encoding */ imageSizeCache;
}

- (void)cut:(id)a0;
- (void)collectionView:(id)a0 didSelectItemsAtIndexPaths:(id)a1;
- (long long)numberOfSectionsInCollectionView:(id)a0;
- (id)previewPanel:(id)a0 transitionImageForPreviewItem:(id)a1 contentRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a2;
- (void)paste:(id)a0;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)a0;
- (id)initWithNibName:(id)a0 bundle:(id)a1;
- (void)loadView;
- (struct CGSize { double x0; double x1; })collectionView:(id)a0 layout:(id)a1 sizeForItemAtIndexPath:(id)a2;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)copy:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewPanel:(id)a0 sourceFrameOnScreenForPreviewItem:(id)a1;
- (void)viewDidLoad;
- (void)beginPreviewPanelControl:(id)a0;
- (void)endPreviewPanelControl:(id)a0;
- (BOOL)validateMenuItem:(id)a0;
- (void).cxx_destruct;
- (BOOL)acceptsPreviewPanelControl:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)previewPanel:(id)a0 previewItemAtIndex:(long long)a1;
- (void)deleteBackward:(id)a0;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (void)deleteForward:(id)a0;

@end

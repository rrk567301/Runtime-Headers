@class NSString, NSCollectionViewFlowLayout, QLPreviewPanel, SOContentAttachmentCollectionView;

@interface SOContentAttachmentsViewController : SOAttachmentsViewController <QLPreviewPanelDataSource, QLPreviewPanelDelegate, NSCollectionViewDataSource, NSCollectionViewDelegate>

@property (readonly) SOContentAttachmentCollectionView *collectionView;
@property (readonly) NSCollectionViewFlowLayout *flowLayout;
@property (retain) QLPreviewPanel *previewPanel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)validateMenuItem:(id)a0;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (void)viewWillDisappear;
- (void)viewDidLoad;
- (id)collectionView:(id)a0 pasteboardWriterForItemAtIndexPath:(id)a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewPanel:(id)a0 sourceFrameOnScreenForPreviewItem:(id)a1;
- (void)collectionView:(id)a0 didDeselectItemsAtIndexPaths:(id)a1;
- (void)endPreviewPanelControl:(id)a0;
- (void)beginPreviewPanelControl:(id)a0;
- (id)previewPanel:(id)a0 previewItemAtIndex:(long long)a1;
- (BOOL)acceptsPreviewPanelControl:(id)a0;
- (void).cxx_destruct;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)a0;
- (id)collectionView:(id)a0 itemForRepresentedObjectAtIndexPath:(id)a1;
- (void)deleteSelection:(id)a0;
- (id)_selectionIndexSet:(id)a0;
- (id)actionableIndexes:(id)a0;
- (void)attachmentsDidChange;
- (void)chatDisplayControllerWillChange:(id)a0;
- (void)displayPreviewPanel:(id)a0;
- (void)openSelection:(id)a0;

@end

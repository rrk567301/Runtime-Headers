@class SiriUIClumpView, NSArray, NSString, QLPreviewPanel, NSIndexPath;

@interface SiriUIClumpViewCollectionView : NSCollectionView <QLPreviewPanelDataSource, QLPreviewPanelDelegate>

@property (weak) SiriUIClumpView *parent;
@property (retain) QLPreviewPanel *previewPanel;
@property (retain) NSArray *previewItems;
@property (retain) NSIndexPath *overrideItemPath;
@property BOOL wasHiddenOnLastSetFrameSize;
@property BOOL acceptsFirstMouse;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)previewPanel:(id)a0 handleEvent:(id)a1;
- (void)mouseDown:(id)a0;
- (id)accessibilityLabel;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)dealloc;
- (void)keyDown:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })previewPanel:(id)a0 sourceFrameOnScreenForPreviewItem:(id)a1;
- (id)accessibilityIdentifier;
- (void)copy:(id)a0;
- (void)endPreviewPanelControl:(id)a0;
- (void)beginPreviewPanelControl:(id)a0;
- (id)previewPanel:(id)a0 previewItemAtIndex:(long long)a1;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (BOOL)acceptsPreviewPanelControl:(id)a0;
- (void).cxx_destruct;
- (long long)numberOfPreviewItemsInPreviewPanel:(id)a0;
- (BOOL)isAccessibilitySelectorAllowed:(SEL)a0;
- (BOOL)acceptsFirstMouse:(id)a0;
- (void)pressureChangeWithEvent:(id)a0;
- (BOOL)previewPanel:(id)a0 shouldOpenURL:(id)a1 forPreviewItem:(id)a2;
- (void)quickLookWithEvent:(id)a0;
- (void)quickLook:(id)a0;
- (void)closeQuickLookWithEvent:(id)a0;

@end

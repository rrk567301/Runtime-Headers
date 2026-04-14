@class NSString, PDFDocumentViewPrivate;

@interface PDFDocumentView : NSView <PDFAccessibilityNodeParent, PDFPageBackgroundManagerDelegate, PDFDocumentPageChangeDelegate> {
    PDFDocumentViewPrivate *_private;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)document;
- (id)accessibilitySubrole;
- (id)accessibilityChildren;
- (id)accessibilityRole;
- (id)accessibilityLabel;
- (id)accessibilityHitTest:(struct CGPoint { double x0; double x1; })a0;
- (unsigned long long)accessibilityArrayAttributeCount:(id)a0;
- (BOOL)isAccessibilityElement;
- (void)drawRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)setAccessibilityFocused:(BOOL)a0;
- (id)accessibilityCustomRotors;
- (id)accessibilitySelectedText;
- (void)setDocument:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_renderedContentRect;
- (void)_updateVisibility;
- (void)setSelection:(id)a0;
- (id)pdfView;
- (id)pageViewForPageAtIndex:(unsigned long long)a0;
- (void)willInsertPage:(id)a0 atIndex:(unsigned long long)a1;
- (void)didInsertPage:(id)a0 atIndex:(unsigned long long)a1;
- (void)willRemovePage:(id)a0 atIndex:(unsigned long long)a1;
- (void)didRemovePage:(id)a0 atIndex:(unsigned long long)a1;
- (void)willSwapPage:(id)a0 atIndex:(unsigned long long)a1 forPage:(id)a2 atIndex:(unsigned long long)a3;
- (void)didSwapPage:(id)a0 atIndex:(unsigned long long)a1 forPage:(id)a2 atIndex:(unsigned long long)a3;
- (id)accessibilityPageElements;
- (id)initWithPDFView:(id)a0;
- (void)updateVisibility;
- (void)layoutDocumentView;
- (void)resetAccessibilityTree;
- (id)accessibilityDocumentController;
- (id)pageBackgroundManager;
- (id)backgroundImageForPage:(id)a0 withQuality:(int *)a1;
- (void)recieveBackgroundImage:(id)a0 atBackgroundQuality:(int)a1 forPage:(id)a2;
- (void)willForceUpdate;
- (void)forceUpdateActivePageIndex:(unsigned long long)a0 withMaxDuration:(double)a1;
- (id)pageViews;
- (id)createPageViewForPageAtIndex:(unsigned long long)a0 withFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void)removePageViewForPageAtIndex:(unsigned long long)a0;
- (struct CGSize { double x0; double x1; })documentViewSize;
- (void)changedBoundsForBoxNotification:(id)a0;
- (void)didRotatePageNotification:(id)a0;
- (id)_createPageView:(id)a0;
- (struct CGPoint { double x0; double x1; })_pixelAlignPageFrameOrigin:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)_updateVisibilityDelegateForVisiblePageView:(id)a0 atIndex:(unsigned long long)a1;
- (void)_removePageOverlaysStartingAtIndex:(unsigned long long)a0;
- (void)_shiftPagesAtIndex:(unsigned long long)a0 downwards:(BOOL)a1;
- (void)_reAddPageOverlaysStartingAtIndex:(unsigned long long)a0;
- (void)previewRotateShiftPages:(double)a0;

@end

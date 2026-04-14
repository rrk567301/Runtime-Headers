@class AKController, AKModelController, PDFView, NSView, NSString, PDFDocument, PDFAKDocumentAdaptorPrivate;
@protocol PDFAKControllerDelegateProtocol;

@interface PDFAKDocumentAdaptor : NSObject <AKControllerDelegateProtocol> {
    PDFAKDocumentAdaptorPrivate *_private;
}

@property (weak, nonatomic) PDFView *pdfView;
@property (readonly, weak, nonatomic) PDFDocument *pdfDocument;
@property (readonly, nonatomic) AKController *akMainController;
@property (readonly, nonatomic) AKModelController *akDocumentModelController;
@property (readonly, nonatomic) NSView *akToolbarView;
@property (weak, nonatomic) id<PDFAKControllerDelegateProtocol> PDFAKControllerDelegate;
@property (readonly, nonatomic) BOOL supportsImageDescriptionEditing;
@property (readonly, copy, nonatomic) NSString *originalImageDescription;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)isHandlingEditDetected;
+ (void)setIsHandlingEditDetected:(BOOL)a0;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_teardown;
- (void)teardown;
- (void)editDetectedForAnnotationController:(id)a0;
- (id)controller:(id)a0 willSetToolbarItems:(id)a1;
- (id)popoverPresentingViewControllerForAnnotationController:(id)a0;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })positioningRectForCandidatePicker;
- (struct CGAffineTransform { double x0; double x1; double x2; double x3; double x4; double x5; })_compensatingAffineTransformForPage:(id)a0;
- (id)undoManagerForAnnotationController:(id)a0;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromOverlayToModelWithPageIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (struct CGPoint { double x0; double x1; })convertPoint:(struct CGPoint { double x0; double x1; })a0 fromModelToOverlayWithPageIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })maxPageRectWithPageIndex:(unsigned long long)a0 forAnnotationController:(id)a1;
- (id)newContentSnapshotPDFDataIncludingAdornments:(BOOL)a0 atScale:(double)a1 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 onOverlayAtPageIndex:(unsigned long long)a3 forAnnotationController:(id)a4;
- (double)modelBaseScaleFactorOfPageAtIndex:(unsigned long long)a0 forAnnotationController:(id)a1;
- (void)editCheckpointReachedForAnnotationController:(id)a0;
- (void)penStrokeCompletedForAnnotationController:(id)a0;
- (void)setPreferredCursor:(id)a0 forAnnotationController:(id)a1;
- (void)controllerWillEnterToolMode:(id)a0;
- (void)controllerDidEnterToolMode:(id)a0;
- (void)controllerWillExitToolMode:(id)a0;
- (void)controllerDidExitToolMode:(id)a0;
- (void)positionSketchOverlay:(id)a0 forAnnotationController:(id)a1;
- (BOOL)controllerShouldDetectFormElements:(id)a0;
- (BOOL)shouldPlaceFormElementAtPoint:(struct CGPoint { double x0; double x1; })a0 onOverlayAtPageIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (BOOL)shouldPlaceProposedFormElementAtRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 onOverlayAtPageIndex:(unsigned long long)a1 forAnnotationController:(id)a2;
- (id)layerContainingQuickBackgroundForLoupeOnOverlayAtPageIndex:(unsigned long long)a0 forAnnotationController:(id)a1;
- (void)controllerWillShowSignatureCaptureView:(id)a0;
- (void)controllerWillDismissSignatureCaptureView:(id)a0;
- (void)controllerWillShowSignatureManagerView:(id)a0;
- (void)controllerWillDismissSignatureManagerView:(id)a0;
- (void)rotateRight:(id)a0;
- (void)rotateLeft:(id)a0;
- (BOOL)requestPermissionForController:(id)a0 toPerformActionFromSender:(long long)a1;
- (BOOL)hasHighlightableSelectionForAnnotationController:(id)a0;
- (void)controller:(id)a0 performActionForMode:(unsigned long long)a1 fromSender:(long long)a2 withAttribute:(long long)a3 onPageAtIndex:(unsigned long long)a4;
- (id)initWithPDFDocument:(id)a0 andView:(id)a1;
- (void)pdfDocument:(id)a0 didInsertPage:(id)a1 atIndex:(unsigned long long)a2;
- (void)pdfDocumentDidRemoveAllPagesOrPlaceholders:(id)a0;
- (void)pdfDocument:(id)a0 didReplacePagePlaceholder:(id)a1 atIndex:(unsigned long long)a2 withPage:(id)a3;
- (void)pdfDocument:(id)a0 didRemovePage:(id)a1 atIndex:(unsigned long long)a2;
- (void)pdfDocument:(id)a0 didExchangePage:(id)a1 atIndex:(unsigned long long)a2 withPage:(id)a3 atIndex:(unsigned long long)a4;
- (void)_pdfDocumentDidUnlock:(id)a0;
- (void)_pdfViewDidLayout:(id)a0;
- (void)_pdfViewDidChangeScale:(id)a0;
- (unsigned long long)_markupStyleForAttributeTag:(long long)a0;
- (void)_updateActiveMarkupPropertiesForMode:(unsigned long long)a0 fromSender:(long long)a1 withMarkupStyle:(unsigned long long)a2;
- (void)_scheduleDelayedModelBaseScaleFactorCalculation;
- (void)_delayedModelBaseScaleFactorCalculation;
- (id)rulerHostingView;
- (BOOL)rulerHostWantsSharedRuler;

@end

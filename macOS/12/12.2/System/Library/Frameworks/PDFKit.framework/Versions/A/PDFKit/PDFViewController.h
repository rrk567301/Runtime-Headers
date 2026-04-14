@class PDFViewControllerPrivate;

@interface PDFViewController : NSObject {
    PDFViewControllerPrivate *_private;
}

- (void)dealloc;
- (void).cxx_destruct;
- (void)mouseDown:(id)a0;
- (id)initWithView:(id)a0;
- (void)_selectionChanged;
- (void)activateNextAnnotation:(BOOL)a0;
- (void)interactWithAnnotation:(id)a0;
- (id)activeAnnotation;
- (void)removeControlForAnnotation:(id)a0;
- (void)setActiveAnnotation:(id)a0;
- (void)markupStylePicker:(id)a0 annotation:(id)a1 setMarkupStyle:(unsigned long long)a2;
- (void)_didEndChangingSelection;
- (void)trackMouse:(id)a0 forAnnotation:(id)a1;
- (id)_annotationPreceding:(id)a0 wrapAround:(BOOL)a1;
- (id)_annotationFollowing:(id)a0 wrapAround:(BOOL)a1;
- (void)_addControlForAnnotation:(id)a0;
- (void)_postAnnotationHitNotification:(id)a0;
- (id)_pageViewForAnnotation:(id)a0;
- (BOOL)_shouldUpdateMarkupWithStyle:(unsigned long long)a0 onPage:(id)a1 forIndexSet:(id)a2;
- (void)_doButtonHit:(id)a0;
- (void)_postAnnotationWillHitNotification:(id)a0;
- (void)_handleButtonHit:(id)a0;
- (void)trackMouse:(id)a0 forPDFScannerResult:(id)a1 onPage:(id)a2;
- (void)trackMarqueeTextSelection:(id)a0;
- (BOOL)shouldBeginDrag:(id)a0;
- (BOOL)dragSelectionWithEvent:(id)a0;
- (void)trackStandardTextSelection:(id)a0;
- (void)addComboBoxControlForAnnotation:(id)a0 withEvent:(id)a1;
- (void)_annotationHit:(id)a0 atLocation:(struct CGPoint { double x0; double x1; })a1;
- (void)choiceMenu:(id)a0;
- (void)_updateSelectionMarkups;
- (void)setMarkupStyle:(unsigned long long)a0 forSelection:(id)a1 clearSelection:(BOOL)a2;
- (void)setMarkupStyle:(unsigned long long)a0 forAnnotation:(id)a1;
- (struct CGPoint { double x0; double x1; })_convertPoint:(struct CGPoint { double x0; double x1; })a0 toPageView:(id)a1;
- (void)editNoteForAnnotation:(id)a0;
- (void)removeNoteForAnnotation:(id)a0;
- (BOOL)isUpdatingSelectionMarkups;

@end

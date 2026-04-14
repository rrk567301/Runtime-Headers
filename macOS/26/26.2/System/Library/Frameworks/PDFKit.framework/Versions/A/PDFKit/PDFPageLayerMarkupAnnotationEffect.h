@interface PDFPageLayerMarkupAnnotationEffect : PDFPageLayerEffect

- (id)annotation;
- (void)removeFromSuperlayer;
- (void)update;
- (id)UUID;
- (void)_updateNoteLayer;

@end

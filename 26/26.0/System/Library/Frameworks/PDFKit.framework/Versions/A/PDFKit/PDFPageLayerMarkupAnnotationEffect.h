@interface PDFPageLayerMarkupAnnotationEffect : PDFPageLayerEffect

- (id)UUID;
- (void)removeFromSuperlayer;
- (void)update;
- (id)annotation;
- (void)_updateNoteLayer;

@end

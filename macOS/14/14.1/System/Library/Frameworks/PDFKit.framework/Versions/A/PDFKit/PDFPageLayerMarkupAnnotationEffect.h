@interface PDFPageLayerMarkupAnnotationEffect : PDFPageLayerEffect

- (id)UUID;
- (void)update;
- (id)annotation;
- (void)removeFromSuperlayer;
- (void)_updateNoteLayer;

@end

@interface PDFPageLayerMarkupAnnotationEffect : PDFPageLayerEffect

- (void)update;
- (id)UUID;
- (void)removeFromSuperlayer;
- (id)annotation;
- (void)_updateNoteLayer;

@end

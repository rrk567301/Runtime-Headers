@interface PDFPageLayerMarkupAnnotationEffect : PDFPageLayerEffect

- (id)UUID;
- (void)update;
- (void)removeFromSuperlayer;
- (id)annotation;
- (void)_updateNoteLayer;

@end

@interface PDFPageLayerMarkupAnnotationEffect : PDFPageLayerEffect

- (void)removeFromSuperlayer;
- (id)annotation;
- (void)update;
- (id)UUID;
- (void)_updateNoteLayer;

@end

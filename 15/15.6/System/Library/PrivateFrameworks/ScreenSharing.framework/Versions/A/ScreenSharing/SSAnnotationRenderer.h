@interface SSAnnotationRenderer : NSObject

+ (id)sharedRenderer;

- (void)dealloc;
- (id)init;
- (void)handleSafeViewAnnotation:(struct CGPoint { double x0; double x1; })a0 flags:(unsigned int)a1;
- (char)hideAllPointers;
- (int)startAnnotation;
- (char)showAllPointers;
- (char)hidePointerForUser:(id)a0;
- (char)showPointerForUser:(id)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (void)stopAnnotation;

@end

@interface SSAnnotationRenderer : NSObject

+ (id)sharedRenderer;

- (void)dealloc;
- (id)init;
- (int)startAnnotation;
- (BOOL)showPointerForUser:(id)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (BOOL)hidePointerForUser:(id)a0;
- (BOOL)hideAllPointers;
- (BOOL)showAllPointers;
- (void)stopAnnotation;
- (void)handleSafeViewAnnotation:(struct CGPoint { double x0; double x1; })a0 flags:(unsigned int)a1;

@end

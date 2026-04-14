@interface SSAnnotationRenderer : NSObject

+ (id)sharedRenderer;

- (id)init;
- (void)dealloc;
- (void)handleSafeViewAnnotation:(struct CGPoint { double x0; double x1; })a0 flags:(unsigned int)a1;
- (BOOL)hideAllPointers;
- (int)startAnnotation;
- (BOOL)showAllPointers;
- (BOOL)hidePointerForUser:(id)a0;
- (BOOL)showPointerForUser:(id)a0 location:(struct CGPoint { double x0; double x1; })a1;
- (void)stopAnnotation;

@end

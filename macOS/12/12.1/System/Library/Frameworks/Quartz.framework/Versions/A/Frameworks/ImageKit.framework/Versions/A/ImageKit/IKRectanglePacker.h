@interface IKRectanglePacker : NSObject {
    void *_packerTree;
    struct CGPoint { double x; double y; } _padding;
}

- (void)finalize;
- (struct CGSize { double x0; double x1; })size;
- (void)dealloc;
- (BOOL)isEmpty;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)setPadding:(struct CGSize { double x0; double x1; })a0;
- (float)fragmentation;
- (BOOL)allocateRectWithSize:(struct CGSize { double x0; double x1; })a0 rectOut:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (BOOL)rectIsUsed:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (BOOL)releaseRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned int)usedArea;
- (void)drawRegionsInCurrentGLContext;

@end

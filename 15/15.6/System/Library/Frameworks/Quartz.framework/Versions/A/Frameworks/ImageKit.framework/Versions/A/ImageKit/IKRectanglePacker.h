@interface IKRectanglePacker : NSObject {
    void *_packerTree;
    struct CGPoint { double x; double y; } _padding;
}

- (void)dealloc;
- (void)finalize;
- (char)isEmpty;
- (struct CGSize { double x0; double x1; })size;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)setPadding:(struct CGSize { double x0; double x1; })a0;
- (char)allocateRectWithSize:(struct CGSize { double x0; double x1; })a0 rectOut:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } *)a1;
- (void)drawRegionsInCurrentGLContext;
- (float)fragmentation;
- (char)rectIsUsed:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (char)releaseRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (unsigned int)usedArea;

@end

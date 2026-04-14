@interface PNGRenderer : CGRenderer {
    struct __CFURL { } *fullURL;
    struct CGColor { } *background;
    struct CGColorSpace { } *colorSpace;
}

- (void)dealloc;
- (id)init;
- (void)setFileURL:(id)a0;
- (BOOL)setCanvasWidth:(unsigned int)a0 height:(unsigned int)a1;
- (void)flushRender;
- (struct CGImage { } *)cgimage;

@end

@interface ICSwiftSystemPaperImageGenerator : ICSystemPaperImageGenerator {
    void /* unknown type, empty encoding */ document;
    void /* unknown type, empty encoding */ cachedPaper;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } paperContentBounds;
@property (nonatomic, readonly) BOOL hasDeepLink;

- (void).cxx_destruct;
- (id)initWithPaperAttachment:(id)a0 useActivePaper:(BOOL)a1;
- (void)imageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(id /* block */)a1;
- (id)imageWithFullResolution:(BOOL)a0 inverted:(BOOL)a1;
- (BOOL)drawPaperInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end

@interface ICSwiftSystemPaperImageGenerator : ICSystemPaperImageGenerator {
    void /* unknown type, empty encoding */ document;
    void /* unknown type, empty encoding */ cachedPaper;
}

@property (nonatomic, readonly) struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; } paperContentBounds;
@property (nonatomic, readonly) char hasDeepLink;

- (void).cxx_destruct;
- (char)drawPaperInRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)imageWithBounds:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 completion:(id /* block */)a1;
- (id)imageWithFullResolution:(char)a0 inverted:(char)a1;
- (id)initWithPaperAttachment:(id)a0 useActivePaper:(char)a1;

@end

@class KHProject, KHProductSpecificationComponent;

@interface KHComponentGenerator : NSObject {
    double _scale;
}

@property (retain, nonatomic) KHProductSpecificationComponent *component;
@property (retain, nonatomic) KHProject *project;

+ (struct CGImage { } *)createImageFromBitmapContext:(struct CGContext { } *)a0;

- (void)dealloc;
- (long long)numberOfSections;
- (double)heightForSection:(long long)a0;
- (id)photoFrames;
- (void)fillPrintContext:(struct CGContext { } *)a0 scale:(double)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (double)widthWithBleedForSection:(long long)a0;
- (double)heightWithBleedForSection:(long long)a0;
- (id)initWithComponent:(id)a0 project:(id)a1;
- (double)widthForSection:(long long)a0;
- (void)fillContext:(struct CGContext { } *)a0 scale:(double)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 renderingIntent:(unsigned long long)a3 section:(long long)a4 progressDelegate:(id)a5;
- (BOOL)preflightPhotoFrames:(id *)a0;
- (struct CGImage { } *)cgImageForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 renderingIntent:(unsigned long long)a2 section:(long long)a3 progressDelegate:(id)a4 error:(id *)a5;
- (void)fillPrintContext300DPI:(struct CGContext { } *)a0 scale:(double)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (struct CGColorSpace { } *)_createColorspace;
- (struct CGContext { } *)createBitmapContextForRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 scale:(double)a1 renderingIntent:(unsigned long long)a2 section:(long long)a3 progressDelegate:(id)a4 error:(id *)a5;
- (void)fillPrintContext72DPI:(struct CGContext { } *)a0 scale:(double)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2;
- (void)drawBackgroundInContext:(struct CGContext { } *)a0 fromLayout:(id)a1 forPath:(struct CGPath { } *)a2 scale:(double)a3;
- (BOOL)hasTemplate;
- (double)templateWidth;
- (double)templateHeight;
- (BOOL)shouldDrawGuidesForRenderingIntent:(unsigned long long)a0;
- (void)drawSpineText:(id)a0 inRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 context:(struct CGContext { } *)a2;
- (void)drawGuideRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 context:(struct CGContext { } *)a1;
- (void)drawGuideLineFromPoint:(struct CGPoint { double x0; double x1; })a0 toPoint:(struct CGPoint { double x0; double x1; })a1 context:(struct CGContext { } *)a2;
- (id)layoutAtIndex:(unsigned long long)a0 maxCount:(unsigned long long)a1;
- (void)clearTextAttribute:(id)a0 layout:(id)a1;

@end

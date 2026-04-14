@interface KHComponentGeneratorDoublePanel : KHComponentGenerator

- (double)heightForSection:(long long)a0;
- (id)photoFrames;
- (void)fillContext:(struct CGContext { } *)a0 scale:(double)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 renderingIntent:(unsigned long long)a3 section:(long long)a4 progressDelegate:(id)a5;
- (double)widthForSection:(long long)a0;
- (double)widthWithBleedForSection:(long long)a0;
- (double)heightWithBleedForSection:(long long)a0;
- (void)drawBackLayoutInContext:(struct CGContext { } *)a0 scale:(double)a1 rect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 environment:(id)a3;

@end

@class NSString;

@interface CUIMutableNamedGradient : CUINamedGradient {
    NSString *_appearance;
}

- (id)appearance;
- (void)setAppearance:(id)a0;
- (void)dealloc;
- (void)setGradientEndPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setGradientStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setGradientType:(long long)a0;
- (void)setColors:(id)a0 andStops:(id)a1;

@end

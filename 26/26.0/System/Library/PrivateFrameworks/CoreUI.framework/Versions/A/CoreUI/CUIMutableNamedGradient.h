@class NSString;

@interface CUIMutableNamedGradient : CUINamedGradient {
    NSString *_appearance;
}

- (void)dealloc;
- (void)setAppearance:(id)a0;
- (id)appearance;
- (void)setGradientEndPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setGradientStartPoint:(struct CGPoint { double x0; double x1; })a0;
- (void)setGradientType:(long long)a0;
- (void)setColors:(id)a0 andStops:(id)a1;

@end

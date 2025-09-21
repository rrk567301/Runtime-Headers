@interface SHInnerCircleMaskLayer : SHPaletteLayer

@property double innerCircleRelativeSize;

+ (char)needsDisplayForKey:(id)a0;

- (void)drawInContext:(struct CGContext { } *)a0;
- (void)setup;

@end

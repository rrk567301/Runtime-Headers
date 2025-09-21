@class SHPalette;

@interface SHPaletteLayer : CALayer

@property (readonly) SHPalette *palette;

- (void)setup;
- (id)init;
- (id)initWithCoder:(id)a0;
- (void).cxx_destruct;
- (id)initWithPalette:(id)a0;

@end

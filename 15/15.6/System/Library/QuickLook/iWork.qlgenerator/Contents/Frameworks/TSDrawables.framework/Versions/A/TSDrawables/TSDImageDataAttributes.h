@interface TSDImageDataAttributes : TSPDataAttributes

@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) char hasPixelSize;
@property (readonly, nonatomic) char imageIsSRGB;
@property (readonly, nonatomic) char hasImageIsSRGB;
@property (readonly, nonatomic) char shouldBeInterpretedAsGenericIfUntagged;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;
- (struct CGSize { double x0; double x1; })size;
- (id)initWithMessage:(const void *)a0;
- (void)saveToMessage:(void *)a0;
- (id)copyWithIsSRGB:(char)a0;
- (id)initWithIsSRGB:(char)a0;
- (id)copyWithPixelSize:(struct CGSize { double x0; double x1; })a0;
- (id)copyWithShouldBeInterpretedAsGenericIfUntagged:(char)a0;
- (id)initWithPixelSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithShouldBeInterpretedAsGenericIfUntagged:(char)a0;

@end

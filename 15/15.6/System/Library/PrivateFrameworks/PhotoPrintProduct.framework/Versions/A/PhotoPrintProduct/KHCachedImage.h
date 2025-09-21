@interface KHCachedImage : KHImage {
    char _isMaxSize;
}

@property (readonly, nonatomic) struct CGSize { double width; double height; } requestedPixelSize;

- (id)description;
- (char)imageIsSuitableForSize:(struct CGSize { double x0; double x1; })a0;
- (id)initWithImage:(id)a0 requestedPixelSize:(struct CGSize { double x0; double x1; })a1;

@end

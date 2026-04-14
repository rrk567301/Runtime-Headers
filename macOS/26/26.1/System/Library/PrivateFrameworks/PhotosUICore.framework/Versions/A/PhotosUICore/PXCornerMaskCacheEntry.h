@class NSImage;

@interface PXCornerMaskCacheEntry : NSObject

@property (readonly, nonatomic) struct PXCornerRadius { double topLeft; double topRight; double bottomLeft; double bottomRight; } cornerRadius;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;
@property (readonly, nonatomic) NSImage *image;

- (id)description;
- (void).cxx_destruct;
- (id)initWithCornerRadius:(struct PXCornerRadius { double x0; double x1; double x2; double x3; })a0 size:(struct CGSize { double x0; double x1; })a1 image:(id)a2;

@end

@interface _PHPickerResultMetadata : NSObject <NSCopying>

@property (readonly, nonatomic) struct CGSize { double width; double height; } pixelSize;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } preferredCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } acceptableCropRect;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizedFaceAreaRect;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_initWithDictionary:(id)a0;
- (id)dictionaryWithPixelSize:(struct CGSize { double x0; double x1; })a0 preferredCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1 acceptableCropRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a2 normalizedFaceAreaRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

@end

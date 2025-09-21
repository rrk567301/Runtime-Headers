@class NSString;

@interface VUIImageDecorator : NSObject

@property (readonly, nonatomic) struct CGSize { double x0; double x1; } loaderScaleToSize;
@property (readonly, nonatomic) char loaderCropToFit;
@property (readonly, nonatomic) struct CGSize { double x0; double x1; } expectedSize;
@property (readonly, copy, nonatomic) NSString *decoratorIdentifier;

- (char)isEqual:(id)a0;
- (id)decorate:(id)a0 scaledWithSize:(struct CGSize { double x0; double x1; })a1 croppedToFit:(char)a2;

@end

@class NSSet;

@interface IFImageSpecification : NSObject

@property (retain, nonatomic) IFImageSpecification *smallerSpecification;
@property (retain, nonatomic) IFImageSpecification *largerSpecification;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) double scale;
@property (readonly) struct CGSize { double width; double height; } pixelsSize;
@property (readonly) NSSet *tags;

- (double)dimension;
- (struct CGSize { double x0; double x1; })pixelSize;
- (struct CGSize { double x0; double x1; })minimumSize;
- (BOOL)isEqualToImageSpecification:(id)a0;
- (id)description;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 tags:(id)a2;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

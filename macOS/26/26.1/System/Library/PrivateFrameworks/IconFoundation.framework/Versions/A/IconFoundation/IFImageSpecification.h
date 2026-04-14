@class NSSet;

@interface IFImageSpecification : NSObject

@property (retain, nonatomic) IFImageSpecification *smallerSpecification;
@property (retain, nonatomic) IFImageSpecification *largerSpecification;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) double scale;
@property (readonly) struct CGSize { double width; double height; } pixelsSize;
@property (readonly) NSSet *tags;

- (struct CGSize { double x0; double x1; })pixelSize;
- (double)dimension;
- (struct CGSize { double x0; double x1; })minimumSize;
- (unsigned long long)hash;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 tags:(id)a2;
- (id)description;
- (BOOL)isEqualToImageSpecification:(id)a0;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end

@class NSSet;

@interface IFImageSpecification : NSObject

@property (retain, nonatomic) IFImageSpecification *smallerSpecification;
@property (retain, nonatomic) IFImageSpecification *largerSpecification;
@property (readonly) NSSet *tags;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) double scale;
@property (readonly) struct CGSize { double width; double height; } pixelsSize;
@property (readonly) double relativeInset;

- (double)dimension;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (struct CGSize { double x0; double x1; })pixelSize;
- (void).cxx_destruct;
- (id)description;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 tags:(id)a2;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 relativeInset:(double)a2;
- (struct CGSize { double x0; double x1; })minimumSize;
- (BOOL)isEqualToImageSpecification:(id)a0;

@end

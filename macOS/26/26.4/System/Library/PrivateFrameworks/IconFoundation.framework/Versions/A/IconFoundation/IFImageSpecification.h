@class NSSet;

@interface IFImageSpecification : NSObject

@property (retain, nonatomic) IFImageSpecification *smallerSpecification;
@property (retain, nonatomic) IFImageSpecification *largerSpecification;
@property (readonly) NSSet *tags;
@property (readonly) struct CGSize { double width; double height; } size;
@property (readonly) double scale;
@property (readonly) struct CGSize { double width; double height; } pixelsSize;
@property (readonly) double relativeInset;

- (struct CGSize { double x0; double x1; })minimumSize;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1;
- (struct CGSize { double x0; double x1; })pixelSize;
- (double)dimension;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 relativeInset:(double)a2;
- (BOOL)isEqualToImageSpecification:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0 scale:(double)a1 tags:(id)a2;
- (unsigned long long)hash;
- (id)description;

@end

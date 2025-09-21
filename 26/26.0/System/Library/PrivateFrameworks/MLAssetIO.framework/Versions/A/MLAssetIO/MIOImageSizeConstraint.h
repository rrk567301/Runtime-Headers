@class NSArray;

@interface MIOImageSizeConstraint : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct _MIORange { long long lowerBound; long long upperBound; } pixelsWideRange;
@property (readonly, nonatomic) struct _MIORange { long long lowerBound; long long upperBound; } pixelsHighRange;
@property (readonly, copy, nonatomic) NSArray *enumeratedImageSizes;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSpecification:(const void *)a0;
- (id)init;
- (id)description;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)initWithEnumeratedImageSizes:(id)a0;
- (id)initWithPixelsWideRange:(struct _MIORange { long long x0; long long x1; })a0 pixelsHighRange:(struct _MIORange { long long x0; long long x1; })a1;
- (BOOL)allowsImageSize:(id)a0;

@end

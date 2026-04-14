@class NSArray;

@interface MIOImageSizeConstraint : NSObject

@property (readonly, nonatomic) long long type;
@property (readonly, nonatomic) struct _MIORange { long long lowerBound; long long upperBound; } pixelsWideRange;
@property (readonly, nonatomic) struct _MIORange { long long lowerBound; long long upperBound; } pixelsHighRange;
@property (readonly, copy, nonatomic) NSArray *enumeratedImageSizes;

- (id)initWithSpecification:(const void *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)init;
- (id)description;
- (id)initWithEnumeratedImageSizes:(id)a0;
- (id)initWithPixelsWideRange:(struct _MIORange { long long x0; long long x1; })a0 pixelsHighRange:(struct _MIORange { long long x0; long long x1; })a1;
- (BOOL)allowsImageSize:(id)a0;

@end

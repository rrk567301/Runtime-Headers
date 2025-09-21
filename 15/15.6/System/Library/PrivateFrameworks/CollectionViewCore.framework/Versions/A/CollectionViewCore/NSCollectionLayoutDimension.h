@interface NSCollectionLayoutDimension : NSObject <NSCopying>

@property (nonatomic) long long semantic;
@property (nonatomic) double dimension;
@property (readonly, nonatomic, getter=_isStretchableEstimated) char _stretchableEstimated;
@property (readonly, nonatomic) char isFractionalWidth;
@property (readonly, nonatomic) char isFractionalHeight;
@property (readonly, nonatomic) char isAbsolute;
@property (readonly, nonatomic) char isEstimated;
@property (readonly, nonatomic) char isUniformAcrossSiblings;

+ (id)_dimensionWithDimension:(double)a0 semantic:(long long)a1;
+ (id)estimatedDimension:(double)a0;
+ (id)fractionalHeightDimension:(double)a0;
+ (id)fractionalWidthDimension:(double)a0;
+ (id)absoluteDimension:(double)a0;
+ (id)uniformAcrossSiblingsWithEstimate:(double)a0;
+ (id)_stretchableEstimated:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (char)isEqual:(id)a0;
- (id)initWithDimension:(double)a0 semantic:(long long)a1;

@end

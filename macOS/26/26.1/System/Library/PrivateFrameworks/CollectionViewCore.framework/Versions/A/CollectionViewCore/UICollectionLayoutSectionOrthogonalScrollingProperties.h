@interface UICollectionLayoutSectionOrthogonalScrollingProperties : NSObject <NSCopying>

@property (nonatomic) double decelerationRate;
@property (nonatomic) long long bounce;

- (id)description;
- (id)_descriptionProperties;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)init;

@end

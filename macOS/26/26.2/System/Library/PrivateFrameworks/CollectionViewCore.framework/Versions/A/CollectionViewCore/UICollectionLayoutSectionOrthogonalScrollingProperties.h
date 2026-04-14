@interface UICollectionLayoutSectionOrthogonalScrollingProperties : NSObject <NSCopying>

@property (nonatomic) double decelerationRate;
@property (nonatomic) long long bounce;

- (id)_descriptionProperties;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (id)init;

@end

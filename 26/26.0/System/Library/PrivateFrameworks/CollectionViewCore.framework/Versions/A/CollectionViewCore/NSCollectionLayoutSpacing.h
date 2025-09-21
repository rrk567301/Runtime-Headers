@interface NSCollectionLayoutSpacing : NSObject <NSCopying> {
    double _spacing;
    BOOL _isFlexible;
}

@property (readonly, nonatomic) double spacing;
@property (readonly, nonatomic) BOOL isFlexibleSpacing;
@property (readonly, nonatomic) BOOL isFixedSpacing;

+ (id)defaultSpacing;
+ (id)fixedSpacing:(double)a0;
+ (id)flexibleSpacing:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithSpacing:(double)a0 isFlexible:(BOOL)a1;
- (id)description;
- (id)_externalDescription;
- (BOOL)isEqual:(id)a0;
- (BOOL)_hasSpacing;

@end

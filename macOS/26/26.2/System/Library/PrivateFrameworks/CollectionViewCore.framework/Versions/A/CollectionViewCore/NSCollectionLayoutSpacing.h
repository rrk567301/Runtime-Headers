@interface NSCollectionLayoutSpacing : NSObject <NSCopying> {
    double _spacing;
    BOOL _isFlexible;
}

@property (readonly, nonatomic) double spacing;
@property (readonly, nonatomic) BOOL isFlexibleSpacing;
@property (readonly, nonatomic) BOOL isFixedSpacing;

+ (id)fixedSpacing:(double)a0;
+ (id)defaultSpacing;
+ (id)flexibleSpacing:(double)a0;

- (BOOL)_hasSpacing;
- (BOOL)isEqual:(id)a0;
- (id)initWithSpacing:(double)a0 isFlexible:(BOOL)a1;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)_externalDescription;
- (id)description;

@end

@interface NSCollectionLayoutSpacing : NSObject <NSCopying> {
    double _spacing;
    char _isFlexible;
}

@property (readonly, nonatomic) double spacing;
@property (readonly, nonatomic) char isFlexibleSpacing;
@property (readonly, nonatomic) char isFixedSpacing;

+ (id)defaultSpacing;
+ (id)fixedSpacing:(double)a0;
+ (id)flexibleSpacing:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)description;
- (char)isEqual:(id)a0;
- (id)_externalDescription;
- (char)_hasSpacing;
- (id)initWithSpacing:(double)a0 isFlexible:(char)a1;

@end

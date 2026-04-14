@interface NSCollectionLayoutSpacing : NSObject <NSCopying> {
    double _spacing;
    BOOL _isFlexible;
}

@property (readonly) double spacing;
@property (readonly) BOOL isFlexibleSpacing;
@property (readonly) BOOL isFixedSpacing;

+ (id)defaultSpacing;
+ (id)flexibleSpacing:(double)a0;
+ (id)fixedSpacing:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)_externalDescription;
- (id)initWithSpacing:(double)a0 isFlexible:(BOOL)a1;
- (BOOL)_hasSpacing;

@end

@class NSCollectionLayoutSpacing;

@interface NSCollectionLayoutEdgeSpacing : NSObject <NSCopying> {
    NSCollectionLayoutSpacing *_leading;
    NSCollectionLayoutSpacing *_top;
    NSCollectionLayoutSpacing *_trailing;
    NSCollectionLayoutSpacing *_bottom;
}

@property (readonly, nonatomic) NSCollectionLayoutSpacing *leading;
@property (readonly, nonatomic) NSCollectionLayoutSpacing *top;
@property (readonly, nonatomic) NSCollectionLayoutSpacing *trailing;
@property (readonly, nonatomic) NSCollectionLayoutSpacing *bottom;

+ (id)flexibleSpacing:(double)a0;
+ (id)fixedSpacing:(double)a0;
+ (id)defaultSpacing;
+ (id)spacingForLeading:(id)a0 top:(id)a1 trailing:(id)a2 bottom:(id)a3;

- (id)_externalDescription;
- (double)spacingForEdge:(unsigned long long)a0;
- (BOOL)isSpacingFlexibleForEdge:(unsigned long long)a0;
- (id)description;
- (id)initWithLeading:(id)a0 top:(id)a1 trailing:(id)a2 bottom:(id)a3;
- (BOOL)_hasSpacing;
- (void).cxx_destruct;
- (struct CVCDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })edgeOutsets;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)_spacingForEdge:(unsigned long long)a0;
- (BOOL)isSpacingFixedForEdge:(unsigned long long)a0;

@end

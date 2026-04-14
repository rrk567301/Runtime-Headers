@class NSCollectionLayoutSpacing;

@interface NSCollectionLayoutEdgeSpacing : NSObject <NSCopying> {
    NSCollectionLayoutSpacing *_leading;
    NSCollectionLayoutSpacing *_top;
    NSCollectionLayoutSpacing *_trailing;
    NSCollectionLayoutSpacing *_bottom;
}

@property (readonly) NSCollectionLayoutSpacing *leading;
@property (readonly) NSCollectionLayoutSpacing *top;
@property (readonly) NSCollectionLayoutSpacing *trailing;
@property (readonly) NSCollectionLayoutSpacing *bottom;

+ (id)defaultSpacing;
+ (id)flexibleSpacing:(double)a0;
+ (id)fixedSpacing:(double)a0;
+ (id)spacingForLeading:(id)a0 top:(id)a1 trailing:(id)a2 bottom:(id)a3;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (void).cxx_destruct;
- (id)_externalDescription;
- (BOOL)_hasSpacing;
- (struct NSDirectionalEdgeInsets { double x0; double x1; double x2; double x3; })edgeOutsets;
- (id)initWithLeading:(id)a0 top:(id)a1 trailing:(id)a2 bottom:(id)a3;
- (id)_spacingForEdge:(unsigned long long)a0;
- (BOOL)isSpacingFixedForEdge:(unsigned long long)a0;
- (BOOL)isSpacingFlexibleForEdge:(unsigned long long)a0;
- (double)spacingForEdge:(unsigned long long)a0;

@end

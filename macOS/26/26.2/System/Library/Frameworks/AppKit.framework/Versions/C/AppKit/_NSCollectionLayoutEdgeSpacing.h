@class _NSCollectionLayoutSpacing;

@interface _NSCollectionLayoutEdgeSpacing : NSObject <NSCopying, _NSCollectionLayoutAPIRespresenting> {
    _NSCollectionLayoutSpacing *_leading;
    _NSCollectionLayoutSpacing *_top;
    _NSCollectionLayoutSpacing *_trailing;
    _NSCollectionLayoutSpacing *_bottom;
}

@property (readonly, nonatomic) _NSCollectionLayoutSpacing *leading;
@property (readonly, nonatomic) _NSCollectionLayoutSpacing *top;
@property (readonly, nonatomic) _NSCollectionLayoutSpacing *trailing;
@property (readonly, nonatomic) _NSCollectionLayoutSpacing *bottom;

+ (id)spacingForLeading:(id)a0 top:(id)a1 trailing:(id)a2 bottom:(id)a3;
+ (id)fixedSpacing:(double)a0;
+ (id)defaultSpacing;
+ (id)flexibleSpacing:(double)a0;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (id)initWithLeading:(id)a0 top:(id)a1 trailing:(id)a2 bottom:(id)a3;
- (void).cxx_destruct;
- (id)_apiRepresentation;

@end

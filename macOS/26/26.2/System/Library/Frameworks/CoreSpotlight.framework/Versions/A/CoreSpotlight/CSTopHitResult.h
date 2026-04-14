@class CSSearchableItem;

@interface CSTopHitResult : TopHitResult

@property (readonly, nonatomic) CSSearchableItem *resultItem;

- (void).cxx_destruct;
- (id)description;
- (id)initWithRankingItem:(id)a0 resultItem:(id)a1;

@end

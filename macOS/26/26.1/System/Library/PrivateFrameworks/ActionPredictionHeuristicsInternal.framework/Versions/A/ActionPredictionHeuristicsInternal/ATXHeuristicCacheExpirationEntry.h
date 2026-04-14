@class NSString, ATXHeuristicResultCache;

@interface ATXHeuristicCacheExpirationEntry : NSObject

@property (retain, nonatomic) NSString *heuristicName;
@property (weak, nonatomic) ATXHeuristicResultCache *cache;

- (unsigned long long)hash;
- (id)initWithHeuristic:(id)a0 cache:(id)a1;
- (void).cxx_destruct;
- (BOOL)isEqual:(id)a0;

@end

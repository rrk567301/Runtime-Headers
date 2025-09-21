@class NSString, ATXHeuristicResultCache;

@interface ATXHeuristicCacheExpirationEntry : NSObject

@property (retain, nonatomic) NSString *heuristicName;
@property (weak, nonatomic) ATXHeuristicResultCache *cache;

- (id)initWithHeuristic:(id)a0 cache:(id)a1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end

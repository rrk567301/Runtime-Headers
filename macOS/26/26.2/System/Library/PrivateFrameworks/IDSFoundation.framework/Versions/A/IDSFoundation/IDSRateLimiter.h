@class NSMutableDictionary;

@interface IDSRateLimiter : NSObject

@property (nonatomic) long long limit;
@property (nonatomic) double timeLimit;
@property (retain, nonatomic) NSMutableDictionary *cacheMap;
@property (retain, nonatomic) NSMutableDictionary *limitForItem;
@property (retain, nonatomic) NSMutableDictionary *timeLimitForItem;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (void)clearItem:(id)a0;
- (long long)_limitForItem:(id)a0;
- (id)_unlockedDescription;
- (void).cxx_destruct;
- (id)initWithLimit:(long long)a0 timeLimit:(double)a1;
- (BOOL)underLimitForItem:(id)a0 isLastBeforeLimit:(BOOL *)a1;
- (void)configureLimit:(long long)a0 timeLimit:(double)a1 forItem:(id)a2;
- (id)description;
- (void)noteItem:(id)a0;
- (void)clearAllItems;
- (BOOL)underLimitForItem:(id)a0;
- (void)cleanupExpiredItems;
- (double)_timeLimitForItem:(id)a0;
- (double)timeToUnderLimit:(id)a0;

@end

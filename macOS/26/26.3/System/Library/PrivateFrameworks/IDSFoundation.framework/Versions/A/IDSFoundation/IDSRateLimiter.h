@class NSMutableDictionary;

@interface IDSRateLimiter : NSObject

@property (nonatomic) long long limit;
@property (nonatomic) double timeLimit;
@property (retain, nonatomic) NSMutableDictionary *cacheMap;
@property (retain, nonatomic) NSMutableDictionary *limitForItem;
@property (retain, nonatomic) NSMutableDictionary *timeLimitForItem;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (void)cleanupExpiredItems;
- (id)initWithLimit:(long long)a0 timeLimit:(double)a1;
- (id)description;
- (id)_unlockedDescription;
- (void)configureLimit:(long long)a0 timeLimit:(double)a1 forItem:(id)a2;
- (BOOL)underLimitForItem:(id)a0 isLastBeforeLimit:(BOOL *)a1;
- (void).cxx_destruct;
- (void)clearItem:(id)a0;
- (double)timeToUnderLimit:(id)a0;
- (long long)_limitForItem:(id)a0;
- (double)_timeLimitForItem:(id)a0;
- (BOOL)underLimitForItem:(id)a0;
- (void)noteItem:(id)a0;
- (void)clearAllItems;

@end

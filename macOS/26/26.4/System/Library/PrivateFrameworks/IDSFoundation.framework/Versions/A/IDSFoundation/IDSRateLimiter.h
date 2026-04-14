@class NSMutableDictionary;

@interface IDSRateLimiter : NSObject

@property (nonatomic) long long limit;
@property (nonatomic) double timeLimit;
@property (retain, nonatomic) NSMutableDictionary *cacheMap;
@property (retain, nonatomic) NSMutableDictionary *limitForItem;
@property (retain, nonatomic) NSMutableDictionary *timeLimitForItem;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (id)initWithLimit:(long long)a0 timeLimit:(double)a1;
- (void)noteItem:(id)a0;
- (BOOL)underLimitForItem:(id)a0 isLastBeforeLimit:(BOOL *)a1;
- (BOOL)underLimitForItem:(id)a0;
- (id)_unlockedDescription;
- (void).cxx_destruct;
- (void)clearAllItems;
- (void)cleanupExpiredItems;
- (void)clearItem:(id)a0;
- (id)description;
- (long long)_limitForItem:(id)a0;
- (double)_timeLimitForItem:(id)a0;
- (void)configureLimit:(long long)a0 timeLimit:(double)a1 forItem:(id)a2;
- (double)timeToUnderLimit:(id)a0;

@end

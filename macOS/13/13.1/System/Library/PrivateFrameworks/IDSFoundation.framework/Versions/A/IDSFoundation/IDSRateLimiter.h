@class NSMutableDictionary;

@interface IDSRateLimiter : NSObject

@property (nonatomic) long long limit;
@property (nonatomic) double timeLimit;
@property (retain, nonatomic) NSMutableDictionary *cacheMap;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;

- (id)description;
- (void).cxx_destruct;
- (double)timeToUnderLimit:(id)a0;
- (BOOL)underLimitForItem:(id)a0;
- (void)noteItem:(id)a0;
- (id)initWithLimit:(long long)a0 timeLimit:(double)a1;
- (void)clearItem:(id)a0;
- (void)clearAllItems;
- (void)cleanupExpiredItems;
- (id)_unlockedDescription;

@end

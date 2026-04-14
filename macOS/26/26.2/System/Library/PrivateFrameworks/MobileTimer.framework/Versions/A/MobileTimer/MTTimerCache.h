@class MTTimer, NSMutableArray;

@interface MTTimerCache : NSObject

@property (copy, nonatomic) id /* block */ updateBlock;
@property (retain, nonatomic) NSMutableArray *orderedTimers;
@property (retain, nonatomic) MTTimer *nextTimer;
@property (nonatomic) BOOL needsUpdate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } cacheLock;

- (void)getCachedTimersSyncWithCompletion:(id /* block */)a0;
- (void)markNeedsUpdate;
- (void)_withLock:(id /* block */)a0;
- (void)_getCachedTimersWithCompletion:(id /* block */)a0 doSynchronous:(BOOL)a1;
- (BOOL)_isUpdateNeeded;
- (void).cxx_destruct;
- (void)getCachedTimersWithCompletion:(id /* block */)a0;
- (id)initWithUpdateBlock:(id /* block */)a0;

@end

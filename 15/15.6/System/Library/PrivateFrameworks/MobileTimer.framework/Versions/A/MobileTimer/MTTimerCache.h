@class MTTimer, NSMutableArray;

@interface MTTimerCache : NSObject

@property (copy, nonatomic) id /* block */ updateBlock;
@property (retain, nonatomic) NSMutableArray *orderedTimers;
@property (retain, nonatomic) MTTimer *nextTimer;
@property (nonatomic) char needsUpdate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } cacheLock;

- (void).cxx_destruct;
- (id)initWithUpdateBlock:(id /* block */)a0;
- (void)_withLock:(id /* block */)a0;
- (char)_isUpdateNeeded;
- (void)markNeedsUpdate;
- (void)_getCachedTimersWithCompletion:(id /* block */)a0 doSynchronous:(char)a1;
- (void)getCachedTimersSyncWithCompletion:(id /* block */)a0;
- (void)getCachedTimersWithCompletion:(id /* block */)a0;

@end

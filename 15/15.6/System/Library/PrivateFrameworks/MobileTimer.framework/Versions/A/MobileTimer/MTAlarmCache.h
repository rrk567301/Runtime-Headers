@class MTAlarm, NSMutableArray;

@interface MTAlarmCache : NSObject

@property (copy, nonatomic) id /* block */ updateBlock;
@property (retain, nonatomic) NSMutableArray *orderedAlarms;
@property (retain, nonatomic) NSMutableArray *sleepAlarms;
@property (retain, nonatomic) MTAlarm *nextAlarm;
@property (nonatomic) char needsUpdate;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } cacheLock;

- (void).cxx_destruct;
- (id)initWithUpdateBlock:(id /* block */)a0;
- (void)_withLock:(id /* block */)a0;
- (char)_isUpdateNeeded;
- (void)markNeedsUpdate;
- (void)_getCachedAlarmsWithCompletion:(id /* block */)a0 doSynchronous:(char)a1;
- (void)getCachedAlarmsSyncWithCompletion:(id /* block */)a0;
- (void)getCachedAlarmsWithCompletion:(id /* block */)a0;

@end

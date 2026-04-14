@class NSMutableDictionary, NSMapTable, NSMutableOrderedSet, NSHashTable, NSTimer;

@interface SOTimerCenter : NSObject

@property (retain) NSMutableOrderedSet *allTimers;
@property (retain) NSMapTable *listenerToTimerMap;
@property (retain) NSMutableDictionary *groupToTimerDict;
@property (retain) NSHashTable *disabledTimers;
@property (retain) NSHashTable *disabledGroups;
@property (retain) NSHashTable *currentlyDisabledTimers;
@property (retain) NSMutableDictionary *lastFireIntervals;
@property (retain) NSTimer *theTimer;
@property BOOL suspendAllListeners;
@property BOOL oneTimeFire;
@property double customInterval;
@property BOOL changesOccuredDuringBatch;
@property unsigned long long batchCount;

+ (id)weakSharedInstance;

- (id)init;
- (void).cxx_destruct;
- (void)_clearTimer;
- (void)_timerFired:(id)a0;
- (void)_createTimer;
- (void)beginChanges;
- (void)endChanges;
- (void)removeTimer:(id)a0;
- (unsigned long long)_currentLowestInterval;
- (void)_resetTimeIntervals;
- (void)_createTimerWithInterval:(double)a0 custom:(BOOL)a1;
- (void)_recalculateDisabledTimers;
- (void)_recalculateTimerInterval;
- (id)addTimerForListener:(id)a0 selector:(SEL)a1 milliSeconds:(unsigned long long)a2;
- (id)addTimerForListener:(id)a0 selector:(SEL)a1 milliSeconds:(unsigned long long)a2 group:(id)a3;
- (void)removeTimersForListener:(id)a0;
- (void)removeTimersForListener:(id)a0 group:(id)a1;
- (void)suspendTimer:(id)a0;
- (void)resumeTimer:(id)a0;
- (void)suspendTimersForListener:(id)a0;
- (void)resumeTimersForListener:(id)a0;
- (void)suspendTimersForGroup:(id)a0;
- (void)resumeTimersForGroup:(id)a0;
- (void)resumeTimersForGroupAndFireImmediately:(id)a0;
- (void)_resumeTimersForGroup:(id)a0 fireTimerImmediately:(BOOL)a1;
- (void)suspendActiveTimers;
- (void)resumeActiveTimers;
- (void)resumeActiveTimersAndFireTimerImmediately;
- (void)_resumeActiveTimersAndFireTimerImmediately:(BOOL)a0;

@end

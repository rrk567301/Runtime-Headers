@class NSArray, NSString, APUnfairLock, NSNumber;
@protocol APBackoffTimerDelegate;

@interface APBackoffTimer : NSObject

@property (nonatomic) NSNumber *currentLevel;
@property (nonatomic) double nextBackoffDate;
@property (nonatomic) BOOL hasFiredOnThisLevel;
@property (retain, nonatomic) NSArray *schedule;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) APUnfairLock *lock;
@property (readonly, nonatomic) BOOL scheduleTerminated;
@property (weak, nonatomic) id<APBackoffTimerDelegate> delegate;

- (void)_timerFired;
- (void)reset;
- (BOOL)scheduled;
- (void).cxx_destruct;
- (id)_getNextLevelTimeInterval;
- (id)_secondsToNextEvent;
- (id)initWithSchedule:(id)a0 name:(id)a1;
- (BOOL)scheduleNextLevelWithQueue:(id)a0;

@end

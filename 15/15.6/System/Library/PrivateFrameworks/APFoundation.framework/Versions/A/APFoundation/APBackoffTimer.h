@class NSArray, NSString, APUnfairLock, NSNumber;
@protocol APBackoffTimerDelegate;

@interface APBackoffTimer : NSObject

@property (nonatomic) NSNumber *currentLevel;
@property (nonatomic) double nextBackoffDate;
@property (nonatomic) char hasFiredOnThisLevel;
@property (retain, nonatomic) NSArray *schedule;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) APUnfairLock *lock;
@property (readonly, nonatomic) char scheduleTerminated;
@property (weak, nonatomic) id<APBackoffTimerDelegate> delegate;

- (void).cxx_destruct;
- (void)reset;
- (void)_timerFired;
- (char)scheduled;
- (id)_getNextLevelTimeInterval;
- (id)_secondsToNextEvent;
- (id)initWithSchedule:(id)a0 name:(id)a1;
- (char)scheduleNextLevelWithQueue:(id)a0;

@end

@class NSArray, NSString, NSObject;
@protocol OS_dispatch_queue, APBackoffTimerDelegate;

@interface APBackoffTimer : NSObject

@property (nonatomic) unsigned long long currentLevel;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (nonatomic) double nextBackoffDate;
@property (nonatomic) BOOL hasFiredOnThisLevel;
@property (retain, nonatomic) NSArray *schedule;
@property (retain, nonatomic) NSString *name;
@property (readonly, nonatomic) BOOL scheduled;
@property (readonly, nonatomic) BOOL scheduleTerminated;
@property (weak, nonatomic) id<APBackoffTimerDelegate> delegate;

- (void).cxx_destruct;
- (void)reset;
- (void)_timerFired;
- (void)_configureNextTimerEvent;
- (id)initWithQueue:(id)a0 schedule:(id)a1;
- (id)initWithQueue:(id)a0 schedule:(id)a1 name:(id)a2;
- (void)scheduleNextLevel;

@end

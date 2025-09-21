@class AXAccessQueue, NSMutableSet, AXAccessQueueTimer, NSDate, NSMutableArray;
@protocol GAXTimeRestrictionManagerDelegate;

@interface GAXTimeRestrictionManager : NSObject

@property (nonatomic, getter=isActive) char active;
@property (nonatomic, getter=isPaused) char paused;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) long long expirationDurationInSeconds;
@property (retain, nonatomic) AXAccessQueueTimer *expirationTimer;
@property (retain, nonatomic) NSMutableSet *alarmDurationsInSeconds;
@property (retain, nonatomic) NSMutableArray *alarmTimers;
@property (weak, nonatomic) id<GAXTimeRestrictionManagerDelegate> delegate;
@property (retain, nonatomic) AXAccessQueue *assertedAccessQueue;
@property (readonly, nonatomic) long long remainingTimeInSeconds;

- (id)description;
- (void).cxx_destruct;
- (void)resume;
- (void)pause;
- (void)cancel;
- (void)_scheduleTimers;
- (void)_addAlarmForDuration:(long long)a0;
- (void)_removeAllAlarmTimers;
- (void)_removeAllTimers;
- (void)_removeExpirationTimer;
- (void)beginWithDuration:(long long)a0;
- (id)initWithAssertedAccessQueue:(id)a0;

@end

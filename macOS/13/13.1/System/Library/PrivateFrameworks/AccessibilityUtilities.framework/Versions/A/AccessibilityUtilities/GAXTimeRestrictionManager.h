@class AXAccessQueue, NSMutableSet, AXAccessQueueTimer, NSDate, NSMutableArray;
@protocol GAXTimeRestrictionManagerDelegate;

@interface GAXTimeRestrictionManager : NSObject

@property (nonatomic, getter=isActive) BOOL active;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (retain, nonatomic) NSDate *startTime;
@property (nonatomic) long long expirationDurationInSeconds;
@property (retain, nonatomic) AXAccessQueueTimer *expirationTimer;
@property (retain, nonatomic) NSMutableSet *alarmDurationsInSeconds;
@property (retain, nonatomic) NSMutableArray *alarmTimers;
@property (weak, nonatomic) id<GAXTimeRestrictionManagerDelegate> delegate;
@property (retain, nonatomic) AXAccessQueue *assertedAccessQueue;
@property (readonly, nonatomic) long long remainingTimeInSeconds;

- (id)description;
- (void)resume;
- (void).cxx_destruct;
- (void)pause;
- (void)cancel;
- (id)initWithAssertedAccessQueue:(id)a0;
- (void)beginWithDuration:(long long)a0;
- (void)_addAlarmForDuration:(long long)a0;
- (void)_scheduleTimers;
- (void)_removeAllTimers;
- (void)_removeExpirationTimer;
- (void)_removeAllAlarmTimers;

@end

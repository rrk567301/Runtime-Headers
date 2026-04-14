@class NSMapTable, NSObject;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WFDebouncer : NSObject

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *queue;
@property (readonly, nonatomic) NSMapTable *targetTable;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *delayTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_source> *maximumDelayTimer;
@property (readonly, nonatomic) double delay;
@property (readonly, nonatomic) double maximumDelay;
@property (readonly, nonatomic) id userInfo;

- (void).cxx_destruct;
- (void)fire;
- (void)addTarget:(id)a0 action:(SEL)a1;
- (void)removeTarget:(id)a0 action:(SEL)a1;
- (void)poke;
- (id)initWithDelay:(double)a0 queue:(id)a1;
- (void)resetDelayTimer;
- (id)initWithDelay:(double)a0 maximumDelay:(double)a1 queue:(id)a2;
- (id)initWithDelay:(double)a0 maximumDelay:(double)a1 queue:(id)a2 userInfo:(id)a3;
- (void)resetMaximumDelayTimer;
- (void)restartDelayTimer;
- (void)startMaximumDelayTimerIfNecessary;

@end

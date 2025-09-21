@class NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface ICSelectorDelayer : NSObject

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (nonatomic) char waitToFireUntilRequestsStop;
@property (nonatomic) char callOnMainThread;
@property (retain, nonatomic) NSDate *requestFireDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (copy, nonatomic) id /* block */ fireBlock;
@property double delay;
@property double maximumDelay;
@property (readonly, nonatomic) char isScheduledToFire;

- (void)dealloc;
- (void).cxx_destruct;
- (void)cancelPreviousFireRequests;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 delay:(double)a2 maximumDelay:(double)a3 callOnMainThread:(char)a4;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 delay:(double)a2 waitToFireUntilRequestsStop:(char)a3 callOnMainThread:(char)a4;
- (void)requestFire;
- (void)fireImmediately;
- (void)_cancelFireRequests;
- (void)callTargetSelector;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 delay:(double)a2 maximumDelay:(double)a3 waitToFireUntilRequestsStop:(char)a4 callOnMainThread:(char)a5;

@end

@class NSObject, NSDate;
@protocol OS_dispatch_queue;

@interface ICSelectorDelayer : NSObject

@property (weak, nonatomic) id target;
@property (nonatomic) SEL selector;
@property (nonatomic) BOOL waitToFireUntilRequestsStop;
@property (nonatomic) BOOL callOnMainThread;
@property (retain, nonatomic) NSDate *requestFireDate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *backgroundQueue;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *requestQueue;
@property (copy, nonatomic) id /* block */ fireBlock;
@property double delay;
@property double maximumDelay;
@property (readonly, nonatomic) BOOL isScheduledToFire;

- (void)requestFire;
- (void)dealloc;
- (void)fireImmediately;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 delay:(double)a2 maximumDelay:(double)a3 waitToFireUntilRequestsStop:(BOOL)a4 callOnMainThread:(BOOL)a5;
- (void)cancelPreviousFireRequests;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 delay:(double)a2 maximumDelay:(double)a3 callOnMainThread:(BOOL)a4;
- (id)initWithTarget:(id)a0 selector:(SEL)a1 delay:(double)a2 waitToFireUntilRequestsStop:(BOOL)a3 callOnMainThread:(BOOL)a4;
- (void)callTargetSelector;
- (void)_cancelFireRequests;
- (void).cxx_destruct;

@end

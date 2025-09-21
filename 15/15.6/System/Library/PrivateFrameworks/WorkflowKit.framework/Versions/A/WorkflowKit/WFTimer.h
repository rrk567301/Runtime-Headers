@class NSObject;
@protocol OS_dispatch_source, OS_dispatch_queue, WFTimerHandler;

@interface WFTimer : NSObject

@property (retain, nonatomic) NSObject<OS_dispatch_source> *timeoutTimer;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *timerQueue;
@property (readonly, weak, nonatomic) id<WFTimerHandler> handler;
@property (readonly, nonatomic) double duration;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)restart;
- (id)initWithHandler:(id)a0 duration:(double)a1;
- (char)shouldHaveTimeout;

@end

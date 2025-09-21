@class NSObject, NSMutableArray, AXDispatchTimer;
@protocol OS_dispatch_queue;

@interface AXRedirectedEventDetector : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (retain, nonatomic) NSMutableArray *recentEvents;
@property (retain, nonatomic) AXDispatchTimer *flushEventsTimer;

+ (void)flushEvents;
+ (void)setFlushEventsTimerDelay:(double)a0;

- (id)init;
- (void)addEvent:(id)a0;
- (void).cxx_destruct;
- (double)_elapsedTimeFrom:(unsigned long long)a0 to:(unsigned long long)a1;
- (void)_flushEventsIfNecessary;
- (BOOL)isRedirectedEvent:(id)a0;

@end

@class NSObject;
@protocol MetricsProviderDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface ProcessMetricsProvider : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    double _interval;
    int _pid;
}

@property (readonly) BOOL isSampling;
@property (weak, nonatomic) id<MetricsProviderDelegate> delegate;

- (void)start;
- (void)stop;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithPid:(int)a0 interval:(double)a1;
- (void)processStats;

@end

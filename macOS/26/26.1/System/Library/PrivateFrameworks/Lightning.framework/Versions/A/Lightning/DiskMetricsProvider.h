@class NSObject;
@protocol MetricsProviderDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface DiskMetricsProvider : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_timer;
    BOOL _first_sample;
    double _interval;
}

@property (readonly) BOOL isSampling;
@property (weak, nonatomic) id<MetricsProviderDelegate> delegate;

+ (id)sharedInstance;

- (void)start;
- (void)setInterval:(double)a0;
- (void)dealloc;
- (void)stop;
- (void).cxx_destruct;
- (id)init;
- (void)collectSample;
- (void)processStats;

@end

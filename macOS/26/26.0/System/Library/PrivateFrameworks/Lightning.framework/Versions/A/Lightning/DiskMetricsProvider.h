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

- (void)setInterval:(double)a0;
- (void)start;
- (void)dealloc;
- (void)stop;
- (id)init;
- (void).cxx_destruct;
- (void)collectSample;
- (void)processStats;

@end

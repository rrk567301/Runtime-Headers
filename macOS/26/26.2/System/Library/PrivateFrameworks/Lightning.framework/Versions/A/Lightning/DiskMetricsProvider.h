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

- (void)stop;
- (void)setInterval:(double)a0;
- (void).cxx_destruct;
- (void)start;
- (id)init;
- (void)dealloc;
- (void)collectSample;
- (void)processStats;

@end

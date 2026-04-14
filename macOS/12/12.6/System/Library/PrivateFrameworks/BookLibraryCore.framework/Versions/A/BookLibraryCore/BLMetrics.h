@class BLServiceProxy;

@interface BLMetrics : NSObject

@property (retain, nonatomic) BLServiceProxy *serviceProxy;

+ (id)metrics;
+ (void)flushInProcessWithCompletion:(id /* block */)a0;

- (id)init;
- (void).cxx_destruct;
- (void)flush;
- (void)enqueueEvents:(id)a0;
- (void)setAutoFlushEnabled:(BOOL)a0;

@end

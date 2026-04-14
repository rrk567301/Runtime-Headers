@interface CNRoundRobinScheduler : NSObject <CNScheduler, CNTimeProvider> {
    void /* unknown type, empty encoding */ schedulers;
}

@property (nonatomic, readonly) double timestamp;

- (id)performCancelableBlock:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (id)performCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (void).cxx_destruct;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (id)init;
- (void)performBlock:(id /* block */)a0;
- (id)initWithSchedulers:(id)a0;

@end

@interface CNRoundRobinScheduler : NSObject <CNScheduler, CNTimeProvider> {
    void /* unknown type, empty encoding */ schedulers;
}

@property (nonatomic, readonly) double timestamp;

- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (id)performCancelableBlock:(id /* block */)a0;
- (id)performCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)performBlock:(id /* block */)a0;
- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)init;
- (void).cxx_destruct;
- (id)initWithSchedulers:(id)a0;

@end

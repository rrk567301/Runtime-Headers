@interface CNRoundRobinScheduler : NSObject <CNScheduler, CNTimeProvider> {
    void /* unknown type, empty encoding */ schedulers;
}

@property (nonatomic, readonly) double timestamp;

- (id)performCancelableBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)performCancelableBlock:(id /* block */)a0;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1 qualityOfService:(unsigned long long)a2;
- (void)performBlock:(id /* block */)a0;
- (void).cxx_destruct;
- (id)init;
- (id)afterDelay:(double)a0 performBlock:(id /* block */)a1;
- (void)performBlock:(id /* block */)a0 qualityOfService:(unsigned long long)a1;
- (id)initWithSchedulers:(id)a0;

@end

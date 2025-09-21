@interface AMPDispatchQueueTaskScheduler : NSObject <AMPTaskScheduler> {
    void /* unknown type, empty encoding */ queue;
}

- (id)initWithQueue:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (void)schedule:(id /* block */)a0;

@end

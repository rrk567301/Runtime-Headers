@protocol ASDTaskScheduler;

@interface ASDLazyPromise : ASDPromise {
    id /* block */ _executor;
    id<ASDTaskScheduler> _scheduler;
}

- (id)joinWithPromise:(id)a0;
- (id)initOnScheduler:(id)a0 withExecutor:(id /* block */)a1;
- (void).cxx_destruct;
- (void)thenPerform:(id /* block */)a0 orCatchError:(id /* block */)a1 onScheduler:(id)a2;

@end

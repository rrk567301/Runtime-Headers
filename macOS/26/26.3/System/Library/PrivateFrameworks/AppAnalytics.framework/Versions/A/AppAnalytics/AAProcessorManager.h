@interface AAProcessorManager : NSObject <AAFlushable> {
    void /* unknown type, empty encoding */ processorManager;
}

- (id)init;
- (void)flushWithCallbackQueue:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;
- (void)addEventProcessor:(id)a0;
- (void)removeEventProcessor:(id)a0;
- (void)resumeBackgroundProcessingForIdentifier:(id)a0 completion:(id /* block */)a1;

@end

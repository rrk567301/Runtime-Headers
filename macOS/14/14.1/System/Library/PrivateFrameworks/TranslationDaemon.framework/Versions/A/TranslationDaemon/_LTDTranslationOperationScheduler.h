@class NSOperationQueue;

@interface _LTDTranslationOperationScheduler : NSObject {
    NSOperationQueue *_offlineEngineQueue;
    NSOperationQueue *_onlineEngineQueue;
}

@property double offlineOperationTimeout;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)scheduleOperation:(id)a0 route:(long long)a1;
- (id)scheduleOperationWithRoute:(long long)a0 block:(id /* block */)a1;

@end

@class NSString, NSOperationQueue, NSCache;

@interface _LTDTranslationOperationScheduler : NSObject <_LTDContinuationOperationDelegate> {
    NSOperationQueue *_offlineEngineQueue;
    NSOperationQueue *_onlineEngineQueue;
    NSCache *_cancellationCache;
}

@property double offlineOperationTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0;
- (void)cancelOperationsWithGroupID:(id)a0;
- (void)scheduleOperation:(id)a0 route:(long long)a1;
- (id)scheduleOperationWithGroupID:(id)a0 route:(long long)a1 block:(id /* block */)a2;
- (BOOL)shouldStartOperation:(id)a0;

@end

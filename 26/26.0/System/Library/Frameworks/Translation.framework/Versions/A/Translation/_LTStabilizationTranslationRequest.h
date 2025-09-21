@class NSObject, _LTStreamingInput;
@protocol OS_dispatch_queue;

@interface _LTStabilizationTranslationRequest : _LTTranslationRequest {
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _isFinished;
    id /* block */ _completionHandler;
}

@property (copy, nonatomic) _LTStreamingInput *input;
@property (nonatomic) long long generation;

+ (id)_synchronizationQueue;

- (id)requestContext;
- (void).cxx_destruct;
- (void)_startTranslationWithService:(id)a0 done:(id /* block */)a1;
- (void)_translationFailedWithError:(id)a0;
- (id)initWithLocalePair:(id)a0 completion:(id /* block */)a1;

@end

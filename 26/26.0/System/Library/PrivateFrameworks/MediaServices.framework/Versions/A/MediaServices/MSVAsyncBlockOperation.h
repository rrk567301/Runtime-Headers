@class NSObject;
@protocol OS_dispatch_queue;

@interface MSVAsyncBlockOperation : MSVAsyncOperation {
    NSObject<OS_dispatch_queue> *_accessQueue;
    id /* block */ _cancellationHandler;
}

@property (readonly, copy, nonatomic) id /* block */ startHandler;
@property (copy, nonatomic) id /* block */ cancellationHandler;

- (void)execute;
- (void)cancel;
- (void)finishWithError:(id)a0;
- (id)initWithStartHandler:(id /* block */)a0;
- (void).cxx_destruct;

@end

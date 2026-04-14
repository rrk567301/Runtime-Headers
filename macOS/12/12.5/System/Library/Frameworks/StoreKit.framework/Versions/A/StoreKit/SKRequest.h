@class SKPaymentQueueClient;
@protocol SKRequestDelegate;

@interface SKRequest : NSObject {
    id _requestInternal;
}

@property (copy, nonatomic) SKPaymentQueueClient *paymentQueueClient;
@property (weak, nonatomic) id<SKRequestDelegate> delegate;

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)_start;
- (void)_shutdownRequest;
- (void)_endBackgroundTask;
- (void)_beginBackgroundTask;
- (void)_startWithMessage:(id)a0 replyBlock:(id /* block */)a1;

@end

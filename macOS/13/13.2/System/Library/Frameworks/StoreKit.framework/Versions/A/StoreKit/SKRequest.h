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
- (id)errorFromCFObject:(id)a0;
- (void)_shutdownRequest;
- (void)_startWithMessage:(id)a0 replyBlock:(id /* block */)a1;
- (void)_beginBackgroundTask;
- (void)_endBackgroundTask;

@end

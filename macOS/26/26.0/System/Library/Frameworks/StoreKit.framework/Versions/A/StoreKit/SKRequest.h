@class SKPaymentQueueClient;
@protocol SKRequestDelegate;

@interface SKRequest : NSObject {
    id _requestInternal;
}

@property (copy, nonatomic) SKPaymentQueueClient *paymentQueueClient;
@property (weak, nonatomic) id<SKRequestDelegate> delegate;

- (void)_start;
- (void)start;
- (void)cancel;
- (id)init;
- (void).cxx_destruct;
- (void)_beginBackgroundTask;
- (void)_endBackgroundTask;
- (void)_shutdownRequest;
- (id)errorFromCFObject:(id)a0;

@end

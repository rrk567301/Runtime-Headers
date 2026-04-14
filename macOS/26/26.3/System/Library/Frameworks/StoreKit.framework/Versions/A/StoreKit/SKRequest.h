@class SKPaymentQueueClient;
@protocol SKRequestDelegate;

@interface SKRequest : NSObject {
    id _requestInternal;
}

@property (copy, nonatomic) SKPaymentQueueClient *paymentQueueClient;
@property (weak, nonatomic) id<SKRequestDelegate> delegate;

- (void)cancel;
- (void)start;
- (id)init;
- (void)_start;
- (void).cxx_destruct;
- (void)_beginBackgroundTask;
- (void)_endBackgroundTask;
- (void)_shutdownRequest;
- (id)errorFromCFObject:(id)a0;

@end

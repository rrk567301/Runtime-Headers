@class SKPaymentQueueClient;
@protocol SKRequestDelegate;

@interface SKRequestInternal : NSObject {
    long long _backgroundTaskIdentifier;
    SKPaymentQueueClient *_client;
    id<SKRequestDelegate> _delegate;
    long long _state;
}

- (id)init;
- (void).cxx_destruct;
- (void)dealloc;

@end

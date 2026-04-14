@class SKPaymentQueueClient;
@protocol SKRequestDelegate;

@interface SKRequestInternal : NSObject {
    long long _backgroundTaskIdentifier;
    SKPaymentQueueClient *_client;
    id<SKRequestDelegate> _delegate;
    long long _state;
}

- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end

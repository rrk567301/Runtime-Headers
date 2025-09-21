@class NSString, BPSSubscriptionStatus;

@interface BPSCountWindow : BPSWindow {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    BPSSubscriptionStatus *_status;
    NSString *_identifier;
    char _downstreamRequested;
}

@property (readonly, nonatomic) unsigned long long capacity;
@property (readonly, nonatomic) unsigned long long currentCount;
@property (readonly, nonatomic) id accumulator;
@property (readonly, nonatomic) id /* block */ closure;

- (void).cxx_destruct;
- (id)identifier;
- (void)cancel;
- (id)metadata;
- (void)receiveCompletion:(id)a0;
- (long long)receiveInput:(id)a0;
- (void)receiveSubscription:(id)a0;
- (void)requestDemand:(long long)a0;
- (id)initWithCapacity:(unsigned long long)a0 aggregator:(id)a1 identifier:(id)a2;

@end

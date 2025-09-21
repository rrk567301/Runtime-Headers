@class NSString, BPSSubscriptionStatus;
@protocol BPSPublisher;

@interface BPSSink : NSObject <BPSSubscriber, BPSCancellable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _rlock;
}

@property (copy, nonatomic) id /* block */ receivedCompletion;
@property (copy, nonatomic) id /* block */ receivedValue;
@property (nonatomic) long long demand;
@property (retain, nonatomic) BPSSubscriptionStatus *status;
@property (retain, nonatomic) id<BPSPublisher> publisher;
@property (nonatomic) char finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (id)init;
- (void).cxx_destruct;
- (void)cancel;
- (void)_cancel;
- (void)completeWithError:(id)a0;
- (id)newBookmark;
- (void)receiveCompletion:(id)a0;
- (long long)receiveInput:(id)a0;
- (void)receiveSubscription:(id)a0;
- (void)requestNextEvents;
- (void)subscribeTo:(id)a0;
- (void)_cancelPublisher:(id)a0;
- (id)initWithReceiveBookmarkCompletion:(id /* block */)a0 receiveInput:(id /* block */)a1;
- (id)initWithReceiveBookmarkedCompletion:(id /* block */)a0 receiveInput:(id /* block */)a1;
- (id)initWithReceiveCompletion:(id /* block */)a0 receiveInput:(id /* block */)a1;

@end

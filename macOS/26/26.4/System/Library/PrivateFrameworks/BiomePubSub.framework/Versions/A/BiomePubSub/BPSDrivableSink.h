@class NSString, BPSSubscriptionStatus;
@protocol BPSPublisher;

@interface BPSDrivableSink : NSObject <BPSSubscriber, BPSCancellable> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    struct os_unfair_recursive_lock_s { struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } ourl_lock; unsigned int ourl_count; } _rlock;
}

@property (copy, nonatomic) id /* block */ receivedCompletion;
@property (copy, nonatomic) id /* block */ shouldContinue;
@property (retain, nonatomic) BPSSubscriptionStatus *status;
@property (retain, nonatomic) id<BPSPublisher> publisher;
@property (nonatomic) BOOL finished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)new;

- (void)receiveCompletion:(id)a0;
- (long long)receiveInput:(id)a0;
- (void)receiveSubscription:(id)a0;
- (id)newBookmark;
- (void)_cancel;
- (void)requestNextEvents;
- (id)initWithReceiveBookmarkedCompletion:(id /* block */)a0 shouldContinue:(id /* block */)a1;
- (void)cancel;
- (void).cxx_destruct;
- (id)initWithReceiveBookmarkCompletion:(id /* block */)a0 shouldContinue:(id /* block */)a1;
- (void)completeWithError:(id)a0;
- (id)initWithReceiveCompletion:(id /* block */)a0 shouldContinue:(id /* block */)a1;
- (id)init;
- (void)_cancelPublisher:(id)a0;
- (void)subscribeTo:(id)a0;

@end

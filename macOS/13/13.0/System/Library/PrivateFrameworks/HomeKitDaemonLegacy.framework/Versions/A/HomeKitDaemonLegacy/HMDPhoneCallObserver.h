@class CXCallObserver, NSString;

@interface HMDPhoneCallObserver : HMFObject <CXCallObserverDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly) CXCallObserver *observer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPhoneCallObserver;

- (void).cxx_destruct;
- (void)startObserving;
- (void)callObserver:(id)a0 callChanged:(id)a1;
- (BOOL)hasActiveCalls;
- (BOOL)isActiveCall:(id)a0;

@end

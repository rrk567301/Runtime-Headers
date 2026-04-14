@class MPRemoteCommandEvent, MSVBlockGuard, NSDate;

@interface _MPRemoteCommandEventDispatch : NSObject {
    id /* block */ _continuation;
    MSVBlockGuard *_deliveryGuard;
    MSVBlockGuard *_dispatchGuard;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    MPRemoteCommandEvent *_event;
    NSDate *_deliveryDate;
    NSDate *_dispatchDate;
    NSDate *_timeoutDate;
    NSDate *_responseDate;
    long long _state;
}

- (void)dealloc;
- (id)description;
- (void).cxx_destruct;
- (void)_finishWithStatuses:(id)a0 state:(long long)a1;

@end

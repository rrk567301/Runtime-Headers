@class HMFTimer, NSString, NSObject;
@protocol OS_dispatch_queue, OS_nw_connection;

@interface HAPNameResolver : HMFObject <HMFTimerDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSObject<OS_nw_connection> *connection;
@property (retain, nonatomic) HMFTimer *timer;
@property (copy, nonatomic) id /* block */ completion;
@property (retain, nonatomic) NSString *name;
@property (retain, nonatomic) NSString *serviceType;
@property (retain, nonatomic) NSString *domain;
@property (readonly) unsigned long long resolutionState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)invalidate;
- (void)cancelTimer;
- (void)timerDidFire:(id)a0;
- (void)setResolutionState:(unsigned long long)a0;
- (void)startTimerWithTimeoutInSeconds:(id)a0;
- (void)_doCompletionWithErrorCode:(long long)a0 socketInfo:(id)a1 state:(unsigned long long)a2;
- (void)_doCompletionWithErrorCode:(long long)a0 state:(unsigned long long)a1;
- (void)_doCompletionWithSocketInfo:(id)a0;
- (id)initWithDeviceName:(id)a0 serviceType:(id)a1 domain:(id)a2 workQueue:(id)a3;
- (void)nwConnnectionStart;
- (id)nwCreateConnection;
- (void)resolveTCPNameWithTimeoutInSeconds:(id)a0 completion:(id /* block */)a1;
- (void)setStateChangedHandler;

@end

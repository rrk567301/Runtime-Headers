@class HMDeviceSetupSession, NSString, HMAccessory, NSError, NSObject;
@protocol OS_dispatch_queue, HMDeviceSetupOperationTransport;

@interface HMDeviceSetupOperationBase : NSOperation <HMFLogging, HMDeviceSetupSessionDelegate> {
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
}

@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *clientQueue;
@property (readonly, nonatomic) HMDeviceSetupSession *setupSession;
@property (getter=isExecuting) BOOL executing;
@property (getter=isFinished) BOOL finished;
@property (readonly, weak) id<HMDeviceSetupOperationTransport> sessionTransport;
@property (readonly) NSError *error;
@property (readonly) HMAccessory *accessory;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyNotifiesObserversForKey:(id)a0;
+ (id)logCategory;

- (BOOL)isAsynchronous;
- (void)setQualityOfService:(long long)a0;
- (void)start;
- (void)dealloc;
- (void)cancel;
- (void)finish;
- (void)setupSession:(id)a0 didCloseWithError:(id)a1;
- (id)init;
- (void)cancelWithError:(id)a0;
- (void)setError:(id)a0;
- (id)logIdentifier;
- (void).cxx_destruct;
- (void)setAccessory:(id)a0;
- (id)initWithSessionTransport:(id)a0;
- (id)initWithSessionTransport:(id)a0 sessionIdentifier:(id)a1;
- (id)initWithSessionTransport:(id)a0 setupSessionFactory:(id /* block */)a1;
- (void)setupSession:(id)a0 didReceiveExchangeData:(id)a1 completionHandler:(id /* block */)a2;

@end

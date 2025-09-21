@class AFWatchdogTimer, NSObject;
@protocol OS_dispatch_queue, SVXMyriadWiFiAssertionProtocol;

@interface SVXMyriadWiFiAssertion : NSObject

@property (retain, nonatomic) AFWatchdogTimer *assertionWaitTimer;
@property (readonly, weak, nonatomic) id<SVXMyriadWiFiAssertionProtocol> delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;
@property (readonly, nonatomic) char wifiAssertionAcquired;

- (void).cxx_destruct;
- (id)initWithQueue:(id)a0 delegate:(id)a1;
- (void)_releaseAssertion;
- (void)acquireHomeKitAccessoryWiFiAssertionWithTimeout:(double)a0;
- (void)releaseHomeKitAccessoryWiFiAssertion;

@end

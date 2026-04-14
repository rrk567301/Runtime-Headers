@class NSString, HMFTimer, NSArray, NSMutableDictionary, NSDictionary, NSObject, NSMutableArray, HMFUnfairLock;
@protocol OS_dispatch_queue;

@interface HMDBonjourBrowserHelper : HMFObject <HMFNetServiceBrowserDelegate, HMFTimerDelegate>

@property (nonatomic) double browsingInterval;
@property (nonatomic) double browsingPeriodicity;
@property (nonatomic) unsigned long long state;
@property (retain, nonatomic) HMFUnfairLock *lock;
@property (retain, nonatomic) HMFTimer *timer;
@property (readonly) NSObject<OS_dispatch_queue> *workQueue;
@property (retain, nonatomic) NSArray *serviceTypes;
@property (retain, nonatomic) NSMutableArray *browsers;
@property (retain, nonatomic) NSDictionary *latestDiscoveredServices;
@property (retain, nonatomic) NSMutableDictionary *internalDiscoveredServices;
@property (retain, nonatomic) NSMutableArray *browsingCompletions;
@property (readonly, nonatomic, getter=isStarted) BOOL started;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)stop;
- (void)timerDidFire:(id)a0;
- (void)netServiceBrowser:(id)a0 didStopBrowsingWithError:(id)a1;
- (void)netServiceBrowser:(id)a0 didAddService:(id)a1;
- (void)netServiceBrowser:(id)a0 didRemoveService:(id)a1;
- (BOOL)_startBrowsers;
- (void)_updateTimerWithTimeout:(double)a0;
- (void)_addBrowser:(id)a0;
- (void)_removeBrowser:(id)a0;
- (void)_stopBrowsers;
- (unsigned long long)discoveredServicesCountForServiceType:(id)a0;
- (id)initWithServicesOfTypes:(id)a0 browsingTimeInterval:(double)a1 browsingPeriodicity:(double)a2 workQueue:(id)a3;
- (void)startWithBrowsingCompletion:(id /* block */)a0;

@end

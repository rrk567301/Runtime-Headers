@class NSString, CUWiFiScanner, NSObject;
@protocol OS_dispatch_queue, HMDWACScannerDelegate;

@interface HMDWACScanner : NSObject <HMFLogging, HAPAirPlayAccessoryBrowserDelegate, HMDWACScanner> {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CUWiFiScanner *_wifiScanner;
}

@property (weak, nonatomic) id<HMDWACScannerDelegate> delegate;
@property (retain, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void)setDelegate:(id)a0 queue:(id)a1;
- (void)startDiscoveringAirPlayAccessoriesWithBrowser:(id)a0;
- (void)wacBrowser:(id)a0 didUpdateAirPlayDevice:(id)a1;
- (void)stop;
- (void)wacBrowser:(id)a0 didFindAirPlayDevice:(id)a1;
- (void)resume;
- (void).cxx_destruct;
- (void)start;
- (void)backoff;
- (id)init;
- (void)wacBrowser:(id)a0 didRemoveAirPlayDevice:(id)a1;

@end

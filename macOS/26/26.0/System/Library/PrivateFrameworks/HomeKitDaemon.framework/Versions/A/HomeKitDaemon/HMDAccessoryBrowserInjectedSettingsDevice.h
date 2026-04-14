@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings> {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)workQueue;
- (id)createHap2AccessoryBrowserWithStorage:(id)a0;
- (id)createBtleAccessoryBrowser;
- (id)createAuthServerWithDelegate:(id)a0;
- (id)createCHIPAccessoryBrowser;
- (id)init;
- (id)createIpAccessoryBrowser;
- (void).cxx_destruct;

@end

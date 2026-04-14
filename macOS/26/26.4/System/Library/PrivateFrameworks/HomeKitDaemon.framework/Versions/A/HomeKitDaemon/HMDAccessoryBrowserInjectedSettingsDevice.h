@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings> {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)workQueue;
- (id)createAuthServerWithDelegate:(id)a0;
- (void).cxx_destruct;
- (id)createHap2AccessoryBrowserWithStorage:(id)a0;
- (id)createCHIPAccessoryBrowser;
- (id)init;
- (id)createBtleAccessoryBrowser;
- (id)createIpAccessoryBrowser;

@end

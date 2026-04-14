@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings> {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)workQueue;
- (id)createIpAccessoryBrowserWithCache:(id)a0;
- (id)createBtleAccessoryBrowser;
- (void).cxx_destruct;
- (id)createAuthServerWithDelegate:(id)a0;
- (id)createHap2AccessoryBrowserWithStorage:(id)a0;
- (id)createCHIPAccessoryBrowser;
- (id)init;

@end

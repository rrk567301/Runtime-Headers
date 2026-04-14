@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings> {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)workQueue;
- (id)createCHIPAccessoryBrowser;
- (id)createBtleAccessoryBrowser;
- (void).cxx_destruct;
- (id)createHap2AccessoryBrowserWithStorage:(id)a0;
- (id)init;
- (id)createIpAccessoryBrowserWithCache:(id)a0;
- (id)createAuthServerWithDelegate:(id)a0;

@end

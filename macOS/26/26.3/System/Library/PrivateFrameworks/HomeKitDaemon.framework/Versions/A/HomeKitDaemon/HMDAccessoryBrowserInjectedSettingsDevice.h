@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings> {
    NSObject<OS_dispatch_queue> *_queue;
}

- (id)createHap2AccessoryBrowserWithStorage:(id)a0;
- (id)workQueue;
- (id)createBtleAccessoryBrowser;
- (id)init;
- (id)createIpAccessoryBrowserWithCache:(id)a0;
- (void).cxx_destruct;
- (id)createAuthServerWithDelegate:(id)a0;
- (id)createCHIPAccessoryBrowser;

@end

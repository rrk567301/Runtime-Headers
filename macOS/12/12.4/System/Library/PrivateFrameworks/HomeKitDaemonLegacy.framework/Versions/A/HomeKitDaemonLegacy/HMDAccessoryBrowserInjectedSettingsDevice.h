@class NSObject;
@protocol OS_dispatch_queue;

@interface HMDAccessoryBrowserInjectedSettingsDevice : NSObject <HMDAccessoryBrowserInjectedSettings> {
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, nonatomic, getter=isCHIPEnabled) BOOL chipEnabled;

- (id)init;
- (void).cxx_destruct;
- (id)workQueue;
- (id)createIpAccessoryBrowser;
- (id)createBtleAccessoryBrowser;
- (id)createHap2AccessoryBrowserWithStorage:(id)a0;
- (id)createCHIPAccessoryBrowser;
- (id)createAuthServerWithDelegate:(id)a0;

@end

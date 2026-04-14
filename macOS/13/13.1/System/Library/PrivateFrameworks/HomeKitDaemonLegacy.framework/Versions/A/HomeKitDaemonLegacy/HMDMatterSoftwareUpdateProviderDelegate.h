@class NSString, HMDHomeManager, HMDAccessoryFirmwareUpdateManager;
@protocol HMDMatterSoftwareUpdateProviderDelegateDataSource;

@interface HMDMatterSoftwareUpdateProviderDelegate : HMFObject <CHIPPluginSoftwareUpdateProviderDelegate, HMFLogging>

@property (readonly) id<HMDMatterSoftwareUpdateProviderDelegateDataSource> dataSource;
@property (weak) HMDHomeManager *homeManager;
@property (weak) HMDAccessoryFirmwareUpdateManager *accessoryFirmwareUpdateManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)queryImageWithPairing:(id)a0 requestParams:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)applyUpdateWithPairing:(id)a0 requestParams:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)notifyUpdateWithPairing:(id)a0 params:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (id)initWithHomeManager:(id)a0 accessoryFirmwareUpdateManager:(id)a1;
- (id)initWithHomeManager:(id)a0 accessoryFirmwareUpdateManager:(id)a1 dataSource:(id)a2;
- (void)configureWithSoftwareUpdateProvider:(id)a0;
- (id)_queryImageResponseWithStatus:(id)a0 delayedActionTime:(id)a1;
- (id)_accessoryWithPairing:(id)a0;

@end

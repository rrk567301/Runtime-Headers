@class HMDHomeManager, NSString, HMMTRAnnounceOtaScheduler, HMDAccessoryFirmwareUpdateManager, HMMTRSoftwareUpdateProvider;
@protocol HMDMatterSoftwareUpdateProviderDelegateDataSource;

@interface HMDMatterSoftwareUpdateProviderDelegate : HMFObject <HMMTRSoftwareUpdateProviderDelegate, HMFLogging>

@property (readonly) id<HMDMatterSoftwareUpdateProviderDelegateDataSource> dataSource;
@property (weak) HMMTRSoftwareUpdateProvider *softwareUpdateProvider;
@property (retain, nonatomic) HMMTRAnnounceOtaScheduler *otaScheduler;
@property (weak) HMDHomeManager *homeManager;
@property (weak) HMDAccessoryFirmwareUpdateManager *accessoryFirmwareUpdateManager;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (id)_accessoryWithPairing:(id)a0;
- (id)_queryImageResponseWithStatus:(id)a0 delayedActionTime:(id)a1;
- (void)applyUpdateWithPairing:(id)a0 requestParams:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (BOOL)canEstablishConnectionForHMDHAPAccessory:(id)a0;
- (void)configureWithSoftwareUpdateProvider:(id)a0;
- (id)initWithHomeManager:(id)a0 accessoryFirmwareUpdateManager:(id)a1;
- (id)initWithHomeManager:(id)a0 accessoryFirmwareUpdateManager:(id)a1 dataSource:(id)a2;
- (BOOL)isUARPFirmwareVersionMismatchForAccessory:(id)a0 version:(id)a1;
- (void)manageBusyImageResponses:(id)a0 initiationType:(unsigned long long)a1 requestParams:(id)a2 queue:(id)a3 completionHandler:(id /* block */)a4;
- (void)manageNonBusyAvailableImageResponses:(id)a0 initiationType:(unsigned long long)a1 normalStatus:(id)a2 error:(id)a3 resetBusyCounter:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)notifyCheckFirmwareUpdateSessionWithPairing:(id)a0 queue:(id)a1 completionHandler:(id /* block */)a2;
- (void)notifyUpdateRequestedForHMDHAPAccessory:(id)a0 isUserTriggered:(BOOL)a1 isRetry:(BOOL)a2;
- (void)notifyUpdateWithPairing:(id)a0 params:(id)a1 queue:(id)a2 completionHandler:(id /* block */)a3;
- (void)queryImageWithPairing:(id)a0 requestParams:(id)a1 queue:(id)a2 initiationType:(unsigned long long)a3 completionHandler:(id /* block */)a4;
- (void)resetImageResponseCountersForAccessory:(unsigned long long)a0 accessoryServer:(id)a1;
- (void)resetOTAProviderStateForHMDHAPAccessory:(id)a0;

@end

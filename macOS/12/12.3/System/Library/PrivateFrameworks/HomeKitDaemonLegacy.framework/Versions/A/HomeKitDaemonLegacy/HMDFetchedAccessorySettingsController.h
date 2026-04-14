@class NSString, NSMutableSet, HMDFetchedAccessorySettingsControllerMutableKeyPathMap, NSObject;
@protocol OS_dispatch_queue, HMDFetchedAccessorySettingsControllerDataSource;

@interface HMDFetchedAccessorySettingsController : NSObject <HMDFetchedSettingsDriverDelegate, HMFLogging, HMDLegacyAccessorySettingsAdaptorSettingsOperationProvider>

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id<HMDFetchedAccessorySettingsControllerDataSource> dataSource;
@property (readonly) HMDFetchedAccessorySettingsControllerMutableKeyPathMap *driverMap;
@property (retain) NSMutableSet *pendingFetchKeyPaths;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)start;
- (void)fetchSettingsForKeyPaths:(id)a0 completion:(id /* block */)a1;
- (void)driver:(id)a0 didUpdateSettings:(id)a1;
- (void)languageValueListWithCompletion:(id /* block */)a0;
- (void)driverDidReload:(id)a0;
- (void)updateSettingWithKeyPath:(id)a0 settingValue:(id)a1 completion:(id /* block */)a2;
- (id)initWithQueue:(id)a0 dataSource:(id)a1 drivers:(id)a2;

@end

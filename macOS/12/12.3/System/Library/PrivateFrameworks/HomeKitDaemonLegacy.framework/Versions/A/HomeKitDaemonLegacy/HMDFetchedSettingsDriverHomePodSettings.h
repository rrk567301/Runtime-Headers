@class NSString, NSObject;
@protocol HMDHPSSettingsObjectFactoryProtocol, HMDHPSAccessorySettingService, HMDFetchedSettingsDriverDelegate, OS_dispatch_queue;

@interface HMDFetchedSettingsDriverHomePodSettings : NSObject <HMDHPSAccessorySettingServiceDelegate, HMDFetchedSettingsDriver, HMFLogging>

@property (readonly) NSObject<OS_dispatch_queue> *queue;
@property (readonly) id<HMDHPSAccessorySettingService> service;
@property (readonly) id<HMDHPSSettingsObjectFactoryProtocol> hmdhpsObjectFactory;
@property (weak) id<HMDFetchedSettingsDriverDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;

- (void).cxx_destruct;
- (void)didReconnect;
- (void)fetchSettingsForKeyPaths:(id)a0 completion:(id /* block */)a1;
- (void)startWithKeyPaths:(id)a0 completion:(id /* block */)a1;
- (void)updateSettingWithKeyPath:(id)a0 boolSettingValue:(id)a1 completion:(id /* block */)a2;
- (void)updateSettingWithKeyPath:(id)a0 integerSettingValue:(id)a1 completion:(id /* block */)a2;
- (void)updateSettingWithKeyPath:(id)a0 languageSettingValue:(id)a1 completion:(id /* block */)a2;
- (void)languageValueListWithCompletion:(id /* block */)a0;
- (void)_readSettingsAtKeyPaths:(id)a0 completion:(id /* block */)a1;
- (id)_hpLanguageValueFromLanguageValue:(id)a0;
- (void)_writeSetting:(id)a0 keyPath:(id)a1 completion:(id /* block */)a2;
- (void)_processReadResults:(id)a0 availableLanguageSettingsKeyPaths:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (id)_transformToImmutableSetting:(id)a0;
- (id)_languageValueList;
- (void)didUpdateSetting:(id)a0 forKeyPath:(id)a1;
- (id)initWithQueue:(id)a0 settingsObjectFactory:(id)a1;
- (void)serviceDidInitializeForCurrentAccessory:(id)a0;

@end

@class HMIExternalPersonManager, HMDUser, HMPhotosPersonManagerSettings, NSString;

@interface HMDPhotosPersonManager : HMDPersonManager <HMFLogging, HMDDatabaseZoneManagerDataSource>

@property (readonly, copy) HMPhotosPersonManagerSettings *dataUnavailableExternalSettings;
@property (weak) HMDUser *user;
@property (readonly) HMIExternalPersonManager *hmiPersonManager;
@property (readonly, copy) HMPhotosPersonManagerSettings *settings;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)logCategory;
+ (id)zoneNameForZoneUUID:(id)a0;

- (void).cxx_destruct;
- (BOOL)manager:(id)a0 shouldShareWithUser:(id)a1;
- (BOOL)zoneManager:(id)a0 shouldRequestShareInvitationFromUser:(id)a1;
- (id)initWithUser:(id)a0 zoneUUID:(id)a1 workQueue:(id)a2;
- (id)initWithUUID:(id)a0 zoneManager:(id)a1 coreDataManager:(id)a2 dataInterfaces:(id)a3 workQueue:(id)a4 user:(id)a5;
- (BOOL)sharesFaceClassifications;
- (void)handleUpdatedSettings:(id)a0;

@end

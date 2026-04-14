@class VGDataCoordinator, NSArray, NSString, NSMutableArray, VGVehicle;
@protocol VGVirtualGaragePersisting, VGVirtualGarageDelegate;

@interface VGVirtualGarage : NSObject <NSCopying, VGDataCoordinatorDelegate, VGVirtualGaragePersistingDelegate, GEOConfigChangeListenerDelegate, VGVirtualGarageActions, NSSecureCoding> {
    NSMutableArray *_vehicles;
    NSString *_selectedVehicleIdentifier;
    BOOL _isDataCoordinatorRunning;
    VGDataCoordinator *_dataCoordinator;
    id<VGVirtualGaragePersisting> _persister;
    BOOL _finishedLoadingVehicles;
    NSMutableArray *_queuedGetGarageCompletionHandlers;
}

@property (class, readonly) BOOL supportsSecureCoding;

@property (weak, nonatomic) id<VGVirtualGarageDelegate> delegate;
@property (readonly, nonatomic) NSArray *vehicles;
@property (readonly, nonatomic) VGVehicle *selectedVehicle;
@property (nonatomic) BOOL shouldAssumeFullCharge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (void)virtualGarageGetGarageWithReply:(id /* block */)a0;
- (void)_endContinuousUpdates;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)virtualGarageStartContinuousUpdatesIfNeeded;
- (BOOL)_persisterHasStaleStateForVehicle:(id)a0;
- (void)encodeWithCoder:(id)a0;
- (id)_vehicleWithIdentifier:(id)a0;
- (void)dataCoordinatorDidUpdateInstalledApps:(id)a0;
- (void)_startContinuousUpdatesIfNeeded;
- (void)virtualGarageRemoveVehicle:(id)a0;
- (void)garagePersister:(id)a0 wantsToUpdateVehicles:(id)a1;
- (void)virtualGarageOnboardVehicle:(id)a0;
- (void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(id)a0 syncAcrossDevices:(BOOL)a1 withReply:(id /* block */)a2;
- (void)virtualGarageEndContinuousUpdates;
- (void)_onboardVehicle:(id)a0;
- (void)_removeVehiclesWithUninstalledAppsIfNeeded;
- (id)_garageCopy;
- (void)_addVehicle:(id)a0;
- (void)virtualGarageForceFetchAllVehicles;
- (void)_forceUpdateWithVehicles:(id)a0;
- (void)_executeQueuedCompletionHandlersIfNeeded;
- (void)virtualGarageSetAssumesFullCharge:(BOOL)a0;
- (void)_notifyObserversGarageDidUpdateVehicles;
- (id)initWithGaragePersister:(id)a0;
- (void)_setShouldUsePreferredNetworks:(BOOL)a0 forVehicle:(id)a1;
- (void)_unpairVehicle:(id)a0;
- (void)dataCoordinator:(id)a0 didUpdateUnpairedVehicles:(id)a1;
- (void)_saveVehicle:(id)a0 syncAcrossDevices:(BOOL)a1;
- (void)_selectVehicleWithIdentifier:(id)a0;
- (void)virtualGarageSetShouldUsePreferredNetworks:(BOOL)a0 forVehicle:(id)a1;
- (id)initWithCoder:(id)a0;
- (void)_removeVehicleWithIdentifier:(id)a0;
- (void)virtualGarageGetListOfUnpairedVehiclesWithReply:(id /* block */)a0;
- (void)virtualGarageSelectVehicle:(id)a0;
- (void)virtualGarageSaveVehicle:(id)a0;
- (void)virtualGarageAddVehicle:(id)a0;
- (void).cxx_destruct;
- (void)dataCoordinator:(id)a0 wantsToUpdateVehicle:(id)a1 syncAcrossDevices:(BOOL)a2;

@end

@class VGDataCoordinator, NSArray, NSString, NSMutableArray, VGVehicle;
@protocol VGVirtualGaragePersisting, VGVirtualGarageDelegate;

@interface VGVirtualGarage : NSObject <NSCopying, VGDataCoordinatorDelegate, VGVirtualGaragePersistingDelegate, GEOConfigChangeListenerDelegate, VGVirtualGarageActions, NSSecureCoding> {
    NSMutableArray *_vehicles;
    NSString *_selectedVehicleIdentifier;
    char _isDataCoordinatorRunning;
    VGDataCoordinator *_dataCoordinator;
    id<VGVirtualGaragePersisting> _persister;
    char _finishedLoadingVehicles;
    NSMutableArray *_queuedGetGarageCompletionHandlers;
}

@property (class, readonly) char supportsSecureCoding;

@property (weak, nonatomic) id<VGVirtualGarageDelegate> delegate;
@property (readonly, nonatomic) NSArray *vehicles;
@property (readonly, nonatomic) VGVehicle *selectedVehicle;
@property (nonatomic) char shouldAssumeFullCharge;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (void)valueChangedForGEOConfigKey:(struct { unsigned int x0; void *x1; })a0;
- (void)_startContinuousUpdatesIfNeeded;
- (void)_saveVehicle:(id)a0 syncAcrossDevices:(char)a1;
- (void)_unpairVehicle:(id)a0;
- (void)_addVehicle:(id)a0;
- (void)_endContinuousUpdates;
- (void)_executeQueuedCompletionHandlersIfNeeded;
- (void)_forceUpdateWithVehicles:(id)a0;
- (id)_garageCopy;
- (void)_notifyObserversGarageDidUpdateVehicles;
- (void)_onboardVehicle:(id)a0;
- (char)_persisterHasStaleStateForVehicle:(id)a0;
- (void)_removeVehicleWithIdentifier:(id)a0;
- (void)_removeVehiclesWithUninstalledAppsIfNeeded;
- (void)_selectVehicleWithIdentifier:(id)a0;
- (void)_setShouldUsePreferredNetworks:(char)a0 forVehicle:(id)a1;
- (id)_vehicleWithIdentifier:(id)a0;
- (void)dataCoordinator:(id)a0 didUpdateUnpairedVehicles:(id)a1;
- (void)dataCoordinator:(id)a0 wantsToUpdateVehicle:(id)a1 syncAcrossDevices:(char)a2;
- (void)dataCoordinatorDidUpdateInstalledApps:(id)a0;
- (void)garagePersister:(id)a0 wantsToUpdateVehicles:(id)a1;
- (id)initWithGaragePersister:(id)a0;
- (void)virtualGarageAddVehicle:(id)a0;
- (void)virtualGarageEndContinuousUpdates;
- (void)virtualGarageForceFetchAllVehicles;
- (void)virtualGarageGetGarageWithReply:(id /* block */)a0;
- (void)virtualGarageGetLatestStateOfVehicleWithIdentifier:(id)a0 syncAcrossDevices:(char)a1 withReply:(id /* block */)a2;
- (void)virtualGarageGetListOfUnpairedVehiclesWithReply:(id /* block */)a0;
- (void)virtualGarageOnboardVehicle:(id)a0;
- (void)virtualGarageRemoveVehicle:(id)a0;
- (void)virtualGarageSaveVehicle:(id)a0;
- (void)virtualGarageSelectVehicle:(id)a0;
- (void)virtualGarageSetAssumesFullCharge:(char)a0;
- (void)virtualGarageSetShouldUsePreferredNetworks:(char)a0 forVehicle:(id)a1;
- (void)virtualGarageStartContinuousUpdatesIfNeeded;

@end

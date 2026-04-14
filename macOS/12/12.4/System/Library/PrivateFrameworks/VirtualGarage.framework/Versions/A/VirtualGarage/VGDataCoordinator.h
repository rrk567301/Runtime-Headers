@class NSMutableSet, NSArray, NSString, VGExternalAccessory, NSTimer, NSObject, NSMutableArray;
@protocol VGDataCoordinatorDelegate, OS_dispatch_queue, VGOEMApplicationFinding;

@interface VGDataCoordinator : NSObject <VGOEMApplicationFinderUpdates, VGExternalAccessoryUpdating, VGOEMAppSOCStreaming> {
    id<VGDataCoordinatorDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<VGOEMApplicationFinding> _applicationFinder;
    NSArray *_applications;
    VGExternalAccessory *_accessory;
    NSMutableArray *_unpairedVehicles;
    NSTimer *_vehicleStateRefreshTimer;
    NSMutableSet *_observedVehicles;
}

@property (readonly, copy, nonatomic) NSArray *unpairedVehicles;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void).cxx_destruct;
- (id)deviceIdentifier;
- (void)_loadIapVehicles;
- (void)_invalidateRefreshTimer;
- (unsigned long long)_indexOfVehicleInUnpairedVehicles:(id)a0;
- (id)_vehicleStateProviderForVehicle:(id)a0;
- (void)_updateGarageWithVehicle:(id)a0 syncAcrossDevices:(BOOL)a1;
- (id)_applicationForVehicle:(id)a0;
- (void)_saveOnboardingInfoForVehicle:(id)a0;
- (void)_loadAllOEMVehiclesForApps:(id)a0 completion:(id /* block */)a1;
- (void)_startChargeStreamForVehicle:(id)a0;
- (void)_refreshStateForTrackedVehicles;
- (void)_setupTimerIfNeeded;
- (void)_stopChargeStreamForVehicle:(id)a0;
- (void)_updateStateOfChargeForVehicle:(id)a0 syncAcrossDevices:(BOOL)a1 completion:(id /* block */)a2;
- (double)_vehicleStateRefreshInterval;
- (id)_oemAppForChargeStreamForVehicle:(id)a0;
- (void)_removeUnpairedIapVehicleIfNeeded;
- (void)accessoryUpdatedWithVehicle:(id)a0;
- (void)OEMAppsUpdated:(id)a0;
- (void)vehicleStateUpdated:(id)a0;
- (id)initWithApplicationFinder:(id)a0 externalAccessory:(id)a1 delegate:(id)a2;
- (void)finishOnboardingVehicle:(id)a0;
- (BOOL)shouldUnpairVehicle:(id)a0;
- (void)unpairVehicle:(id)a0;
- (void)startContinuousUpdatesForVehicle:(id)a0;
- (void)endAllContinuousUpdates;
- (void)getLatestStateOfVehicle:(id)a0 withReply:(id /* block */)a1;

@end

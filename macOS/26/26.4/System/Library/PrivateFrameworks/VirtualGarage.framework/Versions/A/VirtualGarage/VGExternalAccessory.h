@class VGExternalAccessoryState, NSString, NSMutableDictionary, VGExternalAccessoryModelFilter, VGVehicleState, NSObject, VGVehicle;
@protocol VGExternalAccessoryUpdating, OS_dispatch_queue;

@interface VGExternalAccessory : NSObject <VGExternalAccessory> {
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    NSMutableDictionary *_trackedAccessoriesByConnectionId;
    VGExternalAccessoryState *_accessoryState;
    VGVehicleState *_currentVehicleState;
    VGVehicle *_currentVehicle;
    VGExternalAccessoryModelFilter *_modelFilter;
}

@property (weak, nonatomic) id<VGExternalAccessoryUpdating> accessoryUpdateDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)_isConnectedVehicleAllowlisted;
- (BOOL)_currentStatePassesEVRoutingRequirements;
- (id)_modelIdFromArguments:(id)a0;
- (id)_identifier;
- (void)_updateFromVehicleInfo:(id)a0;
- (id)_firmwareId;
- (void)listCarsWithCompletion:(id /* block */)a0;
- (BOOL)_isConnectedToCarPlayAccessory;
- (void).cxx_destruct;
- (id)_vehicleStateForCurrentState;
- (BOOL)isConnectedToVehicle:(id)a0;
- (id)init;
- (void)getStateOfChargeForVehicle:(id)a0 completion:(id /* block */)a1;
- (id)_vehicleForCurrentState;
- (BOOL)_isConnectedToElectricVehicle;
- (BOOL)isConnectedToAccessoryWithIdentifier:(id)a0;
- (void)_notifyDelegateWithCurrentVehicle;
- (void)dealloc;
- (id)_bluetoothIdentifier;

@end

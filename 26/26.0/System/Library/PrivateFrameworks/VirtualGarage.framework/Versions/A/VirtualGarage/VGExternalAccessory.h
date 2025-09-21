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

- (id)_vehicleStateForCurrentState;
- (id)_vehicleForCurrentState;
- (id)_identifier;
- (void)dealloc;
- (id)_modelIdFromArguments:(id)a0;
- (id)_bluetoothIdentifier;
- (void)getStateOfChargeForVehicle:(id)a0 completion:(id /* block */)a1;
- (BOOL)_isConnectedVehicleAllowlisted;
- (void)listCarsWithCompletion:(id /* block */)a0;
- (BOOL)_isConnectedToElectricVehicle;
- (void)_notifyDelegateWithCurrentVehicle;
- (id)init;
- (void)_updateFromVehicleInfo:(id)a0;
- (id)_firmwareId;
- (BOOL)_currentStatePassesEVRoutingRequirements;
- (BOOL)isConnectedToAccessoryWithIdentifier:(id)a0;
- (BOOL)_isConnectedToCarPlayAccessory;
- (BOOL)isConnectedToVehicle:(id)a0;
- (void).cxx_destruct;

@end

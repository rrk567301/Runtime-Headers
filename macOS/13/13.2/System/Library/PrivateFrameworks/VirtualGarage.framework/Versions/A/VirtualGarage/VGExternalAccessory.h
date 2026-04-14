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

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)_identifier;
- (id)_bluetoothIdentifier;
- (void)listCarsWithCompletion:(id /* block */)a0;
- (void)getStateOfChargeForVehicle:(id)a0 completion:(id /* block */)a1;
- (BOOL)isConnectedToVehicle:(id)a0;
- (BOOL)isConnectedToAccessoryWithIdentifier:(id)a0;
- (void)_updateFromVehicleInfo:(id)a0;
- (void)_notifyDelegateWithCurrentVehicle;
- (id)_vehicleForCurrentState;
- (id)_vehicleStateForCurrentState;
- (BOOL)_currentStatePassesEVRoutingRequirements;
- (id)_modelIdFromArguments:(id)a0;
- (BOOL)_isConnectedVehicleAllowlisted;
- (BOOL)_isConnectedToElectricVehicle;
- (BOOL)_isConnectedToCarPlayAccessory;
- (id)_firmwareId;

@end

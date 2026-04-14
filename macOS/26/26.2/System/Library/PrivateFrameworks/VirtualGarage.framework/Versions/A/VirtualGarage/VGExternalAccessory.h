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

- (id)_identifier;
- (BOOL)_isConnectedToCarPlayAccessory;
- (id)_vehicleStateForCurrentState;
- (void)getStateOfChargeForVehicle:(id)a0 completion:(id /* block */)a1;
- (id)_bluetoothIdentifier;
- (BOOL)_currentStatePassesEVRoutingRequirements;
- (BOOL)_isConnectedToElectricVehicle;
- (id)_firmwareId;
- (void)_updateFromVehicleInfo:(id)a0;
- (void).cxx_destruct;
- (BOOL)_isConnectedVehicleAllowlisted;
- (id)_modelIdFromArguments:(id)a0;
- (void)listCarsWithCompletion:(id /* block */)a0;
- (id)_vehicleForCurrentState;
- (BOOL)isConnectedToVehicle:(id)a0;
- (id)init;
- (BOOL)isConnectedToAccessoryWithIdentifier:(id)a0;
- (void)_notifyDelegateWithCurrentVehicle;
- (void)dealloc;

@end

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
- (void)getStateOfChargeForVehicle:(id)a0 completion:(id /* block */)a1;
- (BOOL)isConnectedToVehicle:(id)a0;
- (BOOL)_isConnectedToCarPlayAccessory;
- (id)init;
- (id)_vehicleForCurrentState;
- (BOOL)isConnectedToAccessoryWithIdentifier:(id)a0;
- (id)_bluetoothIdentifier;
- (id)_vehicleStateForCurrentState;
- (void)listCarsWithCompletion:(id /* block */)a0;
- (void).cxx_destruct;
- (void)_updateFromVehicleInfo:(id)a0;
- (BOOL)_isConnectedToElectricVehicle;
- (void)dealloc;
- (id)_firmwareId;
- (id)_modelIdFromArguments:(id)a0;
- (BOOL)_isConnectedVehicleAllowlisted;
- (void)_notifyDelegateWithCurrentVehicle;
- (BOOL)_currentStatePassesEVRoutingRequirements;

@end

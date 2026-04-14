@class SPBeaconManagerSimpleBeaconUpdateInterface, NSString;

@interface SPRepairDeviceInterface : NSObject <SPRepairDeviceInterfaceProtocol>

@property (retain, nonatomic) SPBeaconManagerSimpleBeaconUpdateInterface *beaconSession;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)deviceAttributesForContext:(id)a0 completion:(id /* block */)a1;
- (void)deviceForBeaconIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)deviceForFindMyId:(id)a0 completion:(id /* block */)a1;
- (void)deviceForSerialNumber:(id)a0 completion:(id /* block */)a1;
- (void)updateRepairStateForSerialNumber:(id)a0 updateBlock:(id /* block */)a1;

@end

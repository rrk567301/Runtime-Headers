@protocol AKHomeDeviceControllerProtocol;

@interface AKHomeDeviceController : NSObject {
    id<AKHomeDeviceControllerProtocol> _authController;
}

- (id)initWithService:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)removeDevicesWithContext:(id)a0 completion:(id /* block */)a1;

@end

@class NSArray;

@interface VGExternalAccessoryModelFilter : NSObject {
    NSArray *_modelIdAllowlist;
    NSArray *_denylist;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)allowsVehicleWithModelId:(id)a0 firmwareId:(id)a1 year:(id)a2 model:(id)a3;
- (void)_initializeAllowAndDenylists;

@end

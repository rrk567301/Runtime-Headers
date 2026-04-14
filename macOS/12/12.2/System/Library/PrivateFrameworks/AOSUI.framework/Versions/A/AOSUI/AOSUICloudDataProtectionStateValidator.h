@class CDPUIDeviceToDeviceEncryptionFlowContext;

@interface AOSUICloudDataProtectionStateValidator : NSObject {
    CDPUIDeviceToDeviceEncryptionFlowContext *_flowContext;
}

- (void).cxx_destruct;
- (void)_repairCloudDataProtectionWithCompletion:(id /* block */)a0;
- (id)initWithFlowContext:(id)a0;
- (void)verifyAndRepairCloudDataProtectionWithCompletion:(id /* block */)a0;

@end

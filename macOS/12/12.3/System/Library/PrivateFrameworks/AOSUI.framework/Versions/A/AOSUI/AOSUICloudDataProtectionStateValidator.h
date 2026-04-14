@class CDPUIDeviceToDeviceEncryptionFlowContext, CDPContext;

@interface AOSUICloudDataProtectionStateValidator : NSObject {
    CDPUIDeviceToDeviceEncryptionFlowContext *_flowContext;
}

@property (retain, nonatomic) CDPContext *context;

- (void).cxx_destruct;
- (id)initWithFlowContext:(id)a0;
- (void)verifyAndRepairCloudDataProtectionWithCompletion:(id /* block */)a0;
- (void)_repairCloudDataProtectionWithCompletion:(id /* block */)a0;
- (BOOL)_isFlowContextValid:(id)a0;

@end

@class MTRCommissioningOperation, NSString;

@interface MTRCommissioningOperationDeviceAttestationDelegate : NSObject <MTRDeviceAttestationDelegate>

@property (weak, nonatomic) MTRCommissioningOperation *commissioningOperation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (void)deviceAttestationCompletedForController:(id)a0 opaqueDeviceHandle:(void *)a1 attestationDeviceInfo:(id)a2 error:(id)a3;

@end

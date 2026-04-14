@class ACAccount;

@interface AAAppleIDRepairController : NSObject <AAAppleIDRepairControllerProtocol_Internal, AAAppleIDRepairControllerProtocol>

@property (retain) ACAccount *primaryAccount;

- (void).cxx_destruct;
- (id)init;
- (unsigned long long)_fetchRepairState;
- (void)_forceFetchUpdatedUserInformationWithCompletion:(id /* block */)a0;
- (BOOL)offline_primaryAppleIDNeedsRepair;
- (void)primaryAppleIDRepairNeedsRepairCompletion:(id /* block */)a0;

@end

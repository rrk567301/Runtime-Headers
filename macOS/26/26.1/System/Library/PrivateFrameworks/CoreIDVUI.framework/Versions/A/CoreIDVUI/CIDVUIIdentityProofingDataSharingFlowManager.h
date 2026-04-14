@interface CIDVUIIdentityProofingDataSharingFlowManager : NSObject

- (id)init;
- (void)checkUserConsent:(id /* block */)a0;
- (void)didChangeUserConsent:(unsigned long long)a0 completion:(id /* block */)a1;
- (void)fetchUserConsent:(id /* block */)a0;

@end

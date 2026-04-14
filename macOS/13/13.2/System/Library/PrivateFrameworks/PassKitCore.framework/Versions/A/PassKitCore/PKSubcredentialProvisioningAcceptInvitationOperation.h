@interface PKSubcredentialProvisioningAcceptInvitationOperation : PKSubcredentialProvisioningSharingSessionOperation

- (void)performOperation;
- (void)session:(id)a0 didChangeState:(unsigned long long)a1;
- (void)acceptIDSInvitation;
- (void)acceptCrossPlatformInvitation;
- (void)_handleShareAcceptResultCredential:(id)a0 pass:(id)a1 error:(id)a2;

@end

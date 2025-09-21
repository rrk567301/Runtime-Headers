@interface PKAppletSubcredentialSharingSession : PKDASession

+ (id)createPendingSessionWithDelegate:(id)a0;
+ (id)createSessionWithDelegate:(id)a0;

- (BOOL)startSession;
- (void)accountAttestionRequestForCredential:(id)a0 withCompletion:(id /* block */)a1;
- (void)cancelSharingInvitationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)getPretrackRequestForKeyWithIdentifier:(id)a0 withCompletion:(id /* block */)a1;
- (void)getProductPlanIdentifierRequestForInvitationWithIdentifier:(id)a0 fromMailboxIdentifier:(id)a1 completion:(id /* block */)a2;
- (void)routingInformationForInvitationWithIdentifier:(id)a0 fromMailboxIdentifier:(id)a1 completionHandler:(id /* block */)a2;
- (void)setAccountAttestation:(id)a0 forCredential:(id)a1 withCompletion:(id /* block */)a2;

@end

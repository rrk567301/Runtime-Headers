@class PKDAPairingSessionManager, PKDASessionManager, NSObject;
@protocol OS_dispatch_queue;

@interface PKDAManager : NSObject {
    NSObject<OS_dispatch_queue> *_workQueue;
    PKDAPairingSessionManager *_pairingSessionManager;
    PKDASessionManager *_managementSessionManager;
    PKDASessionManager *_sharingSessionManager;
}

+ (BOOL)isSupported;
+ (void)aliroCompatibilityManifestWithCompletion:(id /* block */)a0;
+ (BOOL)isCarKeySupportedForManufacturerIdentifier:(id)a0 issuerIdentifier:(id)a1 productPlanIdentifier:(id)a2;

- (void)statusForReceivedSharingInvitationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)listCredentialsWithCompletion:(id /* block */)a0;
- (void)removeSharedCredentialsWithIdentifiers:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (void)statusForSentSharingInvitationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)listCredentialsWithSession:(id)a0 seid:(id)a1 completion:(id /* block */)a2;
- (void)deleteCredentialsForReaderIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)signData:(id)a0 auth:(id)a1 bundleIdentifier:(id)a2 nonce:(id)a3 credential:(id)a4 completion:(id /* block */)a5;
- (void)rescindInvitations:(id)a0 onCredential:(id)a1 withCompletion:(id /* block */)a2;
- (void)declineSharingInvitation:(id)a0 completion:(id /* block */)a1;
- (void)deleteCredential:(id)a0 completion:(id /* block */)a1;
- (void)immobilizerTokensCountForCredential:(id)a0 completion:(id /* block */)a1;
- (id)init;
- (void)declineSharingInvitationWithIdentifier:(id)a0 completion:(id /* block */)a1;
- (id)description;
- (void)outstandingInvitesForCredential:(id)a0 completion:(id /* block */)a1;
- (void)requestSharingInvitation:(id)a0 from:(id)a1 completion:(id /* block */)a2;
- (id)decryptData:(id)a0 withCredential:(id)a1 ephemeralPublicKey:(id)a2;
- (void)deleteCredentialsForIdentifiers:(id)a0 completion:(id /* block */)a1;
- (void)revokeSharedCredentials:(id)a0 onCredential:(id)a1 withCompletion:(id /* block */)a2;
- (void)listDACredentialsWithSession:(id)a0 seid:(id)a1 completion:(id /* block */)a2;
- (void)prewarmWithManufacturerIdentifier:(id)a0 completion:(id /* block */)a1;
- (void)probeTerminalForPairingStatusWithCompletion:(id /* block */)a0;
- (void)deleteCredentials:(id)a0 completion:(id /* block */)a1;
- (void)revokeSharesWithGroupIdentifiers:(id)a0 shouldCascade:(BOOL)a1 credential:(id)a2 completion:(id /* block */)a3;
- (void).cxx_destruct;
- (void)updateTrackingAttestation:(id)a0 forCredential:(id)a1 encryptedContainer:(id)a2 completion:(id /* block */)a3;

@end

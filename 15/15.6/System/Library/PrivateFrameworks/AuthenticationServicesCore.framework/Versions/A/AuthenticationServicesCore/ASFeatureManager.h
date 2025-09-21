@class WBSAutoFillQuirksManager, NSObject;
@protocol OS_dispatch_queue;

@interface ASFeatureManager : NSObject {
    NSObject<OS_dispatch_queue> *_internalQueue;
    WBSAutoFillQuirksManager *_quirksManager;
}

@property (class, readonly, nonatomic) ASFeatureManager *sharedManager;
@property (class, readonly, nonatomic) char shouldAllowAddingNewPasswords;

@property (readonly, nonatomic, getter=isAirDropPasswordsAvailable) char airDropPasswordsAvailable;
@property (readonly, nonatomic, getter=isDeviceConfiguredToAllowPasskeys) char deviceConfiguredToAllowPasskeys;

- (id)init;
- (void).cxx_destruct;
- (id)entepriseAttestationIdentityPersistentReferenceForRelyingParty:(id)a0;
- (char)arePasskeysDisallowedForRelyingParty:(id)a0;
- (char)shouldUseFallbackUIForRelyingParty:(id)a0;
- (id)_fetchCurrentManagedConfiguration;
- (char)_shouldApplyPasskeyQuirks;
- (char)canRequestEnterpriseAttestationForRelyingParty:(id)a0;
- (char)isClientEntitledForInternalTestingWithAuditToken:(struct { unsigned int x0[8]; })a0;

@end

@class WBSAppIDsToDomainsAssociationManager, WBSChangePasswordURLManager, WBSPasswordAuditingEligibleDomainsManager, WBSAutoFillAssociatedDomainsManager, NSString, WBSRemotelyUpdatableDataController, WBSPasswordGenerationManager;

@interface WBSAutoFillQuirksManager : NSObject <WBSRemotelyUpdatableDataControllerDelegate> {
    WBSPasswordGenerationManager *_passwordGenerationManager;
    WBSAutoFillAssociatedDomainsManager *_associatedDomainsManager;
    WBSRemotelyUpdatableDataController *_remotelyUpdatableDataController;
    WBSPasswordAuditingEligibleDomainsManager *_passwordAuditingEligibleDomainsManager;
    WBSAppIDsToDomainsAssociationManager *_appToWebsiteAssociationManager;
    WBSChangePasswordURLManager *_changePasswordURLManager;
}

@property (readonly, nonatomic) WBSPasswordGenerationManager *passwordGenerationManager;
@property (readonly, nonatomic) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property (readonly, nonatomic) WBSPasswordAuditingEligibleDomainsManager *passwordAuditingEligibleDomainsManager;
@property (readonly, nonatomic) WBSChangePasswordURLManager *changePasswordURLManager;
@property (readonly, nonatomic) WBSAppIDsToDomainsAssociationManager *appToWebsiteAssociationManager;
@property (nonatomic) BOOL shouldAttemptToDownloadConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)beginLoadingQuirksFromDisk;
- (void)didDownloadDataForRemotelyUpdatableDataController:(id)a0;
- (id)initWithBuiltInQuirksURL:(id)a0 downloadsDirectoryURL:(id)a1 resourceName:(id)a2 resourceVersion:(id)a3 updateDateDefaultsKey:(id)a4 updateInterval:(double)a5;
- (BOOL)isAutomaticLoginDisallowedOnURL:(id)a0;
- (void)prepareForTermination;
- (id)_appIDsToDomainsAssociationsFromCurrentSnapshot;
- (id)_changePasswordURLStringsFromCurrentSnapshot;
- (id)_domainsIneligibleForPasswordAuditingFromCurrentSnapshot;
- (id)_domainsToConsiderIdenticalFromCurrentSnapshot;
- (id)_domainsWithAssociatedCredentialsFromCurrentSnapshot;
- (BOOL)_isURL:(id)a0 containedInQuirks:(id /* block */)a1;
- (id)_passwordRequirementsByDomainFromCurrentSnapshot;
- (id)_urlFromRelyingParty:(id)a0;
- (BOOL)arePasskeysDisallowedForRelyingParty:(id)a0;
- (BOOL)isStreamlinedLoginDisallowedOnURL:(id)a0;
- (BOOL)shouldUseFallbackUIForRelyingParty:(id)a0;

@end

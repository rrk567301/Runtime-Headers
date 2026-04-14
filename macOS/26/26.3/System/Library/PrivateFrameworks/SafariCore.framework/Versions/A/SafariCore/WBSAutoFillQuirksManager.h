@class WBSAutoFillAssociatedDomainsManager, WBSChangePasswordURLManager, WBSPair, NSString, WBSPasswordGenerationManager, NSSet, WBSAppIDsToDomainsAssociationManager, WBSPasswordAuditingEligibleDomainsManager, NSObject, WBSRemotelyUpdatableDataController;
@protocol OS_dispatch_queue;

@interface WBSAutoFillQuirksManager : NSObject <WBSRemotelyUpdatableDataControllerDelegate> {
    WBSPasswordGenerationManager *_passwordGenerationManager;
    WBSAutoFillAssociatedDomainsManager *_associatedDomainsManager;
    WBSRemotelyUpdatableDataController *_remotelyUpdatableDataController;
    WBSPasswordAuditingEligibleDomainsManager *_passwordAuditingEligibleDomainsManager;
    WBSAppIDsToDomainsAssociationManager *_appToWebsiteAssociationManager;
    WBSChangePasswordURLManager *_changePasswordURLManager;
    NSSet *_domainsThatWhenEmbeddedAsThirdPartyAskForPasswordsForOtherServices;
    NSString *_importCommit;
    BOOL _isForTesting;
    NSObject<OS_dispatch_queue> *_internalQueue;
}

@property (readonly, nonatomic) WBSPasswordGenerationManager *passwordGenerationManager;
@property (readonly, nonatomic) WBSAutoFillAssociatedDomainsManager *associatedDomainsManager;
@property (readonly, nonatomic) WBSPasswordAuditingEligibleDomainsManager *passwordAuditingEligibleDomainsManager;
@property (readonly, nonatomic) WBSChangePasswordURLManager *changePasswordURLManager;
@property (readonly, nonatomic) WBSAppIDsToDomainsAssociationManager *appToWebsiteAssociationManager;
@property (readonly, nonatomic) WBSPair *knownWebBrowsersAndExtensionStorefronts;
@property (readonly, nonatomic) NSString *importCommit;
@property (nonatomic) BOOL shouldAttemptToDownloadConfiguration;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initForTesting:(BOOL)a0;
- (id)init;
- (void).cxx_destruct;
- (void)prepareForTermination;
- (void)beginLoadingQuirksFromDisk;
- (void)didDownloadDataForRemotelyUpdatableDataController:(id)a0;
- (id)initWithBuiltInQuirksURL:(id)a0 downloadsDirectoryURL:(id)a1 resourceName:(id)a2 resourceVersion:(id)a3 updateDateDefaultsKey:(id)a4 updateInterval:(double)a5;
- (BOOL)isAutomaticLoginDisallowedOnURL:(id)a0;
- (BOOL)isDomainKnownToAskForCredentialsForOtherServicesWhenEmbeddedAsThirdParty:(id)a0;
- (id)_initWithBuiltInQuirksURL:(id)a0 downloadsDirectoryURL:(id)a1 resourceName:(id)a2 resourceVersion:(id)a3 updateDateDefaultsKey:(id)a4 updateInterval:(double)a5 isForTesting:(BOOL)a6;
- (id)_appIDsToDomainsAssociationsFromCurrentSnapshot;
- (id)_changePasswordURLStringsFromCurrentSnapshot;
- (id)_domainsIneligibleForPasswordAuditingFromCurrentSnapshot;
- (id)_domainsThatWhenEmbeddedAsThirdPartyAskForPasswordsForOtherServicesFromCurrentSnapshot;
- (id)_domainsToConsiderIdenticalFromCurrentSnapshot;
- (id)_domainsWithAssociatedCredentialsFromCurrentSnapshot;
- (id)_importCommitFromCurrentSnapshot;
- (BOOL)_isURL:(id)a0 containedInQuirks:(id /* block */)a1;
- (id)_passwordRequirementsByDomainFromCurrentSnapshot;
- (id)_passwordRulesByDomainFromCurrentSnapshot;
- (void)_sendDidDownloadNewDataNotification;
- (id)_urlFromRelyingParty:(id)a0;
- (BOOL)arePasskeysDisallowedForRelyingParty:(id)a0;
- (id)domainsThatWhenEmbeddedAsThirdPartyAskForPasswordsForOtherServices;
- (BOOL)isDomainKnownToDoSameDocumentNavigationInTextEditingCallback:(id)a0;
- (BOOL)isStreamlinedLoginDisallowedOnURL:(id)a0;
- (BOOL)shouldUseFallbackUIForRelyingParty:(id)a0;

@end

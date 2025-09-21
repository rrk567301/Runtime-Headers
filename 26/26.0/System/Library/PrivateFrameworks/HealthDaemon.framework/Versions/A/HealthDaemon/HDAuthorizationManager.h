@class _HDAuthorizationRequestGroup, NSString, NSMutableDictionary, HDProfile, NSObject, NSMutableArray;
@protocol OS_dispatch_queue;

@interface HDAuthorizationManager : NSObject <HDHealthDaemonReadyObserver, HDDiagnosticObject> {
    NSObject<OS_dispatch_queue> *_observationQueue;
    NSMutableDictionary *_openAppCompletionHandlersByBundleID;
    NSMutableDictionary *_remoteAuthorizationRecordsByBundleID;
    NSMutableDictionary *_schemaProviderMap;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _lock;
    HDProfile *_profile;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_queue> *_completionQueue;
    NSMutableDictionary *_requestGroupsByBundleIdentifier;
    NSMutableArray *_pendingRequestGroups;
    _HDAuthorizationRequestGroup *_promptingRequestGroup;
    NSMutableDictionary *_pendingObjectAuthorizationRequestsByBundleIdentifier;
    NSMutableDictionary *_activeObjectPromptSessionsBySessionIdentifier;
    NSMutableDictionary *_pendingHealthConceptAuthorizationRequestsByBundleIdentifier;
    NSMutableDictionary *_activeHealthConceptPromptSessionsBySessionIdentifier;
    NSMutableDictionary *_activeRecalibrateEstimatesRequestSessionsByBundleIdentifier;
}

@property (nonatomic) BOOL suppressAuthorizationPrompt;
@property (nonatomic) double requestSessionTimeout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithProfile:(id)a0;
- (id)diagnosticDescription;
- (id)authorizationStatusForTypes:(id)a0 bundleIdentifier:(id)a1 error:(id *)a2;
- (void)endAuthorizationDelegateTransactionWithSessionIdentifier:(id)a0 error:(id)a1;
- (void)setAuthorizationStatuses:(id)a0 authorizationModes:(id)a1 forBundleIdentifier:(id)a2 options:(unsigned long long)a3 completion:(id /* block */)a4;
- (void)fetchSourcesWithExistingAuthorizationsForHealthConceptDomain:(id)a0 completion:(id /* block */)a1;
- (void)applicationsUninstalledNotification:(id)a0;
- (void)fetchAuthorizationStatusesForHealthConceptIdentifier:(id)a0 completion:(id /* block */)a1;
- (long long)authorizationRequestStatusForClientBundleIdentifier:(id)a0 writeTypes:(id)a1 readTypes:(id)a2 error:(id *)a3;
- (void)handleAuthorizationRequestsForBundleIdentifier:(id)a0 promptHandler:(id /* block */)a1 completion:(id /* block */)a2;
- (void)handleObjectAuthorizationRequestsForBundleIdentifier:(id)a0 objectType:(id)a1 promptHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (BOOL)isAuthorizedForObjectType:(id)a0 authorizationStatus:(id)a1 clientEntitlements:(id)a2 sharing:(BOOL)a3 error:(id *)a4;
- (long long)isClientAuthorizedToWriteType:(id)a0 sourceBundleIdentifier:(id)a1 clientEntitlements:(id)a2 profile:(id)a3 error:(id *)a4;
- (id)enqueueAuthorizationRequestForBundleIdentifier:(id)a0 writeTypes:(id)a1 readTypes:(id)a2 authorizationNeededHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (id)_schemaProviderForType:(id)a0;
- (void)handleHealthConceptAuthorizationRequestsForBundleIdentifier:(id)a0 objectType:(id)a1 promptHandler:(id /* block */)a2 completion:(id /* block */)a3;
- (long long)objectAuthorizationRecordForSource:(id)a0 objectUUID:(id)a1 resolveAssociations:(BOOL)a2 error:(id *)a3;
- (void)resetAllAuthorizationRecordsWithCompletion:(id /* block */)a0;
- (void)invalidateAndWait;
- (id)filteredAuthorizedObjectsForClient:(id)a0 anchor:(id)a1 bundleIdentifier:(id)a2 clientEntitlements:(id)a3 error:(id *)a4;
- (void)openAppForAuthorization:(id)a0 sessionIdentifier:(id)a1 completion:(id /* block */)a2;
- (id)filterForClientUserAnnotatedMedications:(id)a0 bundleIdentifier:(id)a1 clientEntitlements:(id)a2 error:(id *)a3;
- (void)setObjectAuthorizationStatusContext:(id)a0 forObjectType:(id)a1 bundleIdentifier:(id)a2 completion:(id /* block */)a3;
- (long long)isClientAuthorizedToWriteObject:(id)a0 sourceBundleIdentifier:(id)a1 clientEntitlements:(id)a2 profile:(id)a3 error:(id *)a4;
- (void)validateRecalibrateEstimatesRequestRecord:(id)a0 completion:(id /* block */)a1;
- (id)enqueueObjectAuthorizationRequestForBundleIdentifier:(id)a0 context:(id)a1 promptIfNeeded:(BOOL)a2 authorizationNeededHandler:(id /* block */)a3 completion:(id /* block */)a4;
- (void)createRecalibrateEstimatesRequestRecordForSource:(id)a0 sampleType:(id)a1 effectiveDate:(id)a2 handler:(id /* block */)a3;
- (id)_builtInSchemas;
- (long long)isClientAuthorizedToReadObject:(id)a0 sourceBundleIdentifier:(id)a1 clientEntitlements:(id)a2 profile:(id)a3 error:(id *)a4;
- (void)performObjectAuthorizationForSource:(id)a0 samples:(id)a1 associatedWithSamplesOfType:(id)a2 completion:(id /* block */)a3;
- (void)cancelAuthorizationRequestsWithIdentifiers:(id)a0;
- (id)enqueueConceptAuthorizationRequestForBundleIdentifier:(id)a0 forObjectType:(id)a1 promptIfNeeded:(BOOL)a2 authorizationNeededHandler:(id /* block */)a3 completionHandler:(id /* block */)a4;
- (void)daemonReady:(id)a0;
- (void)fetchConceptAuthorizationRecordsForSource:(id)a0 completion:(id /* block */)a1;
- (id)fetchConceptAuthorizationContextForPromptSession:(id)a0 error:(id *)a1;
- (id)fetchAuthorizationContextForPromptSession:(id)a0 error:(id *)a1;
- (BOOL)_hasRequiredAuthorizationStatusesForBundleIdentifier:(id)a0 requiredReadTypes:(id)a1 error:(id *)a2;
- (long long)isClientAuthorizedToReadType:(id)a0 sourceBundleIdentifier:(id)a1 clientEntitlements:(id)a2 profile:(id)a3 error:(id *)a4;
- (id)unitTest_schemaProviderMap;
- (void)beginAuthorizationDelegateTransactionWithSessionIdentifier:(id)a0 completion:(id /* block */)a1;
- (void).cxx_destruct;

@end

@class DMFApplicationPolicyMonitor, NSString, STManagementState, DMFEmergencyModeMonitor, CNContactStore, CNDowntimeWhitelist, DMFCommunicationPolicyMonitor, NSMapTable, NSObject;
@protocol OS_dispatch_queue;

@interface STConversation : NSObject {
    NSMapTable *_contextByHandles;
    NSObject<OS_dispatch_queue> *_stateChangeQueue;
    NSObject *_didFetchInitialStateLock;
}

@property (readonly) CNContactStore *contactStore;
@property (readonly) CNDowntimeWhitelist *whitelist;
@property (retain) STManagementState *managementState;
@property (retain) DMFCommunicationPolicyMonitor *communicationPolicyMonitor;
@property (retain) DMFApplicationPolicyMonitor *thirdPartyApplicationPolicyMonitor;
@property (readonly, copy) NSString *bundleIdentifier;
@property (readonly) char isThirdPartyBundleIdentifier;
@property (readonly, copy) NSString *processName;
@property long long generalScreenTimePolicy;
@property long long whileLimitedPolicy;
@property unsigned long long currentApplicationState;
@property long long currentThirdPartyApplicationState;
@property (retain) DMFEmergencyModeMonitor *emergencyModeMonitor;
@property char emergencyModeEnabled;
@property char didFetchInitialScreenTimePolicyState;
@property char didFetchInitialApplicationState;
@property char didFetchInitialEmergencyModeState;
@property char didFetchInitialThirdPartyApplicationState;
@property (readonly) int policyNotifyToken;
@property (readonly) int emergencyModeNotifyToken;
@property (retain) STConversation *me;
@property (copy) id /* block */ conversationCompletionHandler;

+ (void)requestConversationWithBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithBundleIdentifier:(id)a0;
- (void)_contactStoreDidChange;
- (id)_contactsByHandle:(id)a0 error:(id *)a1;
- (void)_currentApplicationStateDidChange;
- (void)_currentThirdPartyApplicationStateDidChange;
- (char)_doesContainAtLeastOneContactInHandles:(id)a0 contactsByHandle:(id)a1;
- (void)_emergencyModeDidChange;
- (id)_filteredArrayForKnownHandlesInArray:(id)a0;
- (void)_populateAllowedContactsByHandlesForContactHandles:(id)a0 context:(id)a1;
- (void)_populateThirdPartyAllowedContactsByHandlesForContactHandles:(id)a0 context:(id)a1;
- (void)_screenTimePolicyDidChange;
- (char)_shouldGeneralScreenTimeAllowHandles:(id)a0 context:(id)a1;
- (char)_shouldWhileLimitedAllowHandles:(id)a0 context:(id)a1;
- (void)_stConversationCommonInitSetupObservationOfStateChanges;
- (void)_stConversationCommonInitWithBundleIdentifier:(id)a0 contactStore:(id)a1 completionHandler:(id /* block */)a2;
- (void)_stConversationCommonInitWithThirdPartyBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;
- (void)_updateAllContextsForNewWhileLimitedPolicyOrWhitelist;
- (void)_updateAllContextsUpdateGeneral:(char)a0 updateLimited:(char)a1 updateCurrentApplicationState:(char)a2 updateAllowedByContactsHandle:(char)a3 refreshContacts:(char)a4 refreshWhitelist:(char)a5 updateEmergencyMode:(char)a6;
- (void)_updateAllThirdPartyContexts;
- (void)_updateContext:(id)a0 forHandles:(id)a1 updateGeneral:(char)a2 updateLimited:(char)a3 updateCurrentApplicationState:(char)a4 updateAllowedByContactsHandle:(char)a5 refreshContacts:(char)a6 refreshWhitelist:(char)a7 updateEmergencyMode:(char)a8;
- (void)_updateThirdPartyContext:(id)a0 forHandles:(id)a1;
- (id)allowableByContactsHandles:(id)a0;
- (void)callCompletionHandlerIfNeededWithConversation:(id)a0 error:(id)a1;
- (void)callCompletionHandlerIfNeededWithThirdPartyConversation:(id)a0 error:(id)a1;
- (id)initSynchronouslyWithBundleIdentifier:(id)a0;
- (id)initSynchronouslyWithThirdPartyBundleIdentifier:(id)a0;
- (id)initWithBundleIdentifier:(id)a0 contactStore:(id)a1;
- (id)initWithBundleIdentifier:(id)a0 contactStore:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithThirdPartyBundleIdentifier:(id)a0 completionHandler:(id /* block */)a1;

@end

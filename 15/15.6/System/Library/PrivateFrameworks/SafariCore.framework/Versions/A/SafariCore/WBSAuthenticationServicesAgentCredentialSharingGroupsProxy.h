@class NSString, NSXPCConnection;

@interface WBSAuthenticationServicesAgentCredentialSharingGroupsProxy : NSObject <WBSAuthenticationServicesAgentCredentialSharingGroupsUserNotificationsProtocol> {
    NSXPCConnection *_connection;
    struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } _internalLock;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)connection;
- (void)setDebugIgnoreDateChecksForRecentlyDeletedNotificationsDefault:(char)a0;
- (void)_setUpConnection:(id)a0;
- (void)deleteGroupWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)fetchNumberOfPasswordAndPasskeySavedAccountsWithCompletion:(id /* block */)a0;
- (void)fetchSharingGroupsThatIncludeFamilyMembers:(id /* block */)a0;
- (void)groupsUpdatedWithInfos:(id)a0;
- (void)groupsUpdatedWithInfos:(id)a0 shouldForceShowingNotifications:(char)a1 completionHandler:(id /* block */)a2;
- (void)leaveGroupWithID:(id)a0 completionHandler:(id /* block */)a1;
- (void)notifyUserAboutSharedSavedAccountsInRecentlyDeleted:(id /* block */)a0;

@end

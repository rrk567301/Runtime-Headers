@class NSArray, NSString, IMDService, IDSAccount;

@interface IMDAppleServiceSession : IMDServiceSession <IMDRelayPushHandlerListener> {
    NSString *_serviceName;
}

@property (readonly, retain, nonatomic) IDSAccount *idsAccount;
@property (readonly, retain, nonatomic) NSArray *aliases;
@property (readonly, retain, nonatomic) NSArray *vettedAliases;
@property (readonly, retain, nonatomic) NSString *callerURI;
@property (readonly, nonatomic) NSArray *registeredURIs;
@property (readonly, retain, nonatomic) NSString *GUID;
@property (readonly, nonatomic) IMDService *service;
@property (readonly, nonatomic) NSArray *accounts;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)idsAccounts;

- (void)validateProfileWithAccount:(id)a0;
- (void)loginServiceSessionWithAccount:(id)a0;
- (id)_aliases;
- (void)resetCallerIDForIDSAccount:(id)a0;
- (BOOL)_isDeviceRegistered;
- (id)_findMatchingURI:(id)a0;
- (void)tryToRepairCallerID:(id)a0 forIDSAccount:(id)a1;
- (void)unvalidateAliases:(id)a0 account:(id)a1;
- (void)_updateAccountStatusToUnregistered:(BOOL)a0 withAccount:(id)a1;
- (void)activeDevicesUpdated;
- (id)chatForOutgoingMessage:(id)a0 fromIdentifier:(id)a1 isInProxyMode:(BOOL)a2 createIfNotExists:(BOOL)a3;
- (void)passwordUpdatedWithAccount:(id)a0;
- (id)initWithAccount:(id)a0 service:(id)a1;
- (id)callerURIForMessageGUID:(id)a0 idsAccount:(id)a1;
- (void)unregisterAccount:(id)a0;
- (void)validateAliases:(id)a0 account:(id)a1;
- (void)reregister;
- (id)callerURIForIDSAccount:(id)a0;
- (long long)_validationStatusForAlias:(id)a0 onAccount:(id)a1;
- (void)removeAliases:(id)a0 account:(id)a1;
- (void)authenticateAccount:(id)a0;
- (BOOL)isiMessageServiceIDSAccount:(id)a0;
- (id)imdAccountForIDSAccount:(id)a0;
- (BOOL)_isDeviceRegisteredForAccount:(id)a0;
- (void)refreshRegistration;
- (id)_aliasStringsForIDSAccount:(id)a0;
- (void)dealloc;
- (void)updateAuthorizationCredentials:(id)a0 token:(id)a1 account:(id)a2;
- (void)reIdentify;
- (id)_aliasesForIDSAccount:(id)a0;
- (void)registerAccount:(id)a0;
- (void)addAliases:(id)a0 account:(id)a1;
- (void)sessionDidBecomeActive;
- (id)idsAccountForURI:(id)a0 IDSServiceName:(id)a1;
- (void)handler:(id)a0 outgoingPlainTextMessage:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 fromToken:(id)a4 messageGUID:(id)a5 timeStamp:(id)a6 isBeingReplayed:(BOOL)a7 storageContext:(id)a8;
- (void)logoutServiceSessionWithAccount:(id)a0;
- (void)sessionWillBecomeInactiveWithAccount:(id)a0;
- (long long)validationStatusForAlias:(id)a0 onAccount:(id)a1;
- (long long)validationStatusForAlias:(id)a0;
- (id)idsAccountForFromURI:(id)a0 toURI:(id)a1;

@end

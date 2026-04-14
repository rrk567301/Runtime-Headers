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

- (void)addAliases:(id)a0 account:(id)a1;
- (id)initWithAccount:(id)a0 service:(id)a1;
- (id)_aliases;
- (long long)_validationStatusForAlias:(id)a0 onAccount:(id)a1;
- (BOOL)_isDeviceRegistered;
- (long long)validationStatusForAlias:(id)a0;
- (void)_updateAccountStatusToUnregistered:(BOOL)a0 withAccount:(id)a1;
- (void)handler:(id)a0 outgoingPlainTextMessage:(id)a1 toIdentifier:(id)a2 fromIdentifier:(id)a3 fromToken:(id)a4 messageGUID:(id)a5 timeStamp:(id)a6 isBeingReplayed:(BOOL)a7 storageContext:(id)a8;
- (id)_aliasStringsForIDSAccount:(id)a0;
- (void)registerAccount:(id)a0;
- (id)chatForOutgoingMessage:(id)a0 fromIdentifier:(id)a1 isInProxyMode:(BOOL)a2 createIfNotExists:(BOOL)a3;
- (id)_aliasesForIDSAccount:(id)a0;
- (void)unvalidateAliases:(id)a0 account:(id)a1;
- (void)validateAliases:(id)a0 account:(id)a1;
- (void)validateProfileWithAccount:(id)a0;
- (void)removeAliases:(id)a0 account:(id)a1;
- (void)updateAuthorizationCredentials:(id)a0 token:(id)a1 account:(id)a2;
- (id)imdAccountForIDSAccount:(id)a0;
- (void)resetCallerIDForIDSAccount:(id)a0;
- (BOOL)_isDeviceRegisteredForAccount:(id)a0;
- (void)passwordUpdatedWithAccount:(id)a0;
- (void)refreshRegistration;
- (void)loginServiceSessionWithAccount:(id)a0;
- (id)idsAccountForURI:(id)a0 IDSServiceName:(id)a1;
- (long long)validationStatusForAlias:(id)a0 onAccount:(id)a1;
- (void)unregisterAccount:(id)a0;
- (void)tryToRepairCallerID:(id)a0 forIDSAccount:(id)a1;
- (void)logoutServiceSessionWithAccount:(id)a0;
- (void)sessionDidBecomeActive;
- (BOOL)isiMessageServiceIDSAccount:(id)a0;
- (void)reregister;
- (void)activeDevicesUpdated;
- (void)sessionWillBecomeInactiveWithAccount:(id)a0;
- (id)callerURIForIDSAccount:(id)a0;
- (id)idsAccountForFromURI:(id)a0 toURI:(id)a1;
- (void)reIdentify;
- (void)authenticateAccount:(id)a0;
- (void)dealloc;

@end

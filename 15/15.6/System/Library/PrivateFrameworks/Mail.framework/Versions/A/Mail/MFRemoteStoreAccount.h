@class ECAuthScheme, NSString, NSArray, NSOperationQueue, NSDate, ACAccount, ECAccount;

@interface MFRemoteStoreAccount : MFMailAccount <MCRemoteStoreAccount>

@property (class, readonly, copy) NSString *accountTypeString;
@property (class, readonly, nonatomic) NSString *csAccountTypeString;

@property (readonly, nonatomic) char shouldCacheAggressively;
@property char storeDraftsOnServer;
@property char storeSentMessagesOnServer;
@property char storeTrashOnServer;
@property char storeJunkOnServer;
@property (readonly, copy, nonatomic) NSString *offlineCacheDirectory;
@property (readonly, nonatomic) char needToSynchronizeMailboxCaches;
@property long long cachePolicy;
@property (readonly, nonatomic) NSOperationQueue *remoteTaskQueue;
@property (readonly, nonatomic) NSOperationQueue *remoteFetchQueue;
@property (readonly, nonatomic) char isGmailAccount;
@property (readonly, copy) NSString *accountTypeString;
@property (readonly) char isYahooAccount;
@property (readonly, copy, nonatomic) NSString *saslProfileName;
@property char configureDynamically;
@property char allowInsecureAuthentication;
@property (copy) NSString *canonicalEmailAddress;
@property long long portNumber;
@property (readonly, copy, nonatomic) NSArray *standardPorts;
@property (readonly, copy, nonatomic) NSArray *standardSSLPorts;
@property long long securityLayerType;
@property (copy) NSString *authenticationScheme;
@property (retain) ECAuthScheme *preferredAuthScheme;
@property (copy) NSString *password;
@property (readonly, copy) NSString *applePersonID;
@property (readonly, copy) NSString *appleAuthenticationToken;
@property (readonly, copy) NSString *machineID;
@property (readonly, copy) NSString *oneTimePassword;
@property (readonly, copy) NSString *clientInfo;
@property (readonly, copy) NSString *base64EncodedAppleAuthenticationToken2;
@property (readonly, copy) NSString *oauthToken;
@property (readonly, copy, nonatomic) NSDate *expiryDate;
@property (readonly, nonatomic) char requiresAuthentication;
@property char shouldUseAuthentication;
@property char usesSSL;
@property (copy) NSString *externalHostname;
@property (readonly, copy) NSString *username;
@property (readonly, copy) NSString *hostname;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *identifier;
@property (readonly, copy) NSString *altDSID;
@property (readonly) ACAccount *systemAccount;
@property (readonly, copy, nonatomic) NSString *statisticsKind;
@property (readonly) char primaryiCloudAccount;
@property (readonly) char isActive;
@property (copy) NSString *displayName;
@property (readonly, copy) NSArray *emailAddressStrings;
@property (readonly, nonatomic, getter=isManaged) char managed;
@property (readonly, nonatomic) ECAccount *baseAccount;

+ (char)cachePoliciesNeedUpdating;

- (id)_specialMailboxWithType:(int)a0 create:(char)a1;
- (char)_canEmptyMessagesFromMailbox:(id)a0;
- (char)_isMailboxTypeStoredLocally:(int)a0;
- (id)_localMailboxRelativePathForType:(int)a0 usingDisplayName:(id)a1;
- (void)_renameLocalSpecialMailboxesToName:(id)a0;
- (void)_setSpecialMailbox:(id)a0 forType:(int)a1;
- (char)_setStoreSpecialMailboxType:(int)a0 onServer:(char)a1;
- (char)_shouldSynchronizeMailbox:(id)a0;
- (id)_specialMailboxWithType:(int)a0 create:(char)a1 isLocal:(char)a2;
- (char)canBeSynchronized;
- (char)canGoOffline;
- (void)considerSynchronizingNow;
- (void)resetNeedToSynchronizeMailboxCaches;
- (char)shouldCacheAttachmentsForMessageWithDateReceived:(id)a0;
- (char)synchronizesDataWithServer;

@end

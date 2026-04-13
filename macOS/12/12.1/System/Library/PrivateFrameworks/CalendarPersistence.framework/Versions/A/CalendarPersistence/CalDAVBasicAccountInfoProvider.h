@class ACAccount, NSString, NSSet, AKAppleIDSession, NSURL, NSData, NSManagedObjectID;

@interface CalDAVBasicAccountInfoProvider : NSObject <CoreDAVAccountInfoProvider, CoreDAVClientCertificateInfoProvider, CoreDAVOAuthInfoProvider, CoreDAVLogDelegate> {
    NSString *_accountID;
    ACAccount *_acAccount;
}

@property (retain) AKAppleIDSession *appleIDSession;
@property (retain) NSString *scheme;
@property (retain) NSString *host;
@property (retain) NSString *principalPath;
@property (retain) NSURL *principalURL;
@property long long port;
@property (retain) NSString *serverRoot;
@property (retain) NSString *user;
@property (retain) NSString *password;
@property (retain) NSData *identityPersist;
@property (retain) NSString *accountID;
@property (retain) NSSet *serverComplianceClasses;
@property (retain) NSManagedObjectID *objectID;
@property BOOL shouldFailAllTasks;
@property (retain) ACAccount *acAccount;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)initialize;
+ (BOOL)_accountIsPartOfAppleAccount:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (struct __SecIdentity { } *)copySecIdentity;
- (id)secCertificates;
- (id)oauthToken;
- (id)logHandle;
- (id)userAgentHeader;
- (id)initWithUser:(id)a0 password:(id)a1 principalURL:(id)a2 objectID:(id)a3;
- (id)initWithUser:(id)a0 password:(id)a1 principalURL:(id)a2 accountID:(id)a3 acAccount:(id)a4 objectID:(id)a5;
- (void)setFullPrincipalAddress:(id)a0;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id /* block */)a0;
- (BOOL)handleTrustChallenge:(id)a0;
- (BOOL)handleShouldUseCredentialStorage;
- (void)noteHomeSetOnDifferentHost:(id)a0;
- (BOOL)shouldSendClientInfoHeaderForURL:(id)a0;
- (id)oauthInfoProvider;
- (BOOL)handleCertificateError:(id)a0;
- (id)clientCertificateInfoProvider;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)a0 withConnection:(id)a1;
- (BOOL)shouldTryRenewingCredential;
- (BOOL)renewCredential;
- (BOOL)shouldCompressRequests;
- (id)getAppleIDSession;
- (id)oauth2Token;
- (unsigned long long)oauthVariant;
- (BOOL)shouldLogTransmittedData;
- (void)coreDAVLogTransmittedDataPartial:(id)a0;
- (void)coreDAVTransmittedDataFinished;
- (void)coreDAVLogRequestBody:(id)a0;
- (void)coreDAVLogResponseBody:(id)a0;
- (void)notePrincipalPathChange:(id)a0;

@end

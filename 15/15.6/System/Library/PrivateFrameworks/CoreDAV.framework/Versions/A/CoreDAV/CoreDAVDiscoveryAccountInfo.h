@class NSString, NSDictionary, NSData, NSURL, NSSet, NSError;
@protocol CoreDAVAccountInfoProvider;

@interface CoreDAVDiscoveryAccountInfo : NSObject <CoreDAVAccountInfoProvider>

@property (retain, nonatomic) NSString *host;
@property (retain, nonatomic) NSString *serverRoot;
@property (retain, nonatomic) NSString *password;
@property (retain, nonatomic) NSString *user;
@property (nonatomic) long long port;
@property (retain, nonatomic) NSData *identityPersist;
@property (retain, nonatomic) NSString *scheme;
@property (retain, nonatomic) NSURL *principalURL;
@property (retain, nonatomic) NSString *accountID;
@property (retain, nonatomic) NSDictionary *serverHeaders;
@property (retain, nonatomic) NSSet *serverComplianceClasses;
@property (retain, nonatomic) NSString *userAgentHeader;
@property (nonatomic) char shouldFailAllTasks;
@property (nonatomic) char started;
@property (nonatomic) char success;
@property (retain, nonatomic) NSError *error;
@property (retain, nonatomic) id<CoreDAVAccountInfoProvider> backingAccountInfoProvider;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;
- (id)url;
- (id)clientToken;
- (id)additionalHeaderValues;
- (char)renewCredential;
- (id)clientCertificateInfoProvider;
- (void)clientTokenRequestedByServer;
- (struct __CFURLStorageSession { } *)copyStorageSession;
- (id)customConnectionProperties;
- (id)getAppleIDSession;
- (char)handleAuthenticateAgainstProtectionSpace:(id)a0;
- (char)handleCertificateError:(id)a0;
- (char)handleShouldUseCredentialStorage;
- (char)handleTrustChallenge:(id)a0 completionHandler:(id /* block */)a1;
- (id)oauthInfoProvider;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id /* block */)a0;
- (char)shouldHandleHTTPCookiesForURL:(id)a0;
- (char)shouldRetryUnauthorizedTask:(id)a0;
- (char)shouldSendClientInfoHeaderForURL:(id)a0;
- (char)shouldTryRenewingCredential;
- (char)shouldTurnModalOnBadPassword;
- (char)shouldUseOpportunisticSockets;
- (id)initWithAccountInfoProvider:(id)a0;

@end

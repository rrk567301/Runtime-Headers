@class NSString, NSURL, CalDAVPrincipalSearchPropertySet, NSManagedObjectID;

@interface CalDAVAccountInfoProvider : CalDAVBasicAccountInfoProvider

@property (retain) NSURL *overrideBaseURL;
@property BOOL useKerberos;
@property BOOL isDelegate;
@property BOOL isManagedAttachmentSupported;
@property (retain) NSString *fullName;
@property (retain) NSManagedObjectID *mainPrincipalID;
@property (retain) NSString *mainPrincipalUID;
@property (retain) NSString *accountCollectionSetName;
@property (retain) CalDAVPrincipalSearchPropertySet *accountSearchPropertySet;

+ (id)providerFromPrincipal:(id)a0;
+ (id)searchPropertySetForAccount:(id)a0;

- (void).cxx_destruct;
- (id)principalURL;
- (id)additionalHeaderValues;
- (id)absoluteURLForPath:(id)a0;
- (void)updateAccountPropertiesFromPrincipal:(id)a0;
- (id)absoluteURLForPath:(id)a0 overrideBaseURL:(id)a1;
- (BOOL)isEqualToProvider:(id)a0;
- (void)promptUserForNewCoreDAVPasswordWithCompletionBlock:(id /* block */)a0;
- (BOOL)handleTrustChallenge:(id)a0;
- (BOOL)handleShouldUseCredentialStorage;
- (BOOL)handleAuthenticateAgainstProtectionSpace:(id)a0;
- (BOOL)shouldTurnModalOnBadPassword;
- (void)noteHomeSetOnDifferentHost:(id)a0;
- (void)noteCollectionSetNameChange:(id)a0;
- (void)noteSearchPropertySetChange:(id)a0;
- (BOOL)shouldSendClientInfoHeaderForURL:(id)a0;

@end

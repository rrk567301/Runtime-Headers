@class NSString, NSMutableDictionary, NSURL, _ASWebAuthenticationSessionRequestServer, NSMutableArray;

@interface SafariLaunchAgent : NSObject <_ASWebAuthenticationSessionRequestServerDelegate, SafariLaunchAgentProtocol> {
    _ASWebAuthenticationSessionRequestServer *_authenticationSessionRequestServer;
    unsigned long long _requestsWaitingToBeEnqueued;
    NSURL *_cachedBrowserURL;
    NSMutableDictionary *_xpcConnections;
    NSMutableDictionary *_enabledTopicsToServiceNameSets;
    NSMutableArray *_pendingAuthenticationSessionRequestIdentifiers;
    NSMutableArray *_pendingAuthenticationSessionUserNotifications;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (void)shutdown;
- (id)_serviceNames;
- (void)showPrivacyReport;
- (void)authenticationSessionRequestServerWillBeginHandlingRequests:(id)a0;
- (void)authenticationSessionRequestServerNeedsClientToReconnect:(id)a0;
- (void)authenticationSessionRequestServerDidFinishAllRequests:(id)a0;
- (void)connectToAuthenticationSessionRequestClientWithEndpoint:(id)a0;
- (void)didFulfillAuthenticationSessionRequest:(id)a0 withCallbackURL:(id)a1 error:(id)a2;
- (void)askDefaultBrowserToBeginAuthenticationSessionWithUUID:(id)a0 url:(id)a1 callbackURLScheme:(id)a2 usingEphemeralSession:(BOOL)a3 jitEnabled:(BOOL)a4 completionHandler:(id /* block */)a5;
- (void)askDefaultBrowserToBeginAuthenticationSessionWithUUID:(id)a0 url:(id)a1 callbackURLScheme:(id)a2 usingEphemeralSession:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)askDefaultBrowserToCancelAuthenticationSessionWithUUID:(id)a0;
- (void)askSafariToAddReadingListItemWithURL:(id)a0 title:(id)a1 previewText:(id)a2 completionHandler:(id /* block */)a3;
- (void)registerSyncServiceWithInfo:(id)a0;
- (void)syncOtherClientsWithPushTopic:(id)a0;
- (void)launchSafariToURL:(id)a0;
- (void)_sendAlertForPendingAuthenticationRequestsToBrowserAtURL:(id)a0;
- (id)_iconURLForBrowserAtURL:(id)a0;
- (void)_authenticationPromptTitle:(id *)a0 message:(id *)a1 defaultButtonText:(id *)a2 alternateButtonText:(id *)a3 cancelButtonText:(id *)a4 forAppName:(id)a5 domain:(id)a6 usingSafari:(BOOL)a7 supportsEphemeralSession:(BOOL)a8 browserName:(id)a9;
- (id)_safariSyncServiceConnectionWithServiceName:(id)a0;

@end

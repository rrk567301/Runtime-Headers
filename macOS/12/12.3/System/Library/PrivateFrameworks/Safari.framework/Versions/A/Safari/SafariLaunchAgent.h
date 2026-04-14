@class NSString, NSMutableDictionary, NSURL, _ASWebAuthenticationSessionRequestServer;

@interface SafariLaunchAgent : NSObject <_ASWebAuthenticationSessionRequestServerDelegate, SafariLaunchAgentProtocol> {
    _ASWebAuthenticationSessionRequestServer *_authenticationSessionRequestServer;
    unsigned long long _requestsWaitingToBeEnqueued;
    NSURL *_cachedBrowserURL;
    NSMutableDictionary *_xpcConnections;
    NSMutableDictionary *_enabledTopicsToServiceNameSets;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (void).cxx_destruct;
- (id)_serviceNames;
- (void)showPrivacyReport;
- (void)authenticationSessionRequestServerWillBeginHandlingRequests:(id)a0;
- (void)authenticationSessionRequestServerNeedsClientToReconnect:(id)a0;
- (void)authenticationSessionRequestServerDidFinishAllRequests:(id)a0;
- (void)connectToAuthenticationSessionRequestClientWithEndpoint:(id)a0;
- (void)didFulfillAuthenticationSessionRequest:(id)a0 withCallbackURL:(id)a1 error:(id)a2;
- (void)askDefaultBrowserToBeginAuthenticationSessionWithUUID:(id)a0 url:(id)a1 callbackURLScheme:(id)a2 usingEphemeralSession:(BOOL)a3 completionHandler:(id /* block */)a4;
- (void)askDefaultBrowserToCancelAuthenticationSessionWithUUID:(id)a0;
- (void)askSafariToAddReadingListItemWithURL:(id)a0 title:(id)a1 previewText:(id)a2 completionHandler:(id /* block */)a3;
- (void)registerSyncServiceWithInfo:(id)a0;
- (void)syncOtherClientsWithPushTopic:(id)a0;
- (void)launchSafariToURL:(id)a0;
- (id)_iconURLForBrowserAtURL:(id)a0;
- (void)_sendAlertForPendingAuthenticationRequestsToBrowserAtURL:(id)a0;
- (id)_safariSyncServiceConnectionWithServiceName:(id)a0;

@end

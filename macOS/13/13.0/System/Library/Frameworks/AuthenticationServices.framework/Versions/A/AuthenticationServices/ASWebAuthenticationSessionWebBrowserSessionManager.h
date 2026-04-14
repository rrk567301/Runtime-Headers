@class ASWebAuthenticationSessionController;
@protocol ASWebAuthenticationSessionWebBrowserSessionHandling;

@interface ASWebAuthenticationSessionWebBrowserSessionManager : NSObject {
    ASWebAuthenticationSessionController *_authenticationSessionController;
}

@property (class, readonly, nonatomic) ASWebAuthenticationSessionWebBrowserSessionManager *sharedManager;

@property (retain, nonatomic) id<ASWebAuthenticationSessionWebBrowserSessionHandling> sessionHandler;
@property (readonly, nonatomic) BOOL wasLaunchedByAuthenticationServices;

+ (BOOL)_wasLaunchedByAuthenticationServices;
+ (void)_registerDefaultsForASWASInSetupAssistantIfNeeded;

- (void).cxx_destruct;
- (void)_handleAuthenticationSessionsAvailableEvent:(id)a0 withReplyEvent:(id)a1;
- (void)_beginListeningForAuthenticationSessionRequests;
- (void)_fetchNextAvailableRequest;

@end

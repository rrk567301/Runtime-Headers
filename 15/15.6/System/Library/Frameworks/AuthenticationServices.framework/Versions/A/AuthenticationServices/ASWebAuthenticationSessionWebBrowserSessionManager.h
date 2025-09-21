@class ASWebAuthenticationSessionController;
@protocol ASWebAuthenticationSessionWebBrowserSessionHandling;

@interface ASWebAuthenticationSessionWebBrowserSessionManager : NSObject {
    ASWebAuthenticationSessionController *_authenticationSessionController;
}

@property (class, readonly, nonatomic) ASWebAuthenticationSessionWebBrowserSessionManager *sharedManager;

@property (retain, nonatomic) id<ASWebAuthenticationSessionWebBrowserSessionHandling> sessionHandler;
@property (readonly, nonatomic) char wasLaunchedByAuthenticationServices;

+ (void)_registerDefaultsForASWASInSetupAssistantIfNeeded;
+ (char)_wasLaunchedByAuthenticationServices;

- (void).cxx_destruct;
- (void)_beginListeningForAuthenticationSessionRequests;
- (void)_fetchNextAvailableRequest;
- (void)_handleAuthenticationSessionsAvailableEvent:(id)a0 withReplyEvent:(id)a1;

@end

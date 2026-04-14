@class ASAuthorizationController, NSString, NSURL, NSUUID, NSXPCConnection;
@protocol ASWebAuthenticationPresentationContextProviding;

@interface ASWebAuthenticationSession : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding> {
    ASAuthorizationController *_authorizationController;
    BOOL _receivedDoNotHandle;
    NSURL *_url;
    NSString *_callbackURLScheme;
    id /* block */ _completionHandler;
    BOOL _canceled;
    ASWebAuthenticationSession *_referenceToSelf;
    NSUUID *_sessionUUID;
    NSXPCConnection *_safariLaunchAgentConnection;
    BOOL _jitEnabled;
}

@property (nonatomic, setter=_setSkipPresentationAnchorCheck:) BOOL _skipPresentationAnchorCheck;
@property (weak, nonatomic) id<ASWebAuthenticationPresentationContextProviding> presentationContextProvider;
@property (nonatomic) BOOL prefersEphemeralWebBrowserSession;
@property (readonly, nonatomic) BOOL canStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleSSOExtensionIdentifier:(struct { unsigned int x0[8]; })a0;
+ (void)resetSSOExtensionIdentifier;

- (void).cxx_destruct;
- (BOOL)start;
- (void)cancel;
- (void)authorizationController:(id)a0 didCompleteWithAuthorization:(id)a1;
- (void)authorizationController:(id)a0 didCompleteWithError:(id)a1;
- (id)presentationAnchorForAuthorizationController:(id)a0;
- (void)_invalidate;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 completionHandler:(id /* block */)a2;
- (void)_endSessionWithCallbackURL:(id)a0 error:(id)a1;
- (id)_safariLaunchAgentConnection;
- (id)_safariLaunchAgentProxy;
- (BOOL)_startDryRun:(BOOL)a0;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 usingEphemeralSession:(BOOL)a2 completionHandler:(id /* block */)a3;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 usingEphemeralSession:(BOOL)a2 jitEnabled:(BOOL)a3 completionHandler:(id /* block */)a4;

@end

@class NSUUID, NSString, NSArray, NSURL, NSXPCConnection, NSDictionary, ASAuthorizationController, ASWebAuthenticationSessionCallback;
@protocol ASWebAuthenticationPresentationContextProviding;

@interface ASWebAuthenticationSession : NSObject <ASAuthorizationControllerDelegate, ASAuthorizationControllerPresentationContextProviding> {
    ASAuthorizationController *_authorizationController;
    char _receivedDoNotHandle;
    NSURL *_url;
    ASWebAuthenticationSessionCallback *_callback;
    id /* block */ _completionHandler;
    char _canceled;
    ASWebAuthenticationSession *_referenceToSelf;
    NSUUID *_sessionUUID;
    NSXPCConnection *_safariLaunchAgentConnection;
    char _jitEnabled;
}

@property (nonatomic, setter=_setSkipPresentationAnchorCheck:) char _skipPresentationAnchorCheck;
@property (retain, nonatomic) NSArray *proxiedAssociatedDomains;
@property (nonatomic) char shouldFailOnMDMProfileErrorResponse;
@property (retain, nonatomic) NSArray *customAnchorCertificates;
@property (nonatomic) unsigned long long storageMode;
@property (copy, nonatomic, setter=_setNetworkAttributionApplicationBundleIdentifier:) NSString *_networkAttributionApplicationBundleIdentifier;
@property (weak, nonatomic) id<ASWebAuthenticationPresentationContextProviding> presentationContextProvider;
@property (nonatomic) char prefersEphemeralWebBrowserSession;
@property (retain, nonatomic) NSDictionary *additionalHeaderFields;
@property (readonly, nonatomic) char canStart;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)handleSSOExtensionIdentifier:(struct { unsigned int x0[8]; })a0;
+ (void)resetSSOExtensionIdentifier;

- (void).cxx_destruct;
- (char)start;
- (void)cancel;
- (void)authorizationController:(id)a0 didCompleteWithAuthorization:(id)a1;
- (void)authorizationController:(id)a0 didCompleteWithError:(id)a1;
- (id)presentationAnchorForAuthorizationController:(id)a0;
- (void)_invalidate;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 completionHandler:(id /* block */)a2;
- (id)initWithURL:(id)a0 callback:(id)a1 completionHandler:(id /* block */)a2;
- (char)_areAdditionalHeaderFieldsValid:(id)a0;
- (void)_cancelWithError:(id)a0;
- (void)_endSessionWithCallbackURL:(id)a0 error:(id)a1;
- (char)_isForbiddenHeaderFieldName:(id)a0 value:(id)a1;
- (id)_safariLaunchAgentConnection;
- (id)_safariLaunchAgentProxy;
- (char)_startDryRun:(char)a0;
- (char)_validateAdditionalHeaderFieldsDryRun:(char)a0;
- (id)initWithURL:(id)a0 callback:(id)a1 usingEphemeralSession:(char)a2 jitEnabled:(char)a3 completionHandler:(id /* block */)a4;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 usingEphemeralSession:(char)a2 completionHandler:(id /* block */)a3;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 usingEphemeralSession:(char)a2 jitEnabled:(char)a3 completionHandler:(id /* block */)a4;

@end

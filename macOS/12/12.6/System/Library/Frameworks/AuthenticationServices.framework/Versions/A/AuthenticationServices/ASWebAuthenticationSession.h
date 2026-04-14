@class NSString, NSURL, NSUUID, NSXPCConnection;
@protocol ASWebAuthenticationPresentationContextProviding;

@interface ASWebAuthenticationSession : NSObject {
    NSURL *_url;
    NSString *_callbackURLScheme;
    id /* block */ _completionHandler;
    BOOL _canceled;
    ASWebAuthenticationSession *_referenceToSelf;
    NSUUID *_sessionUUID;
    NSXPCConnection *_safariLaunchAgentConnection;
}

@property (nonatomic, setter=_setSkipPresentationAnchorCheck:) BOOL _skipPresentationAnchorCheck;
@property (weak, nonatomic) id<ASWebAuthenticationPresentationContextProviding> presentationContextProvider;
@property (nonatomic) BOOL prefersEphemeralWebBrowserSession;
@property (readonly, nonatomic) BOOL canStart;

- (void).cxx_destruct;
- (BOOL)start;
- (void)_invalidate;
- (void)cancel;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 completionHandler:(id /* block */)a2;
- (id)_safariLaunchAgentConnection;
- (id)initWithURL:(id)a0 callbackURLScheme:(id)a1 usingEphemeralSession:(BOOL)a2 completionHandler:(id /* block */)a3;
- (BOOL)_startDryRun:(BOOL)a0;
- (id)_safariLaunchAgentProxy;
- (void)_endSessionWithCallbackURL:(id)a0 error:(id)a1;

@end

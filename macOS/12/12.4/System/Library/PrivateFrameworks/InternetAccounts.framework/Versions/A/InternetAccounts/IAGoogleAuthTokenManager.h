@class NSXPCConnection, NSString, NSURL, NSPanel, NSArray, WebView, NSWindow, IAAListPlugin, NSButton;
@protocol IAXPCProtocol;

@interface IAGoogleAuthTokenManager : NSObject {
    NSXPCConnection *_connection;
    id<IAXPCProtocol> _agent;
    NSWindow *_hostWindow;
    BOOL _isSheet;
    NSPanel *_currentSheet;
    IAAListPlugin *_googlePlugin;
    NSArray *_topLevelObjects;
    NSURL *_webLoginURL;
    WebView *_webview;
    struct __CFURLStorageSession { } *_privateSession;
    NSPanel *_googleWebLoginWebViewPanel;
    NSButton *_doneButton;
    id /* block */ _completion;
}

@property (retain) NSString *currentToken;

+ (id)shared;
+ (id)keychainEntryForUserName:(id)a0;
+ (void)setKeychainEntry:(id)a0 ForUserName:(id)a1;
+ (id)googleTokenForEmailAddress:(id)a0 shouldCreateToken:(BOOL)a1;
+ (void)removeKeychainEntryForUserName:(id)a0;

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (id)connection:(id)a0 willSendRequest:(id)a1 redirectResponse:(id)a2;
- (void)connection:(id)a0 didReceiveAuthenticationChallenge:(id)a1;
- (BOOL)connection:(id)a0 canAuthenticateAgainstProtectionSpace:(id)a1;
- (void)done:(id)a0;
- (void)cancelButtonPressed:(id)a0;
- (void)closeSheet;
- (void)dismiss;
- (id)webView:(id)a0 resource:(id)a1 willSendRequest:(id)a2 redirectResponse:(id)a3 fromDataSource:(id)a4;
- (void)webView:(id)a0 decidePolicyForNavigationAction:(id)a1 request:(id)a2 frame:(id)a3 decisionListener:(id)a4;
- (void)help:(id)a0;
- (void)loadNibIfNeeded;
- (void)loadGoogleWebView;
- (void)dropSheet:(id)a0;
- (void)cleanUpWebLoginUI;
- (id)tokenForAccountWithEmailAddress:(id)a0 shouldCreateToken:(BOOL)a1;
- (id)tokenForAccountUID:(id)a0 shouldCreateToken:(BOOL)a1;
- (void)displayGoogleWebLoginAlertInWindow:(id)a0 withWebLoginURL:(id)a1 completion:(id /* block */)a2;
- (void)verifyIdentityButtonPressed:(id)a0;
- (void)setGooglePlugin:(id)a0;

@end

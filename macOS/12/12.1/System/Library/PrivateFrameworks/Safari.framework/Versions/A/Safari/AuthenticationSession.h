@class ASWebAuthenticationSessionRequest, BrowserDocument;

@interface AuthenticationSession : NSObject <AuthenticationSessionNavigationHandling> {
    BrowserDocument *_document;
}

@property (readonly, nonatomic) ASWebAuthenticationSessionRequest *request;

- (void).cxx_destruct;
- (void)start;
- (void)cancel;
- (void)_windowWillClose:(id)a0;
- (void)_tearDown;
- (id)initWithRequest:(id)a0;
- (BOOL)handleNavigationToURL:(id)a0;
- (void)_registerForWindowCloseNotification;
- (void)_unregisterForWindowCloseNotification;

@end

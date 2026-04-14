@protocol ACDEUIControllerProtocol;

@interface ACDEAppleConnectImplComponents : ACMAppleConnectImplComponents

@property (retain, nonatomic) id<ACDEUIControllerProtocol> uiController;

+ (id)components;

- (id)preferences;
- (id)systemInfo;
- (id)createAuthenticationRequest;
- (void)cleanupOnMemoryWarning;
- (void)unloadUIController;
- (id)createTransport;
- (id)createHandlerWithClass:(Class)a0 context:(id)a1;
- (id)createTicketVerificationRequest;
- (id)twoSVController;

@end

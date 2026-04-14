@protocol ACDEUIControllerProtocol;

@interface ACDEAppleConnectImplComponents : ACMAppleConnectImplComponents

@property (retain, nonatomic) id<ACDEUIControllerProtocol> uiController;

+ (id)components;

- (id)preferences;
- (id)systemInfo;
- (id)createTransport;
- (id)twoSVController;
- (id)createHandlerWithClass:(Class)a0 context:(id)a1;
- (id)createTicketVerificationRequest;
- (void)cleanupOnMemoryWarning;
- (id)createAuthenticationRequest;
- (void)unloadUIController;

@end

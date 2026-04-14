@protocol ACDEUIControllerProtocol;

@interface ACDEAppleConnectImplComponents : ACMAppleConnectImplComponents

@property (retain, nonatomic) id<ACDEUIControllerProtocol> uiController;

+ (id)components;

- (id)preferences;
- (id)systemInfo;
- (void)cleanupOnMemoryWarning;
- (void)unloadUIController;
- (id)createTransport;
- (id)createHandlerWithClass:(Class)a0 context:(id)a1;
- (id)createAuthenticationRequest;
- (id)createTicketVerificationRequest;
- (id)twoSVController;

@end

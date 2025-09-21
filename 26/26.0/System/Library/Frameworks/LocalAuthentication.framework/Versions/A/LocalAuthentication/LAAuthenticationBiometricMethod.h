@class LAAuthenticationBiometricMethodState, LAContext;

@interface LAAuthenticationBiometricMethod : LAAuthenticationMethod <LAUIDelegate>

@property (readonly, nonatomic) LAContext *context;
@property (retain, nonatomic) LAAuthenticationBiometricMethodState *currentState;
@property (readonly, nonatomic) BOOL isDevicePresent;
@property (readonly, nonatomic) BOOL isEnrolled;
@property (readonly, nonatomic) BOOL isAllowed;

- (void)terminate;
- (BOOL)start;
- (id)initWithConfiguration:(id)a0;
- (void).cxx_destruct;
- (void)distributeBiometricFeedback:(long long)a0;
- (void)distributeStateChange;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (unsigned long long)lockoutStateFromError:(id)a0;
- (void)runBiometricOperation;

@end

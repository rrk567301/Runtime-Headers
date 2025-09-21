@class LAAuthenticationBiometricMethodState, LAContext;

@interface LAAuthenticationBiometricMethod : LAAuthenticationMethod <LAUIDelegate>

@property (readonly, nonatomic) LAContext *context;
@property (retain, nonatomic) LAAuthenticationBiometricMethodState *currentState;
@property (readonly, nonatomic) char isDevicePresent;
@property (readonly, nonatomic) char isEnrolled;
@property (readonly, nonatomic) char isAllowed;

- (void).cxx_destruct;
- (char)start;
- (void)terminate;
- (id)initWithConfiguration:(id)a0;
- (void)distributeBiometricFeedback:(long long)a0;
- (void)distributeStateChange;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (unsigned long long)lockoutStateFromError:(id)a0;
- (void)runBiometricOperation;

@end

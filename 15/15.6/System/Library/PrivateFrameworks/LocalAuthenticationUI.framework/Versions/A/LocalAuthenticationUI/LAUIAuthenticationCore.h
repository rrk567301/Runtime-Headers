@class LAContext, NSDictionary, NSView, NSObject;
@protocol LAUIAuthenticationCoreDelegate;

@interface LAUIAuthenticationCore : NSObject <LAUIDelegate, LAUIAuthentication> {
    char _doneMatching;
    char _doneWatch;
    char _usesInternalContext;
    char _mirroringToDefaultUI;
    long long _lastState;
    char _supportsConcurrentEvaluations;
}

@property (nonatomic) unsigned long long enabledMechanisms;
@property (nonatomic) unsigned long long activeMechanisms;
@property (nonatomic, getter=isApplicationActive) char applicationActive;
@property (nonatomic, getter=isKeyWindow) char keyWindow;
@property (nonatomic, getter=isUiActive) char uiActive;
@property (retain, nonatomic) LAContext *context;
@property (readonly, nonatomic) NSDictionary *faceIdResult;
@property (weak, nonatomic) NSObject<LAUIAuthenticationCoreDelegate> *delegate;
@property (weak, nonatomic) NSView *view;
@property (readonly, nonatomic) long long biometryType;

+ (void)performBlockOnMainThread:(id /* block */)a0;

- (void).cxx_destruct;
- (void)_notification:(id)a0;
- (void)event:(long long)a0 params:(id)a1 reply:(id /* block */)a2;
- (char)disableMechanism:(unsigned long long)a0 error:(id *)a1;
- (char)enableMechanism:(unsigned long long)a0 error:(id *)a1;
- (char)isMechanismEnabled:(unsigned long long)a0;
- (id)notificationNames;
- (void)_biometryState:(long long)a0;
- (void)startOrStopBackgroundMechanisms;
- (void)_biometricNoMatchWithBiolockoutError:(id)a0;
- (void)_enableAvailableMechanisms:(unsigned long long)a0;
- (void)_handleBackgroundMechanismsResult:(id)a0 error:(id)a1 context:(id)a2;
- (char)_mechanism:(unsigned long long)a0 enable:(char)a1 error:(id *)a2;
- (id)_optionsForBackgroundMechanism;
- (long long)_policyForBackgroundMechanisms;
- (void)_processActivityChangeForNotification:(id)a0 block:(id /* block */)a1;
- (void)_setupMechanisms:(unsigned long long)a0;
- (void)_setupNotifications:(char)a0;
- (char)_simpleStatusInParams:(id)a0 touchId:(long long)a1 faceId:(long long)a2;
- (void)_startBackgroundMechanisms;
- (void)_stopBackgroundMechanisms;
- (void)_watchState:(long long)a0;
- (void)checkView;
- (id)initWithMechanisms:(unsigned long long)a0;
- (id)initWithMechanisms:(unsigned long long)a0 context:(id)a1;
- (char)isMechanismActive:(unsigned long long)a0;
- (char)isMechanismAvailable:(unsigned long long)a0 error:(id *)a1;

@end

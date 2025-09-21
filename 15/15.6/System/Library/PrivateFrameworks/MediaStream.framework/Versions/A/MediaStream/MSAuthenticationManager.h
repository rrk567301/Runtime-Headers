@class ACAccountStore, MSAlertManager;

@interface MSAuthenticationManager : NSObject {
    int _state;
    MSAlertManager *_alertManager;
    ACAccountStore *_acAccountStore;
    int _bagRefetchCount;
}

@property (nonatomic) char isListeningToKeybagChanges;
@property (nonatomic) int keybagChangeNotifyToken;
@property (readonly, nonatomic, getter=isWaitingForAuth) char waitingForAuth;

+ (id)sharedManager;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_didReceiveAccountConfigChangedNotification;
- (void)_renewCredentialsForAccount:(id)a0;
- (void)didEncounterAuthenticationFailureForPersonID:(id)a0;
- (void)didEncounterAuthenticationSuccessForPersonID:(id)a0;
- (id)initWithAlertManager:(id)a0;
- (void)rearmAuthenticationAlert;

@end

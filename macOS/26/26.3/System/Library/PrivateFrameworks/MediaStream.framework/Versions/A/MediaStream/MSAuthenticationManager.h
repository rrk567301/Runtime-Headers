@class ACAccountStore, MSAlertManager;

@interface MSAuthenticationManager : NSObject {
    int _state;
    MSAlertManager *_alertManager;
    ACAccountStore *_acAccountStore;
    int _bagRefetchCount;
}

@property (nonatomic) BOOL isListeningToKeybagChanges;
@property (nonatomic) int keybagChangeNotifyToken;
@property (readonly, nonatomic, getter=isWaitingForAuth) BOOL waitingForAuth;

+ (id)sharedManager;

- (void)_renewCredentialsForAccount:(id)a0;
- (void)didEncounterAuthenticationSuccessForPersonID:(id)a0;
- (id)initWithAlertManager:(id)a0;
- (void)didEncounterAuthenticationFailureForPersonID:(id)a0;
- (void)_didReceiveAccountConfigChangedNotification;
- (void)rearmAuthenticationAlert;
- (void).cxx_destruct;
- (void)dealloc;

@end

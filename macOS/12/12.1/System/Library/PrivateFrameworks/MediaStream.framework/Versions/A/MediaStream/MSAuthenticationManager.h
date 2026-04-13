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

- (void)dealloc;
- (void).cxx_destruct;
- (id)initWithAlertManager:(id)a0;
- (void)_renewCredentialsForAccount:(id)a0;
- (void)didEncounterAuthenticationFailureForPersonID:(id)a0;
- (void)_didReceiveAccountConfigChangedNotification;
- (void)didEncounterAuthenticationSuccessForPersonID:(id)a0;
- (void)rearmAuthenticationAlert;

@end

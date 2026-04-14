@class SFSession, HMHomeManager, ACAccountStore, SFDevice, NSObject;
@protocol OS_dispatch_queue;

@interface SFAuthenticateAccountsSession : NSObject {
    BOOL _activateCalled;
    BOOL _invalidateCalled;
    unsigned long long _startTicks;
    int _accountsState;
    ACAccountStore *_accountStore;
    int _iCloudTermsState;
    SFSession *_sfSession;
    int _sfSessionState;
    BOOL _sessionSecured;
    int _pairVerifyState;
    int _pairSetupState;
    int _infoExchangeState;
    unsigned int _targetedAccountTypes;
    unsigned long long _problemFlags;
    HMHomeManager *_homeManager;
    int _finishState;
}

@property (retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue;
@property (retain, nonatomic) SFDevice *peerDevice;
@property (copy, nonatomic) id /* block */ progressHandler;
@property (copy, nonatomic) id /* block */ promptForPINHandler;

- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void).cxx_destruct;
- (void)activate;
- (void)_cleanup;
- (void)_reportError:(id)a0;
- (void)_run;
- (int)_runFinish;
- (void)pairSetupTryPIN:(id)a0;
- (int)_runSFSessionStart;
- (int)_runPairVerify;
- (int)_runPairSetup;
- (int)_runInfoExchange;
- (void)_runInfoExchangeRequest;
- (void)_runInfoExchangeResponse:(id)a0 error:(id)a1;
- (int)_validateAccounts;
- (int)_validateiCloudAccountTerms;
- (void)_handleShowTermsUI:(id)a0 responseHandler:(id /* block */)a1;
- (id)_availableAccountsToSignIn;
- (void)_presentiCloudTermsUIWithAccount:(id)a0;
- (void)__runFinishWithSFSession:(id)a0;
- (int)__validateAccountsWithAccountStore:(id)a0;

@end

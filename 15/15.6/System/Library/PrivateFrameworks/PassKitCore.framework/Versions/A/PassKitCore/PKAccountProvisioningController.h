@class PKAccountCredential, NSString, PKPaymentProvisioningController, NSObject;
@protocol OS_dispatch_source, PKAccountProvisioningControllerDelegate;

@interface PKAccountProvisioningController : NSObject {
    PKAccountCredential *_accountCredential;
    PKPaymentProvisioningController *_provisioningController;
    char _enrollInAMP;
    char _makeDefaultInAMP;
    NSObject<OS_dispatch_source> *_activationTimer;
    char _usingRemoteLibrary;
    char _passIsActivated;
}

@property (nonatomic) double passActivationTimeout;
@property (weak, nonatomic) id<PKAccountProvisioningControllerDelegate> delegate;
@property (copy, nonatomic) NSString *provisionedPassUniqueID;
@property (nonatomic) char didAddToAMP;
@property (readonly, nonatomic) unsigned long long provisionLocalPassState;
@property (readonly, nonatomic) unsigned long long localPassActivationState;
@property (readonly, nonatomic) unsigned long long provisionWatchPassState;
@property (readonly, nonatomic) unsigned long long addToIDMSState;
@property (readonly, nonatomic) unsigned long long makeAccountPassDefaultOnLocalDeviceState;
@property (readonly, nonatomic) unsigned long long addToAMPState;

+ (char)_isPaymentPassActivated:(id)a0 forAccountCredential:(id)a1;

- (void)dealloc;
- (void).cxx_destruct;
- (void)_handlePassActiviated;
- (void)_informDelegateOfError:(id)a0;
- (void)_informDelegateOfStateUpdate;
- (id)_notificationDidChangeNames;
- (void)_passLibraryDidChange:(id)a0;
- (void)_processRemainingTasks;
- (void)_setupAccountAndProvisionAccountCredenital:(id)a0 provisioningController:(id)a1 completion:(id /* block */)a2;
- (void)_startPassActivationObserver;
- (void)_stopPassActivationObserver;
- (void)addToIDMS;
- (id)initWithAccountCredential:(id)a0 provisioningController:(id)a1 accountService:(id)a2;
- (id)initWithAccountCredential:(id)a0 provisioningController:(id)a1 usingRemoteLibrary:(char)a2;
- (void)makeAccountPassDefaultOnLocalDevice;
- (void)performAMPEnrollmentShouldEnroll:(char)a0 shouldMakeDefault:(char)a1;
- (void)provisionAccountPassToLocalDevice;
- (void)provisionAccountPassToWatchAsDefault:(char)a0;

@end

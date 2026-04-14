@class NSString, PKPeerPaymentService;
@protocol PKPeerPaymentTargetDeviceDelegate;

@interface PKPeerPaymentWebServiceTargetDevice : NSObject <PKPeerPaymentWebServiceTargetDeviceProtocol> {
    PKPeerPaymentService *_peerPaymentService;
    id<PKPeerPaymentTargetDeviceDelegate> _targetDeviceDelegate;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)secureElementIdentifiers;
- (id)deviceClass;
- (void)_handlePreferencesChangedNotification:(id)a0;
- (void)checkTLKsMissingWithCompletion:(id /* block */)a0;
- (BOOL)userHasDisabledPeerPayment;
- (id)preferences;
- (void)renewAppleAccountWithCompletionHandler:(id /* block */)a0;
- (id)initWithTargetDeviceDelegate:(id)a0;
- (id)appleAccountInformation;
- (void).cxx_destruct;
- (void)peerPaymentReRegisterWithURL:(id)a0 pushToken:(id)a1 peerPaymentWebService:(id)a2 completion:(id /* block */)a3;
- (void)resetApplePayManateeViewWithCompletion:(id /* block */)a0;
- (void)cloudStoreStatusWithCompletion:(id /* block */)a0;
- (id)bridgedClientInfo;
- (void)dealloc;
- (void)_handleAccountChangedNotification:(id)a0;
- (void)updateAccountWithCompletion:(id /* block */)a0;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)a0 credential:(id)a1 completion:(id /* block */)a2;
- (void)provisionPeerPaymentPassWithProvisioningController:(id)a0 peerPaymentWebService:(id)a1 credential:(id)a2 completion:(id /* block */)a3;
- (void)setPreferences:(id)a0 completion:(id /* block */)a1;
- (void)downloadPassIfNecessaryWithCompletion:(id /* block */)a0;
- (id)account;
- (void)setUserHasDisabledPeerPayment:(BOOL)a0;
- (id)deviceRegion;

@end

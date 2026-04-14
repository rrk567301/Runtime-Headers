@class HMMTRUIDialogPresenter, HMMTRAccessoryServer, NSObject, NSNumber;
@protocol OS_dispatch_queue;

@interface HMMTRAttestationStatus : NSObject

@property (retain) NSObject<OS_dispatch_queue> *clientQueue;
@property (weak, nonatomic) HMMTRAccessoryServer *accessoryServer;
@property (retain, nonatomic) HMMTRUIDialogPresenter *uiDialogPresenter;
@property (retain, nonatomic) id userAuthorizationDelegate;
@property (readonly, copy) NSNumber *failSafeExpiryTimeoutSecs;

- (void).cxx_destruct;
- (void)_requestUserPermissionForBridgeAccessory:(id)a0 completionHandler:(id /* block */)a1;
- (void)accessoryServer:(id)a0 completedDeviceAttestation:(id)a1 error:(id)a2 completion:(id /* block */)a3;
- (id)initWithQueue:(id)a0 uiDialogPresenter:(id)a1 failSafeExpiryTimeoutSecs:(id)a2;
- (void)populateAttestationParameters:(id)a0;

@end

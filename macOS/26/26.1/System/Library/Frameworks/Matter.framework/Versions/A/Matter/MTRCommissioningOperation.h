@class MTRDeviceController_Concrete, NSString, MTRCommissioningParameters, NSNumber, NSObject;
@protocol OS_dispatch_queue, MTRCommissioningDelegate;

@interface MTRCommissioningOperation : NSObject <MTRDeviceControllerDelegate_Internal, MTRDeviceControllerDelegate> {
    MTRCommissioningParameters *_parameters;
    NSNumber *_commissioningID;
    id<MTRCommissioningDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    MTRDeviceController_Concrete *_controller;
}

@property (readonly, copy, nonatomic) NSString *setupPayload;
@property (readonly, nonatomic) BOOL isInternallyCreated;
@property (nonatomic) BOOL isWaitingAfterPASEEstablished;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)stop;
- (void).cxx_destruct;
- (id)_internalDelegate;
- (void)_dispatchCommissioningCHIPError:(struct ChipError { unsigned int x0; unsigned int x1; char *x2; })a0;
- (void)_dispatchCommissioningError:(id)a0;
- (void)_dispatchCommissioningError:(id)a0 forCommissioningID:(id)a1 withMetrics:(id)a2;
- (void)_dispatchCommissioningError:(id)a0 withMetrics:(id)a1;
- (void)_earlyFailCommissioning:(struct ChipError { unsigned int x0; unsigned int x1; char *x2; })a0;
- (void)controller:(id)a0 commissioneeHasReceivedNetworkCredentials:(id)a1;
- (void)controller:(id)a0 commissioningComplete:(id)a1 nodeID:(id)a2 metrics:(id)a3;
- (void)controller:(id)a0 commissioningSessionEstablishmentDone:(id)a1;
- (void)controller:(id)a0 readCommissioneeInfo:(id)a1;
- (void)controller:(id)a0 scannedThreadNetworks:(id)a1 error:(id)a2;
- (void)controller:(id)a0 scannedWiFiNetworks:(id)a1 error:(id)a2;
- (void)controller:(id)a0 statusUpdate:(long long)a1;
- (void)deviceAttestationCompletedForController:(id)a0 opaqueDeviceHandle:(void *)a1 attestationDeviceInfo:(id)a2 error:(id)a3;
- (id)initWithParameters:(id)a0 setupPayload:(id)a1 commissioningID:(id)a2 isInternallyCreated:(BOOL)a3 delegate:(id)a4 queue:(id)a5;
- (id)initWithParameters:(id)a0 setupPayload:(id)a1 delegate:(id)a2 queue:(id)a3;
- (void)startWithController:(id)a0;

@end

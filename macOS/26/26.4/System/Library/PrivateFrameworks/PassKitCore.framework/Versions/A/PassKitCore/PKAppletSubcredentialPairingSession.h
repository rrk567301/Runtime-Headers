@protocol PKAppletSubcredentialPairingSessionDelegate;

@interface PKAppletSubcredentialPairingSession : PKDASession

@property (weak, nonatomic) id<PKAppletSubcredentialPairingSessionDelegate> delegate;

+ (id)createSessionWithDelegate:(id)a0;

- (id)prewarmWithManufacturerIdentifier:(id)a0;
- (id)probeTerminalForPairingStatus;
- (id)startPairingWithConfiguration:(id)a0 keyDisplayName:(id)a1 bindingAttestation:(id)a2;
- (id)trackSubcredential:(id)a0 encryptedContainer:(id)a1 withReceipt:(id)a2;

@end

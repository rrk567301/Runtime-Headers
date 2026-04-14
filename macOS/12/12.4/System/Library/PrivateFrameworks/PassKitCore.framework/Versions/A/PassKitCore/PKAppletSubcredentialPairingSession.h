@protocol PKAppletSubcredentialPairingSessionDelegate;

@interface PKAppletSubcredentialPairingSession : PKDASession

@property (weak, nonatomic) id<PKAppletSubcredentialPairingSessionDelegate> delegate;

+ (id)createSessionWithDelegate:(id)a0;

- (id)startPairingWithKeyDisplayName:(id)a0 pairingPassword:(id)a1 radioTechnologies:(unsigned long long)a2;
- (id)trackSubcredential:(id)a0 slotIdentifier:(id)a1 confidentialMailboxData:(id)a2 ephemeralPublicKey:(id)a3 withReceipt:(id)a4;
- (id)probeTerminalForPairingStatus;
- (id)prewarmWithIssuerName:(id)a0;

@end

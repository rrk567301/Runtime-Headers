@protocol CBPairingAgentParentDelegate, CBPairingAgentDelegate;

@interface CBPairingAgent : NSObject

@property (weak, nonatomic) id<CBPairingAgentParentDelegate> parentManager;
@property (weak, nonatomic) id<CBPairingAgentDelegate> delegate;
@property (nonatomic) char useOOBMode;

- (void)dealloc;
- (void).cxx_destruct;
- (void)observeValueForKeyPath:(id)a0 ofObject:(id)a1 change:(id)a2 context:(void *)a3;
- (char)isPeerPaired:(id)a0;
- (char)isPeerCloudPaired:(id)a0;
- (char)isPeerMagicPaired:(id)a0;
- (void)pairPeer:(id)a0;
- (void)respondToPairingRequest:(id)a0 type:(long long)a1 accept:(char)a2 data:(id)a3;
- (id)retrievePairedPeers;
- (void)unpairPeer:(id)a0;
- (void)handleUnpaired:(id)a0;
- (void)handlePairingCompleted:(id)a0;
- (void)handlePairingMessage:(unsigned short)a0 args:(id)a1;
- (void)handlePairingRequested:(id)a0;
- (id)initWithParentManager:(id)a0;
- (void)pairPeer:(id)a0 options:(id)a1;
- (void)pairPeer:(id)a0 useMITM:(char)a1;
- (void)removeGlobalTemporaryLTK;
- (id)retrieveOOBDataForPeer:(id)a0;
- (void)setGlobalTemporaryLTK:(id)a0 useCase:(unsigned int)a1;
- (void)setOOBPairingEnabled:(char)a0 forPeer:(id)a1;
- (void)unpairPeer:(id)a0 options:(id)a1;
- (void)updateRegistration;

@end

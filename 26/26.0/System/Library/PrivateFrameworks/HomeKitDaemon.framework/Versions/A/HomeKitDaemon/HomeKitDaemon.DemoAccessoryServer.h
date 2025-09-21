@interface HomeKitDaemon.DemoAccessoryServer : HAPAccessoryServer {
    void /* unknown type, empty encoding */ browser;
    void /* unknown type, empty encoding */ uuid;
    void /* unknown type, empty encoding */ targetToCurrentStateUpdateDelay;
    void /* unknown type, empty encoding */ skipKeychainSave;
}

@property (nonatomic, readonly) long long communicationProtocol;
@property (nonatomic, readonly) long long linkType;
@property (nonatomic, readonly) BOOL paired;

- (void)disconnect;
- (void)disconnectWithError:(id)a0;
- (BOOL)isPaired;
- (void).cxx_destruct;
- (void)tearDownSessionOnAuthCompletion;
- (void)provisionToken:(id)a0;
- (void)addPairing:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (void)authenticateAccessory;
- (void)continueAuthAfterValidation:(BOOL)a0;
- (void)continuePairingAfterAuthPrompt;
- (void)continuePairingUsingWAC;
- (void)discoverAccessories;
- (void)enableEvents:(BOOL)a0 forCharacteristics:(id)a1 withCompletionHandler:(id /* block */)a2 queue:(id)a3;
- (void)handleUpdatesForCharacteristics:(id)a0 stateNumber:(id)a1;
- (void)identifyWithCompletion:(id /* block */)a0;
- (id)initWithKeystore:(id)a0;
- (void)listPairingsWithCompletionQueue:(id)a0 completionHandler:(id /* block */)a1;
- (void)readCharacteristicValues:(id)a0 timeout:(double)a1 expiry:(id)a2 completionQueue:(id)a3 completionHandler:(id /* block */)a4;
- (void)removePairing:(id)a0 completionQueue:(id)a1 completionHandler:(id /* block */)a2;
- (BOOL)removePairingForCurrentControllerOnQueue:(id)a0 completion:(id /* block */)a1;
- (void)startPairingWithRequest:(id)a0;
- (void)writeCharacteristicValues:(id)a0 timeout:(double)a1 expiry:(id)a2 completionQueue:(id)a3 completionHandler:(id /* block */)a4;

@end

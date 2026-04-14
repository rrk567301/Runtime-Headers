@interface SiriKitRuntime.BridgeBackedServiceHelper : NSObject <AFServiceHelper> {
    void /* unknown type, empty encoding */ bridge;
    void /* unknown type, empty encoding */ outputPublisher;
    void /* unknown type, empty encoding */ requestContextData;
    void /* unknown type, empty encoding */ peerInfo;
}

- (id)init;
- (void).cxx_destruct;
- (BOOL)isDeviceInStarkMode;
- (void)dismissAssistant;
- (void)prepareForAudioHandoffWithCompletion:(id /* block */)a0;
- (void)prepareForAudioHandoffFailedWithCompletion:(id /* block */)a0;
- (void)handleCommand:(id)a0 completion:(id /* block */)a1;
- (id)endpointInfo;
- (id)instanceInfo;
- (BOOL)openSensitiveURL:(id)a0;
- (id)assistantLocalizedStringForKey:(id)a0 table:(id)a1 bundle:(id)a2;
- (BOOL)isDeviceLockedWithPasscode;
- (BOOL)isDeviceInCarDND;
- (BOOL)isTimeoutSuspended;
- (id)peerInfoForCurrentCommand;
- (void)fetchContextsForKeys:(id)a0 includesNearbyDevices:(BOOL)a1 completion:(id /* block */)a2;
- (void)isDeviceWatchAuthenticatedWithCompletion:(id /* block */)a0;

@end

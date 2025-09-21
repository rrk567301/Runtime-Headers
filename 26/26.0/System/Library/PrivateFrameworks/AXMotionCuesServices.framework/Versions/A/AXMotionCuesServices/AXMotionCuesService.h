@interface AXMotionCuesService : NSObject <AXUIClientDelegate, AXMotionCuesServiceProtocol> {
    void /* unknown type, empty encoding */ _client;
    void /* unknown type, empty encoding */ movingHandlers;
    void /* unknown type, empty encoding */ visibleHandlers;
}

@property (class, nonatomic, readonly) AXMotionCuesService *sharedInstance;

- (id)userInterfaceClient:(id)a0 processMessageFromServer:(id)a1 withIdentifier:(long long)a2 error:(id *)a3;
- (id)init;
- (id)userInterfaceClient:(id)a0 accessQueueForProcessingMessageWithIdentifier:(long long)a1;
- (void)connectionWithServiceWasInterruptedForUserInterfaceClient:(id)a0;
- (void).cxx_destruct;
- (void)enableWithCompletionBlock:(id /* block */)a0;
- (void)disable:(id /* block */)a0;
- (id)registerMotionCuesMoving:(id /* block */)a0;
- (id)registerMotionCuesVisible:(id /* block */)a0;
- (void)simulateDeviceMotion:(id)a0;
- (void)unregisterMotionCuesMoving:(id)a0;
- (void)unregisterMotionCuesVisible:(id)a0;

@end

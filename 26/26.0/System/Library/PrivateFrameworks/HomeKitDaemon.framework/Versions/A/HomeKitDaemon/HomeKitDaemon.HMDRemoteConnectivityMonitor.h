@interface HomeKitDaemon.HMDRemoteConnectivityMonitor : NSObject <HMFTimerDelegate> {
    void /* unknown type, empty encoding */ failedMessagesThreshold;
    void /* unknown type, empty encoding */ connectivityLostTimer;
    void /* unknown type, empty encoding */ delegate;
    void /* unknown type, empty encoding */ workQueue;
    void /* unknown type, empty encoding */ failedMessages;
    void /* unknown type, empty encoding */ connectivityLostTimerFired;
    void /* unknown type, empty encoding */ hasUnderlyingConnection;
    void /* unknown type, empty encoding */ _hasConnectivity;
}

@property (nonatomic, readonly) BOOL hasConnectivity;

- (void)timerDidFire:(id)a0;
- (id)init;
- (void).cxx_destruct;
- (id)initWithFailedMessagesThreshold:(unsigned long long)a0 connectivityLostTimerInterval:(double)a1 delegate:(id)a2 workQueue:(id)a3;
- (void)sendMessageFailed;
- (void)sendMessageSucceeded;
- (void)underlyingConnectionChanged:(BOOL)a0;

@end

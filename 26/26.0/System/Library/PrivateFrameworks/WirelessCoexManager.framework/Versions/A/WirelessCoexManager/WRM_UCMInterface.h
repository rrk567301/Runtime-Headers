@class NSObject;
@protocol OS_xpc_object, OS_dispatch_queue;

@interface WRM_UCMInterface : NSObject {
    id /* block */ mBtConnectedLinksObserver;
    id /* block */ mNotificationBlock;
    void /* function */ *mHomeKitBTLoadFunctionPointer;
    void /* function */ *mNRFrequencyUpdateForMicFuncPtr;
    id /* block */ mULFrequencyUpdatesObserver;
    BOOL mIsAwdlEnabled;
    BOOL mIsNanEnabled;
    BOOL mIsNanRealTimeEnabled;
    NSObject<OS_xpc_object> *mConnection;
    int mProcessId;
    NSObject<OS_dispatch_queue> *mQueue;
}

- (unsigned int)stopTimer;
- (unsigned int)startTimer:(double)a0;
- (void)dealloc;
- (void)handleNotification:(id)a0 :(BOOL)a1;
- (id)init;
- (void)unregisterClient;
- (void)reConnect;
- (void)registerClient:(int)a0 queue:(id)a1;
- (void).cxx_destruct;
- (long long)getWirelessRadioManagerReportLoad:(int)a0 loadDuration:(double)a1 callback:(void /* function */ *)a2;
- (void)setAWDLEnabled:(BOOL)a0;
- (BOOL)checkConnection:(id)a0;
- (unsigned int)getInstantLoad;
- (id)getWirelessFrequencyBandUpdatesForMIC:(void /* function */ *)a0;
- (id)getWirelessULFrequencyBandUpdates:(id /* block */)a0;
- (void)processBTConnectedLinksNotification:(id)a0;
- (void)sendBtLoad:(id)a0;
- (void)sendNRFrequencyUpdateForMic:(id)a0;
- (void)sendULFrequencyUpdate:(id)a0;
- (void)setCriticalAirPlayEnabled:(BOOL)a0 estimatedDuration:(unsigned int)a1 criticalityPercentage:(unsigned short)a2;
- (void)setNANEnabled:(BOOL)a0;
- (void)setNANRealTimeEnabled:(BOOL)a0;
- (void)subscribeBtConnectedLinksNotification:(id /* block */)a0;

@end

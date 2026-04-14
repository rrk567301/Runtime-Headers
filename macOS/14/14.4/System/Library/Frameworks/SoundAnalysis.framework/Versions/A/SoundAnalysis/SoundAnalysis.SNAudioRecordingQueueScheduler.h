@interface SoundAnalysis.SNAudioRecordingQueueScheduler : NSObject {
    void /* unknown type, empty encoding */ eventHandlerQueue;
    void /* unknown type, empty encoding */ eventHandlerQueueFundsSpent;
    void /* unknown type, empty encoding */ eventHandlerQueueFundsEarned;
    void /* unknown type, empty encoding */ eventHandlerQueueStopped;
    void /* unknown type, empty encoding */ bufferHandler;
    void /* unknown type, empty encoding */ interruptionHandler;
    void /* unknown type, empty encoding */ transaction;
    void /* unknown type, empty encoding */ recordFormat;
    void /* unknown type, empty encoding */ lastAudioHeartbeatTime;
    void /* unknown type, empty encoding */ lastProcessingHeartbeatTime;
    void /* unknown type, empty encoding */ unhealthyBufferCount;
}

- (id)init;
- (void).cxx_destruct;
- (void)stop;

@end

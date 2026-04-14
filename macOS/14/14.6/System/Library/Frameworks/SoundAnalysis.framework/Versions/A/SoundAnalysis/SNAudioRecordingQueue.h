@interface SNAudioRecordingQueue : NSObject {
    void /* unknown type, empty encoding */ recordFormat;
    void /* unknown type, empty encoding */ audioQueueConfiguration;
    void /* unknown type, empty encoding */ session;
    void /* unknown type, empty encoding */ dispatchQueue;
    void /* unknown type, empty encoding */ bufferHandler;
    void /* unknown type, empty encoding */ interruptionHandler;
    void /* unknown type, empty encoding */ running;
    void /* unknown type, empty encoding */ audioQueue;
    void /* unknown type, empty encoding */ aqCallbackScheduler;
}

- (void)dealloc;
- (id)init;
- (void).cxx_destruct;
- (BOOL)start;
- (void)stop;
- (id)initWithFormat:(id)a0 audioQueueConfiguration:(id)a1 audioSession:(id)a2 queue:(id)a3 audioBufferHandler:(id /* block */)a4 interruptionHandler:(id /* block */)a5;

@end

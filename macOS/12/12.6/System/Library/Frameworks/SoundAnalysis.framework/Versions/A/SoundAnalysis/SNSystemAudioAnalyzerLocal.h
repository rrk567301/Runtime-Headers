@class SNAudioStreamAnalyzer, NSMutableArray, SNAudioConfiguration, AVAudioSession, SNAudioRecordingQueue, NSObject, AVAudioFormat;
@protocol OS_dispatch_queue;

@interface SNSystemAudioAnalyzerLocal : NSObject <SNSystemAudioAnalyzerProtocol> {
    AVAudioFormat *_recordFormat;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSObject<OS_dispatch_queue> *_analysisQueue;
    SNAudioRecordingQueue *_recordingQueue;
    SNAudioStreamAnalyzer *_streamAnalyzer;
    long long _recordingState;
    BOOL _clientStartedAnalysis;
    NSMutableArray *_requests;
    SNAudioConfiguration *_audioConfiguration;
    AVAudioSession *_audioSession;
}

- (id)init;
- (void).cxx_destruct;
- (void)start;
- (void)stop;
- (BOOL)addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)_removeRequest:(id)a0;
- (void)removeRequest:(id)a0;
- (void)setAudioConfiguration:(id)a0;
- (void)removeAllRequests;
- (void)_removeAllRequests;
- (void)sendErrorToAllRequests:(id)a0;
- (void)handleAVAudioSessionInterruption:(id)a0;
- (void)handleAVAudioSessionRouteChange:(id)a0;
- (void)handleAVAudioSessionMediaServicesLost:(id)a0;
- (void)handleAVAudioSessionMediaServicesReset:(id)a0;
- (BOOL)_addRequest:(id)a0 withObserver:(id)a1 error:(id *)a2;
- (void)startAudio;
- (void)stopAudio;
- (void)handleAudioStreamInterrupted;

@end

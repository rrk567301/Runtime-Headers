@interface ImmersiveMediaSupport.AVCAudioSession : NSObject <AVCStreamInputDelegate, AVCAudioStreamDelegate> {
    void /* unknown type, empty encoding */ _audioConverter;
    void /* unknown type, empty encoding */ _inputASBD;
    void /* unknown type, empty encoding */ _outputASBD;
    void /* unknown type, empty encoding */ _inputFormatDescription;
    void /* unknown type, empty encoding */ _outputFormatDescription;
    void /* unknown type, empty encoding */ _audioSendThread;
    void /* unknown type, empty encoding */ outputSampleRate;
    void /* unknown type, empty encoding */ outputRate;
    void /* unknown type, empty encoding */ _currentAudioBufferNumber;
    void /* unknown type, empty encoding */ _keepRunningAudioThread;
    void /* unknown type, empty encoding */ _audioStarted;
    void /* unknown type, empty encoding */ _firstAudioPackageReceived;
    void /* unknown type, empty encoding */ pcmDataBuffer;
    void /* unknown type, empty encoding */ _sampleBufferQueue;
    void /* unknown type, empty encoding */ silence;
    void /* unknown type, empty encoding */ _audioStreamConfig;
    void /* unknown type, empty encoding */ _audioInput;
    void /* unknown type, empty encoding */ _audioStream;
    void /* unknown type, empty encoding */ _startTime;
    void /* unknown type, empty encoding */ _localEndpoint;
    void /* unknown type, empty encoding */ _syncronizer;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ _error;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)dealloc;
- (id)init;
- (void)streamDidStop:(id)a0;
- (void).cxx_destruct;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)streamDidRTCPTimeOut:(id)a0;
- (void)didResumeStreamInput:(id)a0;
- (void)didStartStreamInput:(id)a0;
- (void)didStopStreamInput:(id)a0;
- (void)didSuspendStreamInput:(id)a0;

@end

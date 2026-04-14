@interface ImmersiveMediaSupport.AVCVideoSession : NSObject <AVCVideoStreamDelegate, AVCStreamInputDelegate> {
    void /* unknown type, empty encoding */ _videoInput;
    void /* unknown type, empty encoding */ _videoStream;
    void /* unknown type, empty encoding */ _pixelFormat;
    void /* unknown type, empty encoding */ _bytesPerPixel;
    void /* unknown type, empty encoding */ _inputFormatDescription;
    void /* unknown type, empty encoding */ _videoStarted;
    void /* unknown type, empty encoding */ _pixelBufferPool;
    void /* unknown type, empty encoding */ _splitPixelBufferSession;
    void /* unknown type, empty encoding */ _convertPixelBufferSession;
    void /* unknown type, empty encoding */ _state;
    void /* unknown type, empty encoding */ _error;
    void /* unknown type, empty encoding */ _localEndpoint;
    void /* unknown type, empty encoding */ _syncronizer;
    void /* unknown type, empty encoding */ _$observationRegistrar;
}

- (void)dealloc;
- (id)init;
- (void)streamDidStop:(id)a0;
- (void).cxx_destruct;
- (void)stream:(id)a0 didStart:(BOOL)a1 error:(id)a2;
- (void)streamDidServerDie:(id)a0;
- (void)didResumeStreamInput:(id)a0;
- (void)didStartStreamInput:(id)a0;
- (void)didStopStreamInput:(id)a0;
- (void)didSuspendStreamInput:(id)a0;

@end

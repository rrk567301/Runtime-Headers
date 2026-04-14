@class NSString, SCStream, NSObject;
@protocol OS_dispatch_queue;

@interface VCMacScreenCaptureScreenCaptureKit : VCObject <SCStreamDelegate, SCStreamOutput, VCMacScreenCaptureSource> {
    id _delegate;
    SCStream *_screenStream;
    NSObject<OS_dispatch_queue> *_screenSampleHandlerQueue;
    BOOL _isWindowed;
    unsigned int _displayWidth;
    unsigned int _displayHeight;
    NSObject<OS_dispatch_queue> *_audioSampleHandlerQueue;
    void *_audioSinkContext;
    void /* function */ *_audioSinkProc;
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _audioContextMutex;
    unsigned int _audioSampleCount;
    unsigned int _audioTimestamp;
    double _audioHostTime;
    struct opaqueVCAudioBufferList { } *_audioBuffer;
    BOOL _useScreenCaptureKitForAudio;
    struct _VCMacScreenCaptureSourceContext { void *sinkContext; void /* function */ *sinkCallback; } _frameCallback;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)dealloc;
- (void)finalize;
- (int)stop;
- (void)stream:(id)a0 didStopWithError:(id)a1;
- (void)stream:(id)a0 didOutputSampleBuffer:(struct opaqueCMSampleBuffer { } *)a1 ofType:(long long)a2;
- (id)initWithDelegate:(id)a0 screenCaptureSourceContext:(const struct _VCMacScreenCaptureSourceContext { void *x0; void /* function */ *x1; } *)a1;
- (void)callbackWithEventString:(id)a0;
- (BOOL)addAudioOutputWithConfig:(id)a0;
- (BOOL)removeAudioOutput;
- (int)startWithConfig:(id)a0;
- (id)newScreenStreamPropertiesFromConfig:(id)a0;
- (BOOL)updateSystemAudioWithConfig:(id)a0;
- (int)startSessionForScreenContextID:(id)a0;

@end

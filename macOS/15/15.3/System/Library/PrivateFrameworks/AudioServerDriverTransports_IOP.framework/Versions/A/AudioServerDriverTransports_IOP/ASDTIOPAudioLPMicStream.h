@class ASDTIOPAudioIsolatedIOBufferDevice, ASDTIOPAudioLPMicDevice, NSString, ASDTIOPAudioIOBufferDevice;

@interface ASDTIOPAudioLPMicStream : ASDTExclavesStream <ASDTIOServiceDependency> {
    unsigned int _ioBufferSize;
    char *_ioBuffer;
}

@property (readonly, nonatomic) ASDTIOPAudioLPMicDevice *parent;
@property (retain, nonatomic) ASDTIOPAudioIsolatedIOBufferDevice *isolatedIOBufferDevice;
@property (retain, nonatomic) ASDTIOPAudioIOBufferDevice *ioBufferDevice;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ioServiceDependenciesForConfig:(id)a0;

- (void).cxx_destruct;
- (unsigned int)ioBufferSize;
- (void)startStream;
- (void)stopStream;
- (void)ioThreadStateChange:(id)a0;
- (id /* block */)readIsolatedInputBlock;
- (id /* block */)exclavesReadInput;
- (id)initWithConfig:(id)a0 withDevice:(id)a1;
- (char *)ioBuffer;
- (int)pmIdleStream:(int)a0;
- (int)pmPrepareStream:(int)a0;
- (int)pmPrewarmStream:(int)a0;
- (void)releaseIOBuffer;
- (BOOL)mapIOBuffer;
- (int)setupIsolatedIOForUseCase:(unsigned long long)a0 withFrameSize:(unsigned int)a1;
- (int)teardownIsolatedIOForUseCase:(unsigned long long)a0;
- (BOOL)updateFromStreamDescription:(struct StreamDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; } *)a0;

@end

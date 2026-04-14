@class ASDTIOPAudioIOBufferDevice, NSString, ASDTIOPAudioLPMicDevice;

@interface ASDTIOPAudioLPMicStream : ASDTStream <ASDTIOServiceDependency> {
    unsigned int _ioBufferSize;
    char *_ioBuffer;
}

@property (readonly, nonatomic) ASDTIOPAudioLPMicDevice *parent;
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
- (id)initWithConfig:(id)a0 withDevice:(id)a1;
- (char *)ioBuffer;
- (int)pmIdleStream:(int)a0;
- (int)pmPrepareStream:(int)a0;
- (void)releaseIOBuffer;
- (BOOL)mapIOBuffer;
- (BOOL)updateFromStreamDescription:(struct StreamDescription { double x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; unsigned int x5; unsigned int x6; unsigned int x7; unsigned int x8; unsigned int x9; unsigned int x10; } *)a0;

@end

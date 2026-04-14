@class ASDTIOPAudioLPMicStream, NSString;

@interface ASDTIOPAudioLPMicDevice : ASDTAudioDevice <ASDTIOServiceDependency> {
    struct unique_ptr<ASDT::IOPAudio::LPMic::UserClient, std::default_delete<ASDT::IOPAudio::LPMic::UserClient>> { struct __compressed_pair<ASDT::IOPAudio::LPMic::UserClient *, std::default_delete<ASDT::IOPAudio::LPMic::UserClient>> { struct UserClient *__value_; } __ptr_; } _lpMicUserClient;
    struct EngineStatus { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *_lpMicEngineStatus;
    unsigned long long _initialSampleTime;
}

@property (weak, nonatomic) ASDTIOPAudioLPMicStream *inputStream;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)ioServiceDependenciesForConfig:(id)a0;
+ (double)defaultSamplingRate;
+ (id)enableListeningPropertyForService:(id)a0;

- (void).cxx_destruct;
- (id).cxx_construct;
- (unsigned int)timestampPeriod;
- (id /* block */)getZeroTimestampBlock;
- (int)setupIsolatedIOForStream:(id)a0 frameSize:(unsigned int)a1 useCase:(unsigned long long)a2;
- (int)teardownIsolatedIOForStream:(id)a0 useCase:(unsigned long long)a1;
- (id)initWithConfig:(id)a0 withDeviceManager:(id)a1 andPlugin:(id)a2;
- (int)performPowerStatePrepare:(int)a0;
- (int)performPowerStatePrewarm:(int)a0;
- (unsigned int)availablePastDataFrames;
- (BOOL)getEnabledChannelMask:(unsigned int *)a0;
- (unsigned int)ioBufferSizeFrames;
- (struct EngineStatus { unsigned long long x0; unsigned long long x1; unsigned long long x2; unsigned long long x3; } *)lpMicEngineStatus;
- (unsigned int)maximumPastDataFrames;
- (BOOL)setEnabledChannelMask:(unsigned int)a0;
- (BOOL)setupCustomProperties;
- (BOOL)updateFromStreamDescription;

@end

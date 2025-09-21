@class NSMutableDictionary;

@interface VCCoreAudio_AudioUnitMock : VCObject <VCCoreAudio_AudioUnitMockCallbacks> {
    NSMutableDictionary *_audioUnitInstanceMap;
    char _isMockingEnabled;
    struct tagVCRealTimeThread { unsigned int x0; unsigned int x1; struct _opaque_pthread_mutex_t { long long x0; char x1[56]; } x2; id x3; void /* function */ *x4; void *x5; struct OpaqueFigThread *x6; int x7; char x8[60]; unsigned int x9; unsigned int x10; } *_micThread;
    char _terminateMicThread;
}

+ (id)sharedInstance;

- (id)init;
- (void)start;
- (void)stop;
- (char)setProperty:(struct ComponentInstanceRecord { long long x0[1]; } *)a0 inID:(unsigned int)a1 inScope:(unsigned int)a2 inElement:(unsigned int)a3 inData:(const void *)a4 inDataSize:(unsigned int)a5 outStatus:(int *)a6;
- (id)audioInstanceForAudioUnit:(struct ComponentInstanceRecord { long long x0[1]; } *)a0;
- (char)audioUnit:(struct ComponentInstanceRecord { long long x0[1]; } *)a0 setParameter:(unsigned int)a1 scope:(unsigned int)a2 element:(unsigned int)a3 value:(float)a4 bufferOffsetInFrames:(unsigned int)a5 outStatus:(int *)a6;
- (char)complexRender:(struct ComponentInstanceRecord { long long x0[1]; } *)a0 ioActionFlags:(unsigned int *)a1 inTimeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a2 inOutputBusNumber:(unsigned int)a3 inNumberOfPackets:(unsigned int)a4 outNumberOfPackets:(unsigned int *)a5 outPacketDescriptions:(struct AudioStreamPacketDescription { long long x0; unsigned int x1; unsigned int x2; } *)a6 ioData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a7 outMetadata:(void *)a8 outMetadataByteSize:(unsigned int *)a9 outStatus:(int *)a10;
- (char)generateMutedTalkerNotification:(unsigned int)a0;
- (char)getProperty:(struct ComponentInstanceRecord { long long x0[1]; } *)a0 inID:(unsigned int)a1 inScope:(unsigned int)a2 inElement:(unsigned int)a3 outData:(void *)a4 ioDataSize:(unsigned int *)a5 outStatus:(int *)a6;
- (char)initialize:(struct ComponentInstanceRecord { long long x0[1]; } *)a0 outStatus:(int *)a1;
- (id)newKeyForAudioUnit:(struct ComponentInstanceRecord { long long x0[1]; } *)a0;
- (char)outputUnitStart:(struct ComponentInstanceRecord { long long x0[1]; } *)a0 outStatus:(int *)a1;
- (char)outputUnitStop:(struct ComponentInstanceRecord { long long x0[1]; } *)a0 outStatus:(int *)a1;
- (char)registerAudioUnitMockInstance:(struct ComponentInstanceRecord { long long x0[1]; } *)a0;
- (char)render:(struct ComponentInstanceRecord { long long x0[1]; } *)a0 ioActionFlags:(unsigned int *)a1 inTimeStamp:(const struct AudioTimeStamp { double x0; unsigned long long x1; double x2; unsigned long long x3; struct SMPTETime { short x0; short x1; unsigned int x2; unsigned int x3; unsigned int x4; short x5; short x6; short x7; short x8; } x4; unsigned int x5; unsigned int x6; } *)a2 inOutputBusNumber:(unsigned int)a3 inNumberFrames:(unsigned int)a4 ioData:(struct AudioBufferList { unsigned int x0; struct AudioBuffer { unsigned int x0; unsigned int x1; void *x2; } x1[1]; } *)a5 outStatus:(int *)a6;
- (void)runAudioCallback;
- (void)runAudioCallbackWithSampleCount:(unsigned int)a0 timeGap:(double)a1;
- (char)shouldProcessAudioUnit:(struct ComponentInstanceRecord { long long x0[1]; } *)a0;
- (void)startMicThread;
- (void)stopMicThread;
- (char)uninitialize:(struct ComponentInstanceRecord { long long x0[1]; } *)a0 outStatus:(int *)a1;
- (char)unregisterAudioUnitMockInstance:(struct ComponentInstanceRecord { long long x0[1]; } *)a0;

@end

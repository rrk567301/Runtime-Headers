@interface VCAudioToolboxAudioComponentMock : NSObject <VCAudioToolboxAudioComponentMockCallbacks> {
    char _isMockingEnabled;
}

+ (id)sharedInstance;

- (void)start;
- (void)stop;
- (char)copyName:(struct OpaqueAudioComponent { } *)a0 outName:(const struct __CFString **)a1 outStatus:(int *)a2;
- (char)findNextComponent:(struct OpaqueAudioComponent { } *)a0 description:(const struct AudioComponentDescription { unsigned int x0; unsigned int x1; unsigned int x2; unsigned int x3; unsigned int x4; } *)a1 outComponent:(struct OpaqueAudioComponent **)a2;
- (char)getVersion:(struct OpaqueAudioComponent { } *)a0 outVersion:(unsigned int *)a1 outStatus:(int *)a2;
- (char)instanceDispose:(struct ComponentInstanceRecord { long long x0[1]; } *)a0 outStatus:(int *)a1;
- (char)instanceNew:(struct OpaqueAudioComponent { } *)a0 outInstance:(struct ComponentInstanceRecord **)a1 outStatus:(int *)a2;

@end

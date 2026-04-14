@interface PXFailingMockAudioSession : PXMockAudioSession

- (void)pause;
- (void)play;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void)prepareToPlay;
- (void)_fail;
- (void)playFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)playFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 hostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end

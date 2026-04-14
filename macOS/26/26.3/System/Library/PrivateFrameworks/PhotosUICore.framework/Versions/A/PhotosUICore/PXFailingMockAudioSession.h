@interface PXFailingMockAudioSession : PXMockAudioSession

- (struct { long long x0; int x1; unsigned int x2; long long x3; })currentTime;
- (void)pause;
- (void)_fail;
- (void)play;
- (void)prepareToPlay;
- (void)playFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0;
- (void)playFromTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a0 hostTime:(struct { long long x0; int x1; unsigned int x2; long long x3; })a1;

@end

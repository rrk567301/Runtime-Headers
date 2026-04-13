@interface SCRFakeSound : SCRSound

- (BOOL)stop;
- (BOOL)play;
- (BOOL)isPlaying;
- (BOOL)stopImmediately;
- (void)audioCompletedCleanup;

@end

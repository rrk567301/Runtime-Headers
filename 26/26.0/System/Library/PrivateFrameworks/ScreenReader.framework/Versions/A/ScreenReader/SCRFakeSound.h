@interface SCRFakeSound : SCRSound

- (BOOL)isPlaying;
- (BOOL)stop;
- (BOOL)play;
- (BOOL)stopImmediately;
- (void)audioCompletedCleanup;

@end

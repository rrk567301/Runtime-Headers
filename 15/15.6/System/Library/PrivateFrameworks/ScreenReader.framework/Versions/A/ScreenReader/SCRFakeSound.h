@interface SCRFakeSound : SCRSound

- (char)stop;
- (char)isPlaying;
- (char)play;
- (char)stopImmediately;
- (void)audioCompletedCleanup;

@end

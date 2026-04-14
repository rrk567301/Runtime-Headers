@interface ScreenSaverController : NSObject <ScreenSaverControl> {
    void *_reserved;
}

@property (readonly) BOOL screenSaverIsRunning;
@property BOOL screenSaverCanRun;
@property (readonly) double screenSaverTimeRemaining;
@property (readonly) BOOL screenSaverIsRunningInBackground;

+ (id)controller;

- (void)restartForUser:(id)a0;
- (void)screenSaverDidFadeInBackground:(BOOL)a0 psnHi:(unsigned int)a1 psnLow:(unsigned int)a2;
- (void)screenSaverStartNow;
- (void)screenSaverStopNow;
- (void)screenSaverStopNowWithOptions:(id)a0;

@end

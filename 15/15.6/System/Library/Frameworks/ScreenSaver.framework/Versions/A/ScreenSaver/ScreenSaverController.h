@interface ScreenSaverController : NSObject <ScreenSaverControl>

@property (class, readonly) ScreenSaverController *controller;

@property char screenSaverCanRun;
@property (readonly) char screenSaverIsRunning;
@property (readonly) double screenSaverTimeRemaining;
@property (readonly) char screenSaverIsRunningInBackground;

- (void)screenSaverStartNowWithOptions:(id)a0;
- (void)restartForUser:(id)a0;
- (void)screenSaverDidFadeInBackground:(char)a0 psnHi:(unsigned int)a1 psnLow:(unsigned int)a2;
- (void)screenSaverStartNow;
- (void)screenSaverStopNow;
- (void)screenSaverStopNowWithOptions:(id)a0;

@end

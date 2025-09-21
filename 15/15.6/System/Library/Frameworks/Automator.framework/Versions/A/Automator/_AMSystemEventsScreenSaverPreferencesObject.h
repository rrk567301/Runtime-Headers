@interface _AMSystemEventsScreenSaverPreferencesObject : SBObject <_AMSystemEventsGenericMethods>

@property long long delayInterval;
@property char mainScreenOnly;
@property (readonly) char running;
@property char showClock;

- (void)start;
- (void)stop;
- (void)delete;
- (void)moveTo:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(char)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end

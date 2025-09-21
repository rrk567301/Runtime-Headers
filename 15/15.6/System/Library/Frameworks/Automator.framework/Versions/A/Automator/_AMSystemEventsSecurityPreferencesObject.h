@interface _AMSystemEventsSecurityPreferencesObject : SBObject <_AMSystemEventsGenericMethods>

@property char automaticLogin;
@property char logOutWhenInactive;
@property long long logOutWhenInactiveInterval;
@property char requirePasswordToUnlock;
@property char requirePasswordToWake;
@property char secureVirtualMemory;

- (void)delete;
- (void)moveTo:(id)a0;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(char)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end

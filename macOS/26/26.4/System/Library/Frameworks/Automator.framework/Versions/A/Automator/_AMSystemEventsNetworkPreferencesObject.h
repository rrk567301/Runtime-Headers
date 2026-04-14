@class _AMSystemEventsLocation;

@interface _AMSystemEventsNetworkPreferencesObject : SBObject <_AMSystemEventsGenericMethods>

@property (copy) _AMSystemEventsLocation *currentLocation;

- (void)delete;
- (void)moveTo:(id)a0;
- (id)services;
- (id)locations;
- (id)interfaces;
- (void)closeSaving:(int)a0 savingIn:(id)a1;
- (void)duplicateTo:(id)a0 withProperties:(id)a1;
- (void)printWithProperties:(id)a0 printDialog:(BOOL)a1;
- (void)saveIn:(id)a0 as:(int)a1;

@end

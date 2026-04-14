@interface AVSystemController : AVSystemControllerCommon

+ (id)sharedInstance;

- (id)errorWithCode:(int)a0 description:(id)a1;
- (void)dealloc;
- (void)startStevenoteManager:(int)a0;
- (void)releaseSharedInstance;
- (id)init;
- (id)copyAttributeForKeyMappingToFig;
- (id)copySetAttributeForKeyMappingToFig;
- (void)handleServerDied;
- (void)postEffectiveVolumeNotification:(id)a0;
- (void)postFullMuteDidChangeNotification:(id)a0;
- (int)systemSoundActivate:(int)a0 ssid:(unsigned int)a1 activate:(BOOL)a2;
- (int)systemSoundDidFinish:(unsigned int)a0;

@end

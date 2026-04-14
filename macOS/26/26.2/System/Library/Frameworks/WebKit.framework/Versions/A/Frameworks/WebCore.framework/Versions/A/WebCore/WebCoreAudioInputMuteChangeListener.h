@interface WebCoreAudioInputMuteChangeListener : NSObject

- (void)stop;
- (void)start;
- (void)handleMuteStatusChangedNotification:(id)a0;

@end

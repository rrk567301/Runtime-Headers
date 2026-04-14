@interface IMTipKitEventReporter : NSObject

+ (id)sharedInstance;

- (void)sendTapbackSendEvent;
- (void)sendVoiceMessageAppOpenedEvent;
- (void)sendSavePhotoEvent;
- (void)sendReceivedPhotoEvent;
- (void)sendSentMessageEvent;
- (void)sendSetNameAndPhotoProfileEvent;
- (void)sendBiomeSignal:(id)a0;
- (void)sendCoreAnalyticsSilverEvent:(id)a0;

@end

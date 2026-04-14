@interface IMTipKitEventReporter : NSObject

+ (id)sharedInstance;

- (void)sendFilterUnknownSenderStateChangedEvent;
- (void)sendJunkInboxOpenedEvent;
- (void)sendReceivedJunkEventIfNeeded;
- (void)sendTapbackSendEvent;
- (void)sendVoiceMessageAppOpenedEvent;
- (void)sendSavePhotoEvent;
- (void)sendReceivedPhotoEvent;
- (void)sendSentMessageEvent;
- (void)sendSetNameAndPhotoProfileEvent;
- (void)sendBiomeSignal:(id)a0;
- (void)sendCoreAnalyticsSilverEvent:(id)a0;

@end

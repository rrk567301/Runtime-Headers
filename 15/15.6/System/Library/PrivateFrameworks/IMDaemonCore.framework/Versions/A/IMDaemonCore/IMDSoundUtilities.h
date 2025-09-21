@interface IMDSoundUtilities : NSObject

+ (char)_isPlaySoundEnabled;
+ (void)_playSoundType:(long long)a0;
+ (char)_wasDowngraded:(id)a0;
+ (unsigned int)_installSystemSound:(id)a0;
+ (char)_isAcknowledgmentMessage:(id)a0;
+ (char)_isAssociatedMessage:(id)a0;
+ (char)_isAutoPlay:(id)a0;
+ (char)_isSMSMessage:(id)a0;
+ (char)_isSuppressedForGUID:(id)a0;
+ (char)_isUserScheduledMessage:(id)a0;
+ (void)_playAcknowledgmentSentSound;
+ (void)_playSMSSound;
+ (void)_playSentScheduledMessageSound;
+ (long long)_smsSoundsToPlay;
+ (long long)_soundTypeForMessage:(id)a0;
+ (void)_stopSuppressingForGUID:(id)a0;
+ (void)playMessageSentSoundIfNeeded:(id)a0;

@end

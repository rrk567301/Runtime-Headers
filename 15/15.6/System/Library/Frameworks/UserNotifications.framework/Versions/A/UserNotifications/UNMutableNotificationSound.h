@class NSString, NSNumber, NSURL;

@interface UNMutableNotificationSound : UNNotificationSound

@property (copy) NSString *alertTopic;
@property (copy) NSString *audioCategory;
@property (copy) NSNumber *audioVolume;
@property (getter=isCritical) char critical;
@property double maximumDuration;
@property char shouldIgnoreAccessibilityDisabledVibrationSetting;
@property char shouldIgnoreRingerSwitch;
@property char shouldRepeat;
@property (copy) NSString *toneFileName;
@property (copy) NSURL *toneFileURL;
@property (copy) NSString *toneIdentifier;
@property unsigned long long toneMediaLibraryItemIdentifier;
@property (copy) NSString *vibrationIdentifier;
@property (copy) NSURL *vibrationPatternFileURL;

- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)setMaximumDuration:(double)a0;
- (void)setCritical:(char)a0;
- (void)setAudioVolume:(id)a0;
- (void)setToneFileURL:(id)a0;
- (void)setAlertTopic:(id)a0;
- (void)setAudioCategory:(id)a0;
- (void)setShouldIgnoreAccessibilityDisabledVibrationSetting:(char)a0;
- (void)setShouldIgnoreRingerSwitch:(char)a0;
- (void)setShouldRepeat:(char)a0;
- (void)setToneFileName:(id)a0;
- (void)setToneIdentifier:(id)a0;
- (void)setToneMediaLibraryItemIdentifier:(unsigned long long)a0;
- (void)setVibrationIdentifier:(id)a0;
- (void)setVibrationPatternFileURL:(id)a0;

@end
